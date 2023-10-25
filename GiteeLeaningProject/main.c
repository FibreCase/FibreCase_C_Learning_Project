#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 2;
	int vrfy(int);

	for (; i <= 10000; i++)
	{
		if (vrfy(i) == 1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}

int vrfy(int i)
{
	int vrfy_100(int);
	int vrfy_268(int);
	if (vrfy_100(i) == 1)
	{
		if (vrfy_268(i) == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

int vrfy_100(int i)
{
	int j;
	i = i + 100;
	j = sqrt(i);
	if (i == j * j)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int vrfy_268(int i)
{
	int j;
	i = i + 268;
	j = sqrt(i);
	if (i == j * j)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}