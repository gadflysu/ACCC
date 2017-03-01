#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;
    
    scanf("%d\n", &n);
    while (n-- > 0) {
        int c, m = 0;
        
        while ((c = getchar()) != '\n')
            if (isdigit(c))
                ++m;
        printf("%d\n", m);
    }

    return 0;
}

