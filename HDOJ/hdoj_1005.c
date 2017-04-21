#include <stdio.h>
#define LIM 10001

int main()
{
    int f[LIM];
    int seekLoop[LIM];
    int a, b, n;

    f[1] = f[2] = 1;
    while (scanf("%d %d %d", &a, &b, &n) && (a || b || n)) {
        int found = 0;
        int i = 1;
        seekLoop[i] = f[i]*10 + f[i+1];
        ++i;
        while (!found && ++i <= n) {
            f[i] = (a*f[i-1] + b*f[i-2])%7;
            seekLoop[i-1] = f[i-1]*10 + f[i];
            int j = i-1;
            while (!found && j > 1) {
                if (seekLoop[--j] == seekLoop[i-1]) {
                    found = 1;
                    int t = i-1-j;
                    n -= ((n-j+1)/t - (((n-j+1)%t == 0) ? 1 : 0))*t;
                }
            }
        }
        printf("%d\n", f[n]);
    }

    return 0;
}

