#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
	int i, j = 1;

	for ( i = 0; i < 9; i++)
	{
		j = (j + 1) * 2;
	}
	printf("猴子第一天摘了%d个桃子",j);

    return 0;
}