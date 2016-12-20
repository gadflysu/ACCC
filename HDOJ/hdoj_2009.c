#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    int m;
    
    while (scanf("%lf %d", &n, &m) == 2) {
        double s = 0;

        while (m > 0) {
            s += n;
            n = sqrt(n);
            --m;
        }
        printf("%.2lf\n", s);
    }

    return 0;
}

