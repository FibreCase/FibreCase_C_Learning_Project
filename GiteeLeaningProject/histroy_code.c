#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, i, r, x, y;
	scanf("%d,%d,&m,&n");
	x = m * n;
	if (m < n)
	{
		i = m;
		m = n;
		n = i;
	}

	printf("1+2+...+%d=%d\n", n, sum);
	return 0;
}

//************************************************************************
//4.1.7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int b = 0, c = 0;
	int ver(int, int);
	while (b < 9 && c < 9)
	{
		for (int i = 0; i < 10;)
		{
			if (ver(b, c) == 1)
				//����ʹ���Ӻ�����Ŀ���Ǳ��ڼ���Ƿ��������������ļ���
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
	if ((100 + b * 10 + c) % 2 == 0 && b != c && b != 1 && c != 1)
	{
		printf("%6d", (100 + b * 10 + c));
		return 1;
	}
	else
	{
		return 0;
	}
}

//************************************************************************
//4.1.6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n, s = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		s = i * s;
	}

	printf("%d", s);
	return 0;
}

//************************************************************************
//4.1.5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	char c;

	while ((c = getchar()) != '#')
	{
		if (c == 'a')
		{
			a++;
		}
		else if (c == 'e')
		{
			e++;
		}
		else if (c == 'i')
		{
			i++;
		}
		else if (c == 'o')
		{
			o++;
		}
		else if (c == 'u')
		{
			u++;
		}
	}

	printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d", a, e, i, o, u);

	return 0;
}

//************************************************************************
//4.1.4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i, j = 1;

	for (i = 0; i < 9; i++)
	{
		j = (j + 1) * 2;
	}
	printf("���ӵ�һ��ժ��%d������", j);

	return 0;
}


//****************************************************************
//4.1.3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a = 1, b = 0, c = 0;
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
	if (n == v)
	{
		printf("%5d", n);
	}

	return 0;
}


//****************************************************
//4.1.2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, i, a;
	int min(int, int), max(int, int);
	scanf("%d,%d", &m, &n);
	i = min(m, n);
	while (i >= 1)
	{
		if (m % i == 0 && n % i == 0)
		{
			printf("���Լ����%d\n", i);
			break;
		}
		else
		{
			i--;
		}
	}
	a = max(m, n);
	while (1)
	{
		if (a % m == 0 && a % n == 0)
		{
			printf("��С��������%d", a);
			break;
		}
		else
		{
			a++;
		}
	}

	return 0;
}

int min(int m, int n)
{
	if (m >= n)
	{
		return n;
	}
	else
	{
		return m;
	}
}

int max(int m, int n)
{
	if (m >= n)
	{
		return m;
	}
	else
	{
		return n;
	}
}

//***********************************************
//4.1.1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c; //�û������ַ�
	int letters = 0, // ��ĸ��Ŀ
		space = 0, // �ո���Ŀ
		digit = 0, // ������Ŀ
		others = 0; // �����ַ���Ŀ
	while ((c = getchar()) != '\n')
	{ // ÿ�ζ�ȡһ���ַ����س�ʱ����
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;//��ĸ��1
		else if (c == ' ')
			space++;//�ո�+1
		else if (c >= '0' && c <= '9')
			digit++;//����+1
		else
			others++;//����+1
	}
	printf("��ĸ��:%d\n�ո���:%d\n������:%d\n�����ַ���:%d\n\n", letters, space, digit, others);

	return 0;
}

//*******************************************************************
//3.2.4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float mon = 0, inter;
	char i;
	scanf("%f", &inter);

	if (inter < 100000)
	{
		i = 1;
	}
	else if (inter <= 200000 && inter > 100000)
	{
		i = 2;
	}
	else if (inter <= 400000 && inter > 200000)
	{
		i = 3;
	}
	else if (inter <= 600000 && inter > 400000)
	{
		i = 4;
	}
	else if (inter <= 1000000 && inter > 600000)
	{
		i = 5;
	}
	else if (inter > 1000000)
	{
		i = 6;
	}

	switch (i)
	{

	case 6:
		mon = (inter - 1e6) * 0.01;
		inter = 1e6;
	case 5:
		mon = (inter - 6e5) * 0.015 + mon;
		inter = 6e5;
	case 4:
		mon = (inter - 4e5) * 0.03 + mon;
		inter = 4e5;
	case 3:
		mon = (inter - 2e5) * 0.05 + mon;
		inter = 2e5;
	case 2:
		mon = (inter - 1e5) * 0.075 + mon;
		inter = 1e5;
	case 1:
		mon = inter * 0.1 + mon;
	}

	printf("������%.2f", mon);
		mon = inter * 0.1 + mon;
	}

	printf("������%.2f", mon);
	return 0;
}