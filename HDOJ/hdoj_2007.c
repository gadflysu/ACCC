#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    int i;
    
    while (scanf("%d %d", &m, &n) == 2) {
        long int x = 0, y = 0;

        if (m > n) {
            int temp = m;
            m = n;
            n = temp;
        }
        for (i = m; i <= n; ++i) {
            if (i%2 == 0)
                x += (int)pow(i, 2);
            else if (i%2 == 1)
                y += (int)pow(i, 3);
        }
        printf("%ld %ld\n", x, y);
    }
    
    return 0;
}

