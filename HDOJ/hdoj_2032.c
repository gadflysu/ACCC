#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) == 1) {
        int a[n][n];
        int i, j;

        for (i = 0; i < n; ++i)
            a[i][0] = a[i][i] = 1;
        for (i = 2; i < n; ++i)
            for (j = 1; j < i; ++j)
                a[i][j] = a[i-1][j-1] + a[i-1][j];
        for (i = 0; i < n; ++i) {
            for (j = 0; j <= i; ++j) {
                printf("%d", a[i][j]);
                putchar(j == i ? '\n' : ' ');
            }
        }
        putchar('\n');
    }

    return 0;
}

