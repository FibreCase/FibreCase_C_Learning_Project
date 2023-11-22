#include <stdio.h>

int
main()
{
	int n;
	int sut[11][11] = {0};
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i) {
		sut[i][1] = 1;
		sut[i][i] = 1;
	}

	if (n >= 3) {
		for (int i = 3; i <= n; ++i) {
			for (int j = 2; j <= i - 1; ++j) {
				sut[i][j] = sut[i - 1][j - 1] + sut[i - 1][j];
			}
		}
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			printf("%5d ", sut[i][j]);
		}
		printf("\n");
	}

	return 0;
}

