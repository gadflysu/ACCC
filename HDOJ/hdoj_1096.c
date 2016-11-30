#include <stdio.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		int m, x, sum = 0;
		int j;

		scanf("%d", &m);
		for (j = 0; j < m; ++j) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d\n", sum);
		if (i < n-1)
			putchar('\n');
	}

	return 0;
}

