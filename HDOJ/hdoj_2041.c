#include <stdio.h>

int main()
{
    int n, m, i;
    
    int arr[41] = {0, 0, 1, 2};

    for (i = 4; i <= 40; ++i) {
        arr[i] = arr[i-2] + arr[i-1];
    }
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        printf("%ld\n", arr[m]);
    }

    return 0;
}
