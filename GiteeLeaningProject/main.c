#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float m, n, count;
	scanf("%f,%f", &m, &n);
	if (200 < m && m < 300 && n>0 && n < 100)
		count = 0.0 + m * n / 100;
	printf("%d\n", (int)ceil(count));
	return 0;
}
