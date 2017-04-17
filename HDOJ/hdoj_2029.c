#include <stdio.h>
#include <string.h>
#define LIM 10001

int main()
{
    int n, i;

    while (scanf("%d", &n) == 1) {
        for (i = 0; i < n; ++i) {
            char s[LIM];
            scanf("%s", s);
            int len = strlen(s);
            int j = 0;
            int maybe = 1;
            while (j < len/2 && maybe) {
                if (s[j] != s[len-1-j])
                    maybe = 0;
                else
                    ++j;
            }
            if (maybe)
                printf("yes\n");
            else
                printf("no\n");
        }
    }

    return 0;
}

