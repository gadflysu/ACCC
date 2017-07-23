#include <stdio.h>
#include <string.h>

const int MAXN = 1100100;
char ma[MAXN*2];
int mp[MAXN*2];

int min(int a, int b) {
    if (a < b)
        return a;
    else
            return b;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

void Manacher(char s[], int len) {
    int l = 0;
    ma[l++] = '$';
    ma[l++] = '#';
    for (int i = 0; i < len; i++) {
        ma[l++] = s[i];
        ma[l++] = '#';
    }
    ma[l] = 0;
    int mx = 0, id = 0;
    for (int i = 0; i < l; i++) {
        mp[i] = mx > i ? min(mp[id*2 - i], mx-i) : 1;
        while (ma[i + mp[i]] == ma[i - mp[i]])
            mp[i]++;
        if (i + mp[i] > mx) {
            mx = i + mp[i];
            id = i;
        }
    }
}

/*
 * abaaba
 * i: 0 1 2 3 4 5 6 7 8 9 10 11 12 13
 * ma[i]: $ # a # b # a # a $ b # a #
 * mp[i]: 1 1 2 1 4 1 2 7 2 1 4 1 2 1
 */
char s[MAXN];
int main()
{
    int no = 0;
    while (scanf("%s", s) == 1 && strcmp(s, "END")) {
        int len = strlen(s);
        Manacher(s, len);
        int ans = 0;
        for (int i = 0; i < len*2 + 2; i++)
            ans = max(ans, mp[i]-1);
        printf("Case %d: %d\n", ++no, ans);
    }
    
    return(0);
}

