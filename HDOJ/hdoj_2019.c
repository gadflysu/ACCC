#include <stdio.h>
#define LIM 101

int main()
{
    int n, m;
    int a[LIM];
    int i;
    int insd;
    
    scanf("%d %d", &n, &m);
    while (n != 0 || m != 0) {
        insd = 0;
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        i = 0;
        while (i < n && !insd) {
            if (a[i] > m) {
                int j;
                for (j = n; j > i; --j)
                    a[j] = a[j-1];
                a[i] = m;
                insd = 1;
            }
            ++i;
        }
        if (!insd)
            a[n] = m;
        for (i = 0; i < n+1; ++i) {
            printf("%d", a[i]);
            putchar((i < n) ? ' ' : '\n');
        }
        scanf("%d %d", &n, &m);
    }
    
    return 0;
}

