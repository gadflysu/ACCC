#include <stdio.h>
#define INIT 3

int main()
{
    int t, i, j;

    scanf("%d", &t);
    for (i = 0; i < t; ++i) {
        int n, num = INIT;
        scanf("%d", &n);
        for (j = 0; j < n; ++j)
            num = (num-1)*2;
        printf("%d\n", num);
    }

    return 0;
}

