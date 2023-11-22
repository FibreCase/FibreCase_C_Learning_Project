#include<stdio.h>
int
main()
{
	int m, n, a, b, d, e, t = 0;
	d = 0;
	scanf("%d %d", &m, &n);
	if (m > n) {
		e = m;
		m = n;
		n = e;
	}
	for (a = m + 1; a <= n; a++) {
		for (b = 2; b < a; b++) {
			if (a % b == 0){
				t = 1;
				break;
			}
		}

		if (t == 1) {
			t = 0;
			continue;
		}

		if (a == b) {
			printf("%5d", a);
			d++;
			if (d % 5 == 0)
				printf("\n");
		}

	}
	return 0;
}