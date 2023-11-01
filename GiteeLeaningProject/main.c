//5.1.4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0, b = 0, c = 40, j, i = 0;

	for (; a <= 40; b = 0, c = 0, a++)
	{
		for (j = 40 - a, c = j; b <= j; b++, c = j - b)
		{
			if (a * 40 + b * 30 + c * 5 == 400)
			{
				i++;
				printf("第%d种:%d个男人,%d个女人,%d个小孩\n", i, a, b, c);
			}
		}
	}

	return 0;
}

