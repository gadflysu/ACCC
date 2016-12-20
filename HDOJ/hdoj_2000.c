#include <stdio.h>

#define LIM 3

int main()
{
    int c;
    int a[LIM];
    int n = 0;
    
    while ((c = getchar()) !=  EOF) {
        if (c != '\n') {
            a[n++] = c;
            if (n%3 == 0) {
                int i, j;
                
                for (i = 0; i < n; ++i) {
                    for (j = i+1; j < n; ++j)
                        if (a[i] > a[j]){
                            int temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                }
                for (i = 0; i < n; ++i) {
                    putchar(a[i]);
                    putchar((i == n-1)? '\n' : ' ');
                }
                n = 0;
            }
        }
    }

    return 0;
}

