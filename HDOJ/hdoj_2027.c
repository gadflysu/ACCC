#include <stdio.h>

int main()
{
    int n, i;
    int c;

    scanf("%d\n", &n);
    c = getchar();
    for (i = 0; i < n; ++i) {
        int a[5] = {0};
        while (c != '\n') {
            if (c == 'a' || c == 'A')
                ++a[0];
            else if (c == 'e' || c == 'E')
                ++a[1];
            else if (c == 'i' || c == 'I')
                ++a[2];
            else if (c == 'o' || c == 'O')
                ++a[3];
            else if (c == 'u' || c == 'U')
                ++a[4];
            c = getchar();
        }
        int j;
        for (j = 0; j < 5; ++j) {
            switch (j) {
                case 0 :
                    printf("a:%d\n", a[j]);
                    break;
                case 1 :
                    printf("e:%d\n", a[j]);
                    break;
                case 2 :
                    printf("i:%d\n", a[j]);
                    break;
                case 3 :
                    printf("o:%d\n", a[j]);
                    break;
                case 4 :
                    printf("u:%d\n", a[j]);
                    break;
            }
        }
        if ((c = getchar()) != EOF)
            putchar('\n');
    }

    return 0;
}

