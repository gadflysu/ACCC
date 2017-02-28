#include <stdio.h>

int main()
{
    int n, m;
    int i, j = 0;
    int l;
    
    while (scanf("%d %d", &n, &m) == 2) {
        for (i = 2; i <= n*2; i += 2) {
            ++j;
            if (j == 1)
                l = i;
            if (j == m || i == n*2) {
                printf("%d", (l+i)/2);
                j = 0;
                putchar((i == n*2) ? '\n' : ' ');
            }
        }
    }

    return 0;
}

