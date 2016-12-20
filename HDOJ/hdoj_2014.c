#include <stdio.h>

int main()
{
    int n, i;
    double t, max, min;
    double s;
    
        while (scanf("%d", &n) == 1) {
            s = 0;
            max = 0;
        min = 100;
            for (i = 0; i < n; ++i) {
                scanf("%lf", &t);
            s += t;
            max = (t >= max) ? t : max;
            min = (t <= min) ? t : min;
        }
        printf("%.2f\n", (s-max-min)/(double)(n-2));
    }

    return 0;
}

