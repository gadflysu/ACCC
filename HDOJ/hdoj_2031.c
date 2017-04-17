#include <stdio.h>
#define LIM 10001

int main()
{
    int n, r;

    while (scanf("%d%d", &n, &r) == 2) {
        if (n < 0) {
            putchar('-');
            n = -n;
        }
        int x[LIM] = {0};
        int i = 0;
        do {
            x[i++] = n%r;
        } while ((n /= r) != 0);
        int len = i;
        for (i = len-1; i >= 0; --i) {
            if (x[i] < 10)
                printf("%d", x[i]);
            else {
                x[i] = x[i]-10+'A';
                putchar(x[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}

