#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	//分解一个数
	int i = 2;
	int vrfy(int);

	for (; i <= 10000; i++)
	{
		if (vrfy(i) == 1)
		{
			printf("%d\n",i);
		}
	}

	return 0;
}

int vrfy(int i)
{
	
}