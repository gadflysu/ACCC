#include <stdio.h>

int main()
{
	int n, a, b;
	int i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; ++i) {
		scanf("%d %d", &a, &b);
		printf("%ld\n", a+b);
	}

	return 0;
}

