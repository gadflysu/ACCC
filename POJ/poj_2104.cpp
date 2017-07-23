#include <stdio.h>
#include <algorithm>

#define MAXN 100100

using namespace std;

typedef struct {
    int data;
    int pos;
} array;

bool comp(const array &a, const array &b) {
    return a.data < b.data;
}

int main() {
    int n, m;
    array a[MAXN];
    
    // initial
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i].data);
        a[i].pos = i;
    }
    sort(a, a+n, comp);

    // questions
    for (int t = 0; t < m; ++t) {
        int i, j, k;
        int cur = 0;            // current retrieval location

        scanf("%d %d %d", &i, &j, &k);
        while (k--) {
            while (a[cur].pos < i-1 || a[cur].pos > j-1) {
                ++cur;
            }
            ++cur;
        }
        printf("%d\n", a[cur-1].data);
    }

    return 0;
}
