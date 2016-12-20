#define LIMIT 100

#include <stdio.h>
#include <math.h>

int isDaff(int x);

int main()
{
    int m, n;
    int i;
    int nd;         /*  number of Number of daffodils   */
    int a[LIMIT];   /*  save Number of daffodils found  */
    
    while (scanf("%d %d", &m, &n) == 2) {
        nd = 0;
        for (i = m; i <= n; ++i) {
            if (isDaff(i)) {
                a[nd++] = i;
            }
        }
        if (nd == 0)
            printf("no\n");
        else {
            for (i = 0; i < nd; ++i) {
                printf("%d", a[i]);
                putchar((i == nd-1) ? '\n' : ' ');
            }
        }
    }

    return 0;
}

int isDaff(int x)
{
    int s;
    int tmp = x;
    
    s = 0;
    s += pow(tmp%10, 3);
    tmp /= 10;
    s += pow(tmp%10, 3);
    tmp /= 10;
    s += pow(tmp%10, 3);

    if (s == x)
        return 1;
    else
        return 0;
}
