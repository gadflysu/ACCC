#include <stdio.h>
#define YR 4
int main()
{
        int a[YR], i, n;
        int sum;
        
    scanf("%d", &n);
        while (n != 0) {
            // init
            for (i = 0; i < YR; ++i)
            a[i] = 0;
        a[YR-1] = 1;
        // from 1 to (n-1) year cow grow and born
        for (i = 1; i < n; ++i) {
                int j;
            int adult = a[YR-1];
            
                for (j = YR-1; j > 0; --j)
                    a[j] = a[j-1];
            a[YR-1] += adult;
            a[0] = a[YR-1];
        }
        // calculate cow at each ege
        sum = 0;
        for (i = 0; i < YR; ++i)
            sum += a[i];
        printf("%d\n", sum);
        
        scanf("%d", &n);
    }

    return 0;
}

