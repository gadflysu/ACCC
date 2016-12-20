#include <stdio.h>

#define MON 12

int main()
{
    int y, m, d;
    
    while (scanf("%d/%d/%d", &y, &m, &d) == 3) {
        int days[] = {0, 31, (isLeapYear(y) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int i;
        int n = 0;

        for (i = 1; i < m; ++i)
            n += days[i];
        n += d;
        printf("%d\n", n);
    }

    return 0;
}

int isLeapYear(int year)
{
    if (year%4 == 0) {
        if ((year%100 == 0) && (year%400 != 0))
            return 0;
        else return 1;
    } else return 0;
}

