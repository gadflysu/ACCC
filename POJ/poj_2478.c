#include <stdio.h>
#include <string.h>

#define LIM 1000100

int euler[LIM];

void getEuler() {
    memset(euler,0,sizeof(euler));
    euler[1] = 1;
    int i;
    for (i = 2; i <= LIM; ++i)
        if (!euler[i]) {
            int j;
            for (j = i;j <= LIM; j += i) {
                if (!euler[j])
                euler[j] = j;
                euler[j] = euler[j]/i*(i-1);
            }
        }
}

long long num[LIM];

int main()
{
    int n;
    int end = 2;
    num[end] = 1;
    
    getEuler();
    while (scanf("%d", &n) && n) {
        int i;
        for (i = end+1; i <= n; ++i)
            num[i] = num[i-1] + euler[i];
        end = (n > end) ? n : end;
        printf("%lld\n", num[n]);
    }

    return 0;
}

