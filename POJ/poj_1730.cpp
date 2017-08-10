#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    while (scanf("%d", &n) && n) {
        bool flag = false;
        if (n < 0) {
            n = -n;
            flag = true;
        }
        for (int i = 31; i > 0; --i) {
            int b = (int) (pow(1.0*n, 1.0/i) + 0.1);
            int nn = (int) (pow(1.0*b, 1.0*i) + 0.1);
            if (n == nn) {
                if (flag)
                    while (i % 2 == 0)
                        i /= 2;
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
