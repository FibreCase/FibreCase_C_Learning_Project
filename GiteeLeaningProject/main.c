#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[15] = { 1,4,6,9,9,6,19,4,4,8,12,1,9,18,19 };
	int t;

	scanf("%d", &t);

	for (int i = 0; i < 15; i++)
	{
		if (a[i] = t)
		{
			for (; i < 15; i++)
			{
				a[i] = a[i + 1];
			}
			break;
		}
	}


	for (int i = 0; i < n -1; i++)
	{
		printf("%d ", a[i]);
	}

    return 0;
}