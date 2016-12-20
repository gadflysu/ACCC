#include <stdio.h>

int main()
{
    int n, i;
    
    scanf("%d", &n);
    while (n != 0) {
        int x, sum = 0;
        for (i = 0; i < n; ++i) {
            scanf("%d", &x);
            sum += x;
        }
        printf("%d\n", sum);
        scanf("%d", &n);
    }

    return 0;
}

