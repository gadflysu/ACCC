#include <stdio.h>

int main()
{
    int n, i;
    
    while ((scanf("%d", &n) == 1)){
        int sum = 0, x;
        for (i = 0; i < n; ++i) {
            scanf("%d", &x);
            sum += x;
        }
        printf("%d\n", sum);
    }

    return 0;
}

