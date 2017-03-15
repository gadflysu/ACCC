#include <stdio.h>

int main()
{
        int n, i, j;
        int w;                  // wages
        int rmb[6] = {100, 50, 10, 5, 2, 1};
        int num;
        
        scanf("%d", &n);
        while (n != 0) {
            num = 0;
            for (i = 0; i < n; ++i) {
                scanf("%d", &w);
            j = 0;
                while (w > 0 && j < 6) {
                while (w >= rmb[j]) {
                    w -= rmb[j];
                    ++num;
                }
                ++j;
            }
        }
        printf("%d\n", num);
        
            scanf("%d", &n);
    }

    return 0;
}

