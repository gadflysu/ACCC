#include <stdio.h>
#include <string.h>
#define LIM 100

int main()
{
    int c;
    int s[100];
    int max = 0;
    int n = 0;

    while ((c = getchar()) != EOF) {
        if (c != '\n')
            s[n++] = c;
        else {
            int i;
            for (i = 0; i < n; ++i) {
                int tc = s[i];
                if (tc > max)
                    max = tc;
            }
            for (i = 0; i < n; ++i) {
                int tc = s[i];
                if (tc == max)
                    printf("%c(max)", s[i]);
                else
                    putchar(s[i]);
            }
            putchar('\n');
            n = 0;
            max = 0;
        }
    }

    return 0;
}

