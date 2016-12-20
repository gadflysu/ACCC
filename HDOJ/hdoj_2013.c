#include <stdio.h>

int main()
{
    int n, i;
    int s;
    
    while (scanf("%d", &n) == 1) {
        s = 1;
        for (i = 0; i < n-1; ++i)
            s = (s+1)*2;
        printf("%d\n", s);
    }
    
    return 0;
}

