#include <stdio.h>

int main()
{
    int m, n;          /*  m: number of test cases; n: test case    */
    double sign;
    int i, j;
    double s;
    
    scanf("%d", &m);
    for (i = 0; i < m; ++i) {
        scanf("%d", &n);
        s = 0;
        sign = 1;
        for (j = 1; j <= n; ++j) {
            s += sign/(double)j;
            sign = -sign;
        }
        printf("%.2lf\n", s);
    }
    
    return 0;
}

