#include <stdio.h>

int main()
{
    int n, i;
    
    while (scanf("%d", &n) == 1) {
        long int result = 1;
        int x;

        for (i = 0; i < n; ++i) {
            scanf("%d", &x);
            if (x%2)
                result *= x;
        }
        printf("%ld\n", result);
    }

    return 0;
}

