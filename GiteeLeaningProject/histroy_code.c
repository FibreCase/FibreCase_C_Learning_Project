//4.2.7
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

//4.2.6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n, a;
	scanf("%d", &n);
	printf("1 1 ");

	for (int i = 1, j = 1; (i + j) < n;)
	{
		i = i + j;
		printf("%d ", i);

		a = i;
		i = j;
		j = a;
	}

	return 0;
}

//4.2.5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	printf("最好的赛车编号为3");

	return 0;
}

//4.2.4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int vrfy(int);

	for (int i = 1; i < 100; i++)
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
	int s;
	if (i / 10 == 0)
	{
		if ((i * i) % 10 == i)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (i / 10 != 0)
	{
		s = i * i;
		if (s % 100 == i)
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

//4.2.3
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

//4.2.2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	//分解一个数
	int i = 2;
	int vrfy(int);

	for (; i <= 1000; i++)
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
	int x = i,s = 1,j = 0;
	int factor[10000] = { 0 };
	for (int k = 2; k < i;k++)
	{
		if (x % k == 0)
		{
			factor[j] = k;
			j++;
		}
	}

	for (int y = 0; y < j; y++)
	{
		s = s + factor[y];
	}

	if (s == i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//4.2.1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	//先输出N以下的全体质数备用
	int n, j = 0, k = 0;
	scanf("%d", &n);

	int prinum[10000] = { 0 };
	int vrfy_pri(int);

	for (int i = 1; i <= n; i++)
	{
		if (vrfy_pri(i) == 1)
		{
			prinum[j] = i;
			j++;
		}
	}

	//对于给定数字从大到小除以质数进行测试
	int factor[10000] = { 0 };
	int x = n;
	j--;
	for (; j >= 0;)
	{
		if (x % prinum[j] == 0)
		{
			factor[k] = prinum[j];
			x = x / prinum[j];
			k++;
		}
		else
		{
			j--;
		}
	}

	printf("%d=", n);
	k--;
	while (1)
	{
		for (int m = k; m > 0; m--)
		{
			printf("%d*", factor[m]);
		}
		printf("%d", factor[0]);
		break;
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

}

//5.1.4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0, b = 0, c = 40, j, i = 0;
	int vrfy(int, int, int);

	for (; a <= 40; b = 0, c = 0, a++)
	{
		for (j = 40 - a, c = j; b <= j; b++, c = j - b)
		{
			if (vrfy(a, b, c) == 1)
			{
				i++;
				printf("第%d种:%d个男人,%d个女人,%d个小孩\n", i, a, b, c);
			}
		}
	}

	return 0;
}

int vrfy(int a, int b, int c)
{
	if (a * 40 + b * 30 + c * 5 == 400)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//5.1.3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define pi 3.1416

int main()
{
	float r, h;
	double c, s, v;

	scanf("%f,%f", &r, &h);
	c = 2 * pi * r;
	s = r * r * pi;
	v = s * h;

	printf("圆周长:%.2f\n圆面积:%.2f\n圆柱体积:%.2f", c, s, v);

	return 0;
}

//5.1.2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	char c1, c2, c3, c4, c5;
	int n;
	//使用数组会方便些，但是题目要求使用变量

	c1 = 'C';
	c2 = 'h';
	c3 = 'i';
	c4 = 'n';
	c5 = 'a';
	scanf("%d", &n);

	c1 = c1 + n;
	c2 = c2 + n;
	c3 = c3 + n;
	c4 = c4 + n;
	c5 = c5 + n;

	printf("%c%c%c%c%c", c1, c2, c3, c4, c5);

	return 0;
}

//5.1.1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	float r = 0.09;
	double p = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		p = p * (1 + r);
	}

	p = p * 100;

	printf("%.2f%%", p);

	return 0;
}

//************************************************************************
//4.1.8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
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
	printf("猴子第一天摘了%d个桃子", j);

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
			printf("最大公约数是%d\n", i);
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
			printf("最小公倍数是%d", a);
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
	char c; //用户输入字符
	int letters = 0, // 字母数目
		space = 0, // 空格数目
		digit = 0, // 整数数目
		others = 0; // 其他字符数目
	while ((c = getchar()) != '\n')
	{ // 每次读取一个字符，回车时结束
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;//字母＋1
		else if (c == ' ')
			space++;//空格+1
		else if (c >= '0' && c <= '9')
			digit++;//数字+1
		else
			others++;//其他+1
	}
	printf("字母数:%d\n空格数:%d\n数字数:%d\n其它字符数:%d\n\n", letters, space, digit, others);

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

	printf("奖金是%.2f", mon);
	return 0;
}

//*****************************************************************
//3.2.3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;
	scanf("%f,%f", &x, &y);
	if (fabs(fabs(x) - 2) < 1 && fabs(fabs(y) - 2) < 1)
	{
		printf("该点高度为10米");
	}
	else
	{
		printf("该点高度为0米");
	}

	return 0;
}

//*****************************************************************************
//3.2.2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float x, y;
	scanf("%f%f", &x, &y);
	if (x == 0 && y == 0)
	{
		printf("(%.2f,%.2f)是原点", x, y);
	}
	else if (x == 0)
	{
		printf("(%.2f,%.2f)在y坐标轴上", x, y);
	}
	else if (y == 0)
	{
		printf("(%.2f,%.2f)在x坐标轴上", x, y);
	}
	else if (x > 0 && y > 0)
	{
		printf("(%.2f,%.2f)在第一象限", x, y);
	}
	else if (x < 0 && y > 0)
	{
		printf("(%.2f,%.2f)在第二象限", x, y);
	}
	else if (x < 0 && y < 0)
	{
		printf("(%.2f,%.2f)在第三象限", x, y);
	}
	else if (x > 0 && y < 0)
	{
		printf("(%.2f,%.2f)在第四象限", x, y);
	}

	return 0;
}

//**********************************************************
//3.2.1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	float grade;
	scanf("%f", &grade);

	if (grade <= 100 && grade >= 0)
	{
		switch ((int)grade / 10)
		{
		default:printf("成绩是%.1f,相应的等级是E", grade);
			break;
		case 10:
		case 9:
			printf("成绩是%.1f,相应的等级是A", grade); break;
		case 8:
			printf("成绩是%.1f,相应的等级是B", grade); break;
		case 7:
			printf("成绩是%.1f,相应的等级是C", grade); break;
		case 6:
			printf("成绩是%.1f,相应的等级是D", grade); break;
		}
	}
	else
	{
		printf("输入成绩有误");
	}
	return 0;
}




//************************************************************************************************************************

//3.2.1之前的作业在下面的历史代码中

//************************************************************************************************************************

//历史代码按时间正序排列

//************************************************************************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	float m, n, x, y, z, a;
	int rst;
	int roundff(float x);
	scanf("%f%f", &m, &n);
	if (m > 200 && m < 300 && n>0 && n < 100)
	{
		x = n / 1000 * m;//此处的1000是为了和后面的*10呼应
	}
	//由于是取十位，而roundff取的是个位，所以先/10
	rst = roundff(x);
	printf("%d\n", rst * 10);
	return 0;
}

int roundff(float xx)
{
	float y;
	int z;
	y = (int)(xx * 10) % 10;
	if (y >= 5)
	{
		z = ceil(xx);
	}
	else
	{
		z = floor(xx);
	}
	return z;//输出的即为对xx取后的结果
}


//*****************************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float m, n, count;
	scanf("%f,%f", &m, &n);
	if (200 < m && m < 300 && n>0 && n < 100)
		count = 0.0 + m * n / 100;
	printf("%d\n", (int)ceil(count));
	return 0;
}

//****************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float m, n, x, count;
	scanf("%f%f", &m, &n);
	if (200 < m && m < 300 && n>0 && n < 100)
		x = m * n / 1000;
	count = round(x) * 10;
	printf("%d\n", (int)count);
	return 0;
}

//*********************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float y1, j1, f1, y2, j2, f2, rst;
	scanf("%f%f%f", &y1, &j1, &f1);
	scanf("%f%f%f", &y2, &j2, &f2);
	rst = y1 + y2 + j1 * 0.1 + j2 * 0.1 + f1 * 0.01 + f2 * 0.01;
	printf("%.2f", rst);
}

//************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	int roundff(float x);
	int t;
	float x;
	x = 1.8;

	t = roundff(x);
	printf("%d", t);
}

int roundff(float x)
{
	float y;
	int z;
	y = (int)(x * 10) % 10;
	if (y >= 5)
	{
		z = ceil(x);
	}
	else
	{
		z = floor(x);
	}
	printf("%d", z);
	return z;
}


//**********************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	float m, n, x, y, z, a;
	int rst;
	int roundff(float x);
	scanf("%f%f", &m, &n);
	if (m > 200 && m < 300 && n>0 && n < 100)
	{
		x = n / 1000 * m;//此处的1000是为了和后面的*10呼应
	}
	//由于是取十位，而roundff取的是个位，所以先/10
	rst = roundff(x);
	printf("%d\n", rst * 10);
	return 0;
}

int roundff(float xx)
{
	float y;
	int z;
	y = (int)(xx * 10) % 10;
	if (y >= 5)
	{
		z = ceil(xx);
	}
	else
	{
		z = floor(xx);
	}
	return z;//输出的即为对xx取后的结果
}

//**************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d是个偶数", a);
	}
	else
	{
		printf("%d是个奇数", a);
	}
	return 0;
}

//***********************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	if (a % 100 == 0)
	{
		if (a % 400 == 0)
		{
			printf("%d年是闰年", a);
		}
		else
		{
			printf("%d年不是闰年", a);
		}
	}
	else
	{
		if (a % 4 == 0)
		{
			printf("%d年是闰年", a);
		}
		else
		{
			printf("%d年不是闰年", a);
		}
	}
	return 0;
}

//***************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, m;
	scanf("%d,%d,%d", &a, &b, &c);
	m = a;
	if (b >= m)
		m = b;
	if (c >= m)
		m = c;
	printf("最大数是%d", m);
	return 0;
}


//*******************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float s1, s2, p;
	scanf("%d%d%d", &a, &b, &c);

	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		p = ((float)a + b + c) / 2;
		s1 = p * (p - a) * (p - b) * (p - c);
		s2 = sqrt(s1);
		printf("%.2f", s2);
	}
	else
	{
		printf("不是三角形");
	}

	return 0;
}



//**********************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i, t;
	int ss[4] = { 0 };

	//to input every number

	scanf("%d,%d,%d,%d", &ss[0], &ss[1], &ss[2], &ss[3]);

	//to order the number
	for (i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (ss[j] > ss[j + 1])
			{
				t = ss[j];
				ss[j] = ss[j + 1];
				ss[j + 1] = t;
			}
		}
	}

	printf("排序结果如下:%d,%d,%d,%d", ss[0], ss[1], ss[2], ss[3]);
	return 0;
}

//**************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	scanf("%f,%f,%f", &a, &b, &c);
	if (a + b > c && b + c > a && c + a > b)
	{
		if (fabs(a * a + b * b - c * c) <= 0.000001 && a != b || fabs(a * a + c * c - b * b) <= 0.000001 && a != c || fabs(b * b + c * c - a * a) <= 0.000001 && b != c)
			printf("直角三角形");
		else if (fabs(a - b) <= 0.000001 && fabs(b - c) <= 0.000001 && fabs(a - c) <= 0.000001)
			printf("等边三角形");
		else if (fabs(a - b) <= 0.000001 && a != c && (a * a + b * b) != c * c || fabs(b - c) <= 0.000001 && b != a && (b * b + c * c) != a * a || fabs(a - c) <= 0.000001 && a != b && (a * a + c * c) != b * b)
			printf("等腰三角形");
		else if (fabs(a - b) <= 0.000001 && a != c && fabs(a * a + b * b - c * c) <= 0.000001 || fabs(b - c) <= 0.000001 && b != a && fabs(b * b + c * c - a * a) <= 0.000001 || fabs(a - c) <= 0.000001 && a != b && fabs(a * a + c * c - b * b) <= 0.000001)
			printf("等腰直角三角形");
		else
			printf("一般三角形");
	}
	else
		printf("不是三角形");
	return 0;
}

//*****************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float m, n, count;
	scanf("%f,%f", &m, &n);
	if (200 < m && m < 300 && n>0 && n < 100)
		count = 0.0 + m * n / 100;
	printf("%d\n", (int)ceil(count));
	return 0;
}

//****************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float m, n, x, count;
	scanf("%f%f", &m, &n);
	if (200 < m && m < 300 && n>0 && n < 100)
		x = m * n / 1000;
	count = round(x) * 10;
	printf("%d\n", (int)count);
	return 0;
}

//*********************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float y1, j1, f1, y2, j2, f2, rst;
	scanf("%f%f%f", &y1, &j1, &f1);
	scanf("%f%f%f", &y2, &j2, &f2);
	rst = y1 + y2 + j1 * 0.1 + j2 * 0.1 + f1 * 0.01 + f2 * 0.01;
	printf("%.2f", rst);
}

//************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	int roundff(float x);
	int t;
	float x;
	x = 1.8;

	t = roundff(x);
	printf("%d", t);
}

int roundff(float x)
{
	float y;
	int z;
	y = (int)(x * 10) % 10;
	if (y >= 5)
	{
		z = ceil(x);
	}
	else
	{
		z = floor(x);
	}
	printf("%d", z);
	return z;
}

