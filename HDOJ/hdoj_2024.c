#include <stdio.h>
#include <string.h>
#define LIM 50

int main()
{
    char s[LIM];
    int n, i;

    scanf("%d\n", &n);
    for (i = 0; i < n; ++i) {
        char c;
        int j = 0;
        while ((c = getchar()) != '\n') {
            s[j++] = c;
        }
        s[j] = 0;
        if (!isalpha(s[0]) && s[0] != '_') {
            printf("no\n");
            continue;
        } else {

            int j = 0;
            while (isalnum(s[++j]) || s[j] == '_')
                ;
            if (s[j] == 0)
                printf("yes\n");
            else
                printf("no\n");
        }
    }

    return 0;
}

