#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, n, c = 0, s = 0;
	scanf("%d%d", &a, &n);

	for (int i = 0; i < n; i++)
	{
		c = c + pow(10, i);
		s = s + c * a;
	}

	printf("S%d(%d)=%d", n, a, s);

	return 0;
}