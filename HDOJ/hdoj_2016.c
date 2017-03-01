#define LIM 100
#include <stdio.h>

int main()
{
        int n;
        
        scanf("%d", &n);
        while (n != 0) {
            int i, locMin;
            int a[LIM];
            
            for (i = 0; i < n; ++i) {
                scanf("%d", &a[i]);
        }
//        for (i = 0; i < n; ++i) {
//            printf("%d", a[i]);
//            putchar((i == n-1) ? '\n' : ' ');
//        }
        locMin = 0;
        for (i = 0; i < n; ++i) {
            if (a[i] < a[locMin])
                locMin = i;
        }
        int t = a[0];
        a[0] = a[locMin];
        a[locMin] = t;
        for (i = 0; i < n; ++i) {
            printf("%d", a[i]);
            putchar((i == n-1) ? '\n' : ' ');
        }
        
        scanf("%d", &n);
    }

    return 0;
}

