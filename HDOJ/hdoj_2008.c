#include <stdio.h>

int main()
{
        int n, i;
    double x;
    int nn, zr, pn;         /*  negative number, zero, positive number  */
    
        scanf("%d", &n);
        while (n != 0) {
            nn = zr = pn = 0;
        for (i = 0; i < n; ++i) {
            scanf("%lf", &x);
            if (x < 0) {
                ++nn;
            } else if (x == 0) {
                ++zr;
            } else if (x > 0) {
                ++pn;
            }
        }
        printf("%d %d %d\n", nn, zr, pn);
            scanf("%d", &n);
    }

    return 0;
}

