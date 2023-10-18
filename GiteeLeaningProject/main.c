#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
	int b = 0, c = 0,t;
	int ver(int, int);
	while (b<9&&c<9)
	{
		for (int i = 0; i < 10;)
		{
			if (ver(b,c) == 1)
			{
				i++; c++;
				if (c == 10)
				{
					b++; c = 0;
				}
	
			}
			else
			{
				c++;
				if (c == 10)
				{
					b++; c = 0;
				}
			}
		}
		printf("\n");
	}
    return 0;
}


int ver(int b, int c)
{
	if ((100+b*10+c)%2==0 && b!=c && b != 1 && c != 1)
	{
		printf("%6d", (100 + b * 10 + c));
		return 1;
	}
	else
	{
		return 0;
	}
}