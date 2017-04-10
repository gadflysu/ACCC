#include <stdio.h>
#include <string.h>

int main()
{
    int c;
    int up = 1;

    while ((c = getchar()) != EOF) {
        if (up) {
            putchar(toupper(c));
            up = 0;
        }
        else
            putchar(c);
        if (c == '\n' || isspace(c))
            up = 1;
    }

    return 0;
}

