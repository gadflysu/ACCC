#include <stdio.h>
#define NLIM 50
#define MLIM 5

int main()
{
    int n, m, i, j;
    int a[NLIM][MLIM];
    double subAve[MLIM];
    int next;
    int num;
    
    if (scanf("%d %d", &n, &m) == 2)
        next = 1;
    while (next) {
        for (i = 0; i < n; ++i)
            for (j = 0; j < m; ++j)
                scanf("%d", &a[i][j]);
        for (i = 0; i < n; ++i) {
            double g = 0.0;        // total grade of a stu

            for (j = 0; j < m; ++j)
                g += a[i][j];
            printf("%.2lf", g/(double)m);
            putchar((i == n-1) ? '\n' : ' ');
        }
        for (j = 0; j < m; ++j) {
            double g = 0.0;        // total grade of a sub

            for (i = 0; i < n; ++i) {
                g += a[i][j];
            }
            subAve[j] = g/(double)n;
            printf("%.2lf", subAve[j]);
            putchar((j == m-1) ? '\n' :' ');
        }
        num = 0;
        for (i = 0; i < n; ++i) {
            j = 0;
            while (a[i][j] >= subAve[j] && j < m)
                ++j;
            if (j == m)
                ++num;
        }
        printf("%d\n\n", num);
        
        if (scanf("%d %d", &n, &m) == 2) {
//            putchar('\n');
            next = 1;
        } else
            next = 0;
    }

    return 0;
}

