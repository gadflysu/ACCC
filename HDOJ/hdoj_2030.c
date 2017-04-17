#include <stdio.h>
#define LIM 10001

int main()
{
    int n, i;

    scanf("%d\n", &n);
    for (i = 0; i < n; ++i) {
        int c, count = 0;

        char s[LIM];
        gets(s);
        int j;
        for (j = 0; s[j] != 0; ++j) {
            if (s[j] < 0)
                ++count;
        }

        printf("%d\n", count/2);
    }

    return 0;
}

