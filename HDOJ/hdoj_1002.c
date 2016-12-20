#include <stdio.h>
#include <math.h>

#define LIMIT 1001

int a[LIMIT], b[LIMIT], sum[LIMIT];

void getn(int n[]);
void add(int a[], int b[]);
void showx(int n[]);
void swap(int *a, int *b);

int main()
{
    int n, i;
    
    scanf("%d\n", &n);
    for (i = 1; i <= n; i++) {
        getn(a);
        getn(b);
        add(a, b);
        printf("Case %d:\n", i);
        showx(a);
        printf(" + ");
        showx(b);
        printf(" = ");
        showx(sum);
        printf("\n");
        if (i < n)
            printf("\n");
    }
    
    return 0;
}

void getn(int n[])
{
    int c, i;
    
    for (i = 0; i < LIMIT; ++i)
        n[i] = -1;
    while ((c = getchar()) == ' ')
        ;
    i = 0;
    while (isdigit(c)) {
        n[i] = c-'0';
        ++i;
        c = getchar();
    }
    int l = i;
    for (i = 0; i < l/2; ++i)
        swap(&n[i], &n[l-1-i]);
}

void add(int a[], int b[])
{
    int temp = 0, i;
    
    for (i = 0; i < LIMIT; i++)
        sum[i] = -1;
        
    i = 0;
    while (a[i] != -1 || b[i] != -1) {
        temp += ((a[i] != -1) ? a[i] : 0);
        temp += ((b[i] != -1) ? b[i] : 0);
        sum[i] = temp%10;
        temp /= 10;
        ++i;
    }
    if (temp > 0)
        sum[i] = 1;
}

void showx(int x[])
{
    int i, n = 0;
    while (x[n] != -1)
        ++n;
    for (i = n-1; i >= 0; --i) {
        printf("%d", x[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

