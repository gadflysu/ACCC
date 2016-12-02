#include <stdio.h>

#define UP_TM	6
#define DOWN_TM	4
#define STAY_TM 5

int main()
{
	int n, i;
	
	scanf("%d", &n);
	while (n != 0) {
		int status = 0;
		long int t = 0;
		int aim;

		for (i = 0; i < n; ++i) {
			scanf("%d", &aim);
			if (aim > status)
				t += (aim-status)*UP_TM;
			else if (aim < status)
				t += (status-aim)*DOWN_TM;
			t += STAY_TM;
			status = aim;
		}
		printf("%ld\n", t);
		scanf("%d", &n);
	}	
	
	return 0;
}

