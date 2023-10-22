//from JinRen 23.10.22
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a = 0, b = 0, c, j, i = 0, s = 0;
	int vrfy(int, int, int);
	scanf("%d", &n);

	for (c = n; a <= n; b = 0, a++)
	{
		for (j = n - a, c = j; b <= j; b++, c = j - b)
		{
			if (vrfy(a, b, c) == 1)
			{
				printf("%d %d %d\n", a, b, c);
				s++;
			}
		}
	}


	if (s == 0)
	{
		printf("No output");
	}


	return 0;
}

int vrfy(int a, int b, int c)
{
	if (a * 50 + b * 20 + c == 1200)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
