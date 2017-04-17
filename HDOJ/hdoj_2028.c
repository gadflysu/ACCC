#include <stdio.h>
#include <string.h>

int main()
{
    int i, n;

    while (scanf("%d", &n) == 1) {
        int max = 0;
        int a[n];

        for (i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
            if (max < a[i])
                max = a[i];
        }

        long lcm = 0;
        int isLCM = 0;
        while (!isLCM) {
            lcm += max;
            int maybe = 1;
            i = 0;
            while (maybe && i < n) {
                if (lcm%a[i] != 0)
                    maybe = 0;
                else
                    ++i;
            }
            if (maybe)
                isLCM = 1;
        }

        printf("%ld\n", lcm);
    }

    return 0;
}
