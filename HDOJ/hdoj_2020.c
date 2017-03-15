#include <stdio.h>
#include <math.h>

#define LIM 100

void swap(int *a, int *b);

int main()
{
    int n;
    int a[LIM], sign[LIM];
    
    scanf("%d", &n);
    while (n != 0) {
        int i, j;
        
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        for (i = 0; i < n; ++i)
            for (j = i+1; j < n; ++j)
                if (abs(a[i]) < abs(a[j]))
                    swap(&a[i], &a[j]);
        for (i = 0; i < n; ++i) {
            printf("%d", a[i]);
            putchar((i == n-1) ? '\n' : ' ');
        }
        
        scanf("%d", &n);
    }

    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
