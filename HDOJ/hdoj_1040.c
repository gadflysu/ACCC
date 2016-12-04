#include <stdio.h>

#define LIM 1001

int main()
{
	int t, n;
	int i, j, k;

	scanf("%d", &t);
	for (i = 0; i < t; ++i) {
		int a[LIM];
	
		scanf("%d", &n);
		for (j = 0; j < n; ++j)
			scanf("%d", &a[j]);
		for (j = 0; j < n; ++j) {
			for (k = j+1; k < n; ++k) {	
				if (a[j] > a[k]){
					int t = a[j];
					a[j] = a[k];
					a[k] = t;
				}
			}
		}
		for (j = 0; j < n; ++j) {
			printf("%d", a[j]);
			putchar((j == n-1) ? '\n' : ' ');
 		}
	}

	return 0;
}

