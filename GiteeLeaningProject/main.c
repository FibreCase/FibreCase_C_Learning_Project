#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
	int a=1, b=0, c=0;
	int verf(int, int, int);

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				verf(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}

    return 0;
}

int verf(int a, int b, int c)
{
	int n, v;
	n = a * 100 + b * 10 + c;
	v = a * a * a + b * b * b + c * c * c;
	if (n ==v)
	{
		printf("%5d", n);
	}

	return 0;
}