#include <stdio.h>
#include <math.h>

#define LIM 100
int main()
{
    int n, m, i, j;
    long int a[LIM][LIM], x, max;
    int mi, mj;
        
    while (scanf("%d %d", &n, &m) == 2) {
        max = 0;
        for (i = 1; i <= n; ++i)
            for (j = 1; j <= m; ++j) {
                scanf("%d", &x);
                if (-abs(x) < -abs(max)) {
                    max = x;
                    mi = i;
                    mj = j;
                }
            }
        printf("%d %d %d\n", mi, mj, max);
    }

    return 0;
}

