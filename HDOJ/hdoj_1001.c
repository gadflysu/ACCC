#include <stdio.h>

long int sum(int n);

int main()
{
    int n;
    
    while (scanf("%d", &n) != EOF) {
        printf("%d\n\n", sum(n));
    }
    
    return 0;
}

long int sum(int n)
{
    int i, s = 0;
    
    for (i = 1; i <= n; i++)
        s += i;

    return s;
}
