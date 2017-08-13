#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

#define INF 0x3f3f3f3f

typedef long long ll;

const int MOD = 1000000007;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a%b); }
int C(int a, int b);

int main() {
    int t, n, m;

    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        int a = max(n, m);
        int b = min(n, m);
        printf("%d\n", C(a, b));
    }

    return 0;
}

int C(int a, int b) {
    ll ans = 1;

    if (b > a/2)
        b = a-b;
    int divB = b;
    for (int i = 1; i <= b; ++i) {
        if (divB >= 1 && ans/divB > 0 && ans%divB == 0) {
            ans /= divB;
            --divB;
        }
        ans = (ans*a != MOD) ? (ans*a)%MOD : ans*a;
        --a;
    }
    for (int i = divB; i >= 1; --i) {
        while (ans/i <= 0 || ans%i != 0)
            ans += MOD;
        ans /= i;
    }

    return (int)ans;
}
