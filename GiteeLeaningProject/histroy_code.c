//************************************************************************
//4.1.8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	//这里使用子函数的目的是便于检测是否输出，便于输出的计数
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
	printf("鐚村瓙绗竴澶╂憳浜�%d涓瀛�", j);

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
			printf("鏈�澶у叕绾︽暟鏄�%d\n", i);
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
			printf("鏈�灏忓叕鍊嶆暟鏄�%d", a);
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
	char c; //鐢ㄦ埛杈撳叆瀛楃
	int letters = 0, // 瀛楁瘝鏁扮洰
		space = 0, // 绌烘牸鏁扮洰
		digit = 0, // 鏁存暟鏁扮洰
		others = 0; // 鍏朵粬瀛楃鏁扮洰
	while ((c = getchar()) != '\n')
	{ // 姣忔璇诲彇涓�涓瓧绗︼紝鍥炶溅鏃剁粨鏉�
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;//瀛楁瘝锛�1
		else if (c == ' ')
			space++;//绌烘牸+1
		else if (c >= '0' && c <= '9')
			digit++;//鏁板瓧+1
		else
			others++;//鍏朵粬+1
	}
	printf("瀛楁瘝鏁�:%d\n绌烘牸鏁�:%d\n鏁板瓧鏁�:%d\n鍏跺畠瀛楃鏁�:%d\n\n", letters, space, digit, others);

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

	printf("濂栭噾鏄�%.2f", mon);
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
		printf("璇ョ偣楂樺害涓�10绫�");
	}
	else
	{
		printf("璇ョ偣楂樺害涓�0绫�");
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
		printf("(%.2f,%.2f)鏄師鐐�", x, y);
	}
	else if (x == 0)
	{
		printf("(%.2f,%.2f)鍦▂鍧愭爣杞翠笂", x, y);
	}
	else if (y == 0)
	{
		printf("(%.2f,%.2f)鍦▁鍧愭爣杞翠笂", x, y);
	}
	else if (x > 0 && y > 0)
	{
		printf("(%.2f,%.2f)鍦ㄧ涓�璞￠檺", x, y);
	}
	else if (x < 0 && y > 0)
	{
		printf("(%.2f,%.2f)鍦ㄧ浜岃薄闄�", x, y);
	}
	else if (x < 0 && y < 0)
	{
		printf("(%.2f,%.2f)鍦ㄧ涓夎薄闄�", x, y);
	}
	else if (x > 0 && y < 0)
	{
		printf("(%.2f,%.2f)鍦ㄧ鍥涜薄闄�", x, y);
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
		default:printf("鎴愮哗鏄�%.1f,鐩稿簲鐨勭瓑绾ф槸E", grade);
			break;
		case 10:
		case 9:
			printf("鎴愮哗鏄�%.1f,鐩稿簲鐨勭瓑绾ф槸A", grade); break;
		case 8:
			printf("鎴愮哗鏄�%.1f,鐩稿簲鐨勭瓑绾ф槸B", grade); break;
		case 7:
			printf("鎴愮哗鏄�%.1f,鐩稿簲鐨勭瓑绾ф槸C", grade); break;
		case 6:
			printf("鎴愮哗鏄�%.1f,鐩稿簲鐨勭瓑绾ф槸D", grade); break;
		}
	}
	else
	{
		printf("杈撳叆鎴愮哗鏈夎");
	}
	return 0;
}






//************************************************************************************************************************

//3.2.1涔嬪墠鐨勪綔涓氬湪涓嬮潰鐨勫巻鍙蹭唬鐮佷腑

//************************************************************************************************************************

//鍘嗗彶浠ｇ爜鎸夋椂闂存搴忔帓鍒�

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
		x = n / 1000 * m;//姝ゅ鐨�1000鏄负浜嗗拰鍚庨潰鐨�*10鍛煎簲
	}
	//鐢变簬鏄彇鍗佷綅锛岃�宺oundff鍙栫殑鏄釜浣嶏紝鎵�浠ュ厛/10
	rst = roundff(x);
	printf("%d\n", rst * 10);
	return 0;
}

in roundff(float xx)
{	float y;
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
	return z;//杈撳嚭鐨勫嵆涓哄xx鍙栧悗鐨勭粨鏋�
}


*****************************************************************************
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

****************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float m, n, x, count;
	scanf("%f%f", &m, &n);
	if (200 < m && m < 300 && n>0 && n < 100)
		x = m * n / 1000;
	count = round(x)*10;
	printf("%d\n", (int)count);
	return 0;
}

*********************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float y1, j1 ,f1 ,y2,j2,f2 ,rst ;
	scanf("%f%f%f", &y1, &j1, &f1);
	scanf("%f%f%f", &y2, &j2, &f2);
	rst = y1 + y2 + j1 * 0.1 + j2 * 0.1 + f1 * 0.01 + f2 * 0.01;
	printf("%.2f", rst);
}

************************************************************
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


**********************************************************************
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
		x = n / 1000 * m;//姝ゅ鐨�1000鏄负浜嗗拰鍚庨潰鐨�*10鍛煎簲
	}
	//鐢变簬鏄彇鍗佷綅锛岃�宺oundff鍙栫殑鏄釜浣嶏紝鎵�浠ュ厛/10
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
	return z;//杈撳嚭鐨勫嵆涓哄xx鍙栧悗鐨勭粨鏋�
}

**************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d鏄釜鍋舵暟", a);
	}
	else
	{
		printf("%d鏄釜濂囨暟", a);
	}
	return 0;
}

***********************************************
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
			printf("%d骞存槸闂板勾", a);
		}
		else
		{
			printf("%d骞翠笉鏄棸骞�", a);
		}
	}
	else
	{
		if (a % 4 == 0)
		{
			printf("%d骞存槸闂板勾", a);
		}
		else
		{
			printf("%d骞翠笉鏄棸骞�", a);
		}
	}
	return 0;
}

***************************
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
	printf("鏈�澶ф暟鏄�%d", m);
	return 0;
}


*******************************
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
		printf("涓嶆槸涓夎褰�");
	}

	return 0;
}



**********************************************************************
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

	printf("鎺掑簭缁撴灉濡備笅:%d,%d,%d,%d", ss[0], ss[1], ss[2], ss[3]);
	return 0;
}

**************************************************************
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
            printf("鐩磋涓夎褰�");
        else if (fabs(a - b) <= 0.000001 && fabs(b - c) <= 0.000001 && fabs(a - c) <= 0.000001)
            printf("绛夎竟涓夎褰�");
        else if (fabs(a - b) <= 0.000001 && a != c && (a * a + b * b) != c * c || fabs(b - c) <= 0.000001 && b != a && (b * b + c * c) != a * a || fabs(a - c) <= 0.000001 && a != b && (a * a + c * c) != b * b)
            printf("绛夎叞涓夎褰�");
        else if (fabs(a - b) <= 0.000001 && a != c && fabs(a * a + b * b - c * c) <= 0.000001 || fabs(b - c) <= 0.000001 && b != a && fabs(b * b + c * c - a * a) <= 0.000001 || fabs(a - c) <= 0.000001 && a != b && fabs(a * a + c * c - b * b) <= 0.000001)
            printf("绛夎叞鐩磋涓夎褰�");
        else
            printf("涓�鑸笁瑙掑舰");
    }
    else
        printf("涓嶆槸涓夎褰�");
    return 0;
}

*****************************************************
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

****************************************************
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

*********************************************************
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

************************************************************
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



