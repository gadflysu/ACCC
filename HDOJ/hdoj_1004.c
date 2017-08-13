#include <stdio.h>
#include <string.h>
#define nLIM 1001
#define wLIM 16

int main()
{
    int n;

    scanf("%d", &n);
    while (n) {
        int i, nType = 0;
        int cnt[n];
        char s[n][wLIM];

        memset(cnt, 0, sizeof(cnt));
        for (i = 0; i < n; ++i) {
            char ts[wLIM];
            int found = 0, j;

            scanf("%s", ts);
            for (j = 0; j < nType; ++j)
                if (!strcmp(ts, s[j])) {
                    ++cnt[j];
                    found = 1;
                    break;
                }
            if (!found) {
                ++cnt[nType];
                strcpy(s[nType++], ts);
            }
        }
        int max = 0, lc;
        for (i = 0; i < nType; ++i) {
            if (max < cnt[i]) {
                max = cnt[i];
                lc = i;
            }
        }
        printf("%s\n", s[lc]);
        scanf("%d", &n);
    }

    return 0;
}

