#include <iostream>
#include <cstdio>
#include <cstring>
#define INF 0x3f3f3f3f
#define L 0
#define R 1

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int LIM = 20 + 10;
int t;
int n;
int p[LIM];
int k;
int s[LIM * 2];
int matched[LIM * 2];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        k = 0;
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            for (int j = 0; j < p[i] - p[i - 1]; ++j) {
                s[k++] = L;
            }
            s[k++] = R;
        }
        memset(matched, 0, sizeof(matched));
        for (int i = 0; i < n * 2; ++i) {
            if (s[i] == R) {
                int j = i;
                while (s[j] != L || matched[j]) {
                    --j;
                }
                matched[j] = 1;
                cout << (i - j + 1) / 2 << ((i == n * 2 - 1) ? "\n" : " ");
            }
        }
    }

    return 0;
}