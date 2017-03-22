#include <stdio.h>
#define DP 23
#define DE 28
#define DI 33

int min(int a, int b, int c);

int main()
{
    int p, e, i, d;
    int count = 0;
    
    scanf("%d %d %d %d", &p, &e, &i, &d);
    while (p != -1 || e != -1 || i != -1 || d != -1) {
        int np = p;
        int ne = e;
        int ni = i;
        
        while (np < d || np-d >= DP)
            np += (np < d) ? DP : -DP;
        while (ne < d || ne-d >= DE)
            ne += (ne < d) ? DE : -DE;
        while (ni < d || ni-d >= DI)
            ni += (ni < d) ? DI : -DI;
        while (np != ne || ne != ni || np <= d) {
            switch (min(np, ne, ni)) {
                case 0 :
                    np += DP;
                    break;
                case 1 :
                    ne += DE;
                    break;
                case 2 :
                    ni += DI;
                    break;
                default :
                    break;
            }
        }
        printf("Case %d: the next triple peak occurs in %d days.\n", ++count, np-d);
        scanf("%d %d %d %d", &p, &e, &i, &d);
    }

    return 0;
}

int min(int a, int b, int c) {
    if (a <= b && a <= c)
        return 0;
    else if (b <= a && b <= c)
        return 1;
    else
        return 2;
}
