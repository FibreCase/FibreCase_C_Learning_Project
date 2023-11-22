#include <stdio.h>

int
main()
{
	int org[2][3];
	int sut[3][2];

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			scanf("%d",&org[i][j]);
		}
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			sut[i][j] = org[j][i];
		}
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			printf("%d ",sut[i][j]);
		}
		printf("\n");
	}

	return 0;
}

