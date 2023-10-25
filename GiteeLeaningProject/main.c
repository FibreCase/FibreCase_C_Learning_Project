#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, j = 0;
	int prinum[10000] = { 0 };
	int vrfy_pri(int);

	scanf("%d%d", &m, &n);

	for (int i = m; i <= n; i++)
	{
		if (vrfy_pri(i) == 1)
		{
			prinum[j] = i;
			j++;
		}
	}

	for (int i = 0; i < j; i++)
	{
		printf("%5d", prinum[i]);
		if ((i + 1) % 5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}

int vrfy_pri(int i)
{
	int h = 0;

	if (i <= 1)
	{
		return 0;
	}
	if (i == 2)
	{
		return 1;
	}
	for (int k = 2; k < i; k++)
	{
		if (i % k == 0)
		{
			h++;
			return 0;
		}
	}
	if (h == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
