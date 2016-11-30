#include <stdio.h>

/*  find LCM */

int main()
{
	long int a, b;
	
	while (scanf("%d %d", &a, &b) == 2) {
		if (a < b) {
			int temp = a;
			a = b;
			b = temp;
		}
		int lcm = a;
		while (lcm%b)
			lcm += a;
		printf("%ld\n", lcm);
	}

	return 0;
}

