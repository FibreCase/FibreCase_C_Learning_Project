//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	float m, n, count;
//	scanf("%f,%f", &m, &n);
//	if (200 < m && m < 300 && n>0 && n < 100)
//		count = 0.0 + m * n / 100;
//	printf("%d\n", (int)ceil(count));
//	return 0;
//}
//
//****************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	float m, n, x, count;
//	scanf("%f%f", &m, &n);
//	if (200 < m && m < 300 && n>0 && n < 100)
//		x = m * n / 1000;
//	count = round(x)*10;
//	printf("%d\n", (int)count);
//	return 0;
//}
//
//*********************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	float y1, j1 ,f1 ,y2,j2,f2 ,rst ;
//	scanf("%f%f%f", &y1, &j1, &f1);
//	scanf("%f%f%f", &y2, &j2, &f2);
//	rst = y1 + y2 + j1 * 0.1 + j2 * 0.1 + f1 * 0.01 + f2 * 0.01;
//	printf("%.2f", rst);
//}

//************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//void main()
//{
//	int roundff(float x);
//	int t;
//	float x;
//	x = 1.8;
//
//	t = roundff(x);
//	printf("%d", t);
//}
//
//int roundff(float x)
//{
//	float y;
//	int z;
//	y = (int)(x * 10) % 10;
//	if (y >= 5)
//	{
//		z = ceil(x);
//	}
//	else
//	{
//		z = floor(x);
//	}
//	printf("%d", z);
//	return z;
//}


//**********************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float m, n, x, y, z, a;
//	int rst;
//	int roundff(float x);
//	scanf("%f%f", &m, &n);
//	if (m > 200 && m < 300 && n>0 && n < 100)
//	{
//		x = n / 1000 * m;//此处的1000是为了和后面的*10呼应
//	}
//	//由于是取十位，而roundff取的是个位，所以先/10
//	rst = roundff(x);
//	printf("%d\n", rst * 10);
//	return 0;
//}
//
//int roundff(float xx)
//{
//	float y;
//	int z;
//	y = (int)(xx * 10) % 10;
//	if (y >= 5)
//	{
//		z = ceil(xx);
//	}
//	else
//	{
//		z = floor(xx);
//	}
//	return z;//输出的即为对xx取后的结果
//}


//*****************************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	float m, n, count;
//	scanf("%f,%f", &m, &n);
//	if (200 < m && m < 300 && n>0 && n < 100)
//		count = 0.0 + m * n / 100;
//	printf("%d\n", (int)ceil(count));
//	return 0;
//}
//
//****************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	float m, n, x, count;
//	scanf("%f%f", &m, &n);
//	if (200 < m && m < 300 && n>0 && n < 100)
//		x = m * n / 1000;
//	count = round(x)*10;
//	printf("%d\n", (int)count);
//	return 0;
//}
//
//*********************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	float y1, j1 ,f1 ,y2,j2,f2 ,rst ;
//	scanf("%f%f%f", &y1, &j1, &f1);
//	scanf("%f%f%f", &y2, &j2, &f2);
//	rst = y1 + y2 + j1 * 0.1 + j2 * 0.1 + f1 * 0.01 + f2 * 0.01;
//	printf("%.2f", rst);
//}

//************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//void main()
//{
//	int roundff(float x);
//	int t;
//	float x;
//	x = 1.8;
//
//	t = roundff(x);
//	printf("%d", t);
//}
//
//int roundff(float x)
//{
//	float y;
//	int z;
//	y = (int)(x * 10) % 10;
//	if (y >= 5)
//	{
//		z = ceil(x);
//	}
//	else
//	{
//		z = floor(x);
//	}
//	printf("%d", z);
//	return z;
//}


//**********************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float m, n, x, y, z, a;
//	int rst;
//	int roundff(float x);
//	scanf("%f%f", &m, &n);
//	if (m > 200 && m < 300 && n>0 && n < 100)
//	{
//		x = n / 1000 * m;//此处的1000是为了和后面的*10呼应
//	}
//	//由于是取十位，而roundff取的是个位，所以先/10
//	rst = roundff(x);
//	printf("%d\n", rst * 10);
//	return 0;
//}
//
//int roundff(float xx)
//{
//	float y;
//	int z;
//	y = (int)(xx * 10) % 10;
//	if (y >= 5)
//	{
//		z = ceil(xx);
//	}
//	else
//	{
//		z = floor(xx);
//	}
//	return z;//输出的即为对xx取后的结果
//}

//**************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("%d是个偶数", a);
//	}
//	else
//	{
//		printf("%d是个奇数", a);
//	}
//	return 0;
//}

//***********************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 100 == 0)
//	{
//		if (a % 400 == 0)
//		{
//			printf("%d年是闰年", a);
//		}
//		else
//		{
//			printf("%d年不是闰年", a);
//		}
//	}
//	else
//	{
//		if (a % 4 == 0)
//		{
//			printf("%d年是闰年", a);
//		}
//		else
//		{
//			printf("%d年不是闰年", a);
//		}
//	}
//	return 0;
//}

//***************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c, m;
//	scanf("%d,%d,%d", &a, &b, &c);
//	m = a;
//	if (b >= m)
//		m = b;
//	if (c >= m)
//		m = c;
//	printf("最大数是%d", m);
//	return 0;
//}


//*******************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int a, b, c;
//	float s1, s2, p;
//	scanf("%d%d%d", &a, &b, &c);
//
//	if ((a + b) > c && (a + c) > b && (b + c) > a)
//	{
//		p = ((float)a + b + c) / 2;
//		s1 = p * (p - a) * (p - b) * (p - c);
//		s2 = sqrt(s1);
//		printf("%.2f", s2);
//	}
//	else
//	{
//		printf("不是三角形");
//	}
//
//	return 0;
//}



//**********************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i, t;
//	int ss[4] = { 0 };
//
//	//to input every number
//
//	scanf("%d,%d,%d,%d", &ss[0], &ss[1], &ss[2], &ss[3]);
//
//	//to order the number
//	for (i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (ss[j] > ss[j + 1])
//			{
//				t = ss[j];
//				ss[j] = ss[j + 1];
//				ss[j + 1] = t;
//			} 
//		}
//	}
//
//	printf("排序结果如下:%d,%d,%d,%d", ss[0], ss[1], ss[2], ss[3]);
//	return 0;
//}

//**************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    float a, b, c;
//    scanf("%f,%f,%f", &a, &b, &c);
//    if (a + b > c && b + c > a && c + a > b)
//    {
//        if (fabs(a * a + b * b - c * c) <= 0.000001 && a != b || fabs(a * a + c * c - b * b) <= 0.000001 && a != c || fabs(b * b + c * c - a * a) <= 0.000001 && b != c)
//            printf("直角三角形");
//        else if (fabs(a - b) <= 0.000001 && fabs(b - c) <= 0.000001 && fabs(a - c) <= 0.000001)
//            printf("等边三角形");
//        else if (fabs(a - b) <= 0.000001 && a != c && (a * a + b * b) != c * c || fabs(b - c) <= 0.000001 && b != a && (b * b + c * c) != a * a || fabs(a - c) <= 0.000001 && a != b && (a * a + c * c) != b * b)
//            printf("等腰三角形");
//        else if (fabs(a - b) <= 0.000001 && a != c && fabs(a * a + b * b - c * c) <= 0.000001 || fabs(b - c) <= 0.000001 && b != a && fabs(b * b + c * c - a * a) <= 0.000001 || fabs(a - c) <= 0.000001 && a != b && fabs(a * a + c * c - b * b) <= 0.000001)
//            printf("等腰直角三角形");
//        else
//            printf("一般三角形");
//    }
//    else
//        printf("不是三角形");
//    return 0;
//}


//**********************************************************
//3.2.1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    float grade;
//    scanf("%f", &grade);
//
//    if (grade <= 100 && grade >= 0)
//    {
//        switch ((int)grade / 10)
//        {
//        default:printf("成绩是%.1f,相应的等级是E", grade);
//            break;
//        case 10:
//        case 9:
//            printf("成绩是%.1f,相应的等级是A", grade); break;
//        case 8:
//            printf("成绩是%.1f,相应的等级是B", grade); break;
//        case 7:
//            printf("成绩是%.1f,相应的等级是C", grade); break;
//        case 6:
//            printf("成绩是%.1f,相应的等级是D", grade); break;
//        }
//    }
//    else
//    {
//        printf("输入成绩有误");
//    }
//    return 0;
//}

//*****************************************************************************
//3.2.2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    float x, y;
//    scanf("%f%f", &x, &y);
//    if (x == 0 && y == 0)
//    {
//        printf("(%.2f,%.2f)是原点", x, y);
//    }
//    else if (x == 0)
//    {
//        printf("(%.2f,%.2f)在y坐标轴上", x, y);
//    }
//    else if (y == 0)
//    {
//        printf("(%.2f,%.2f)在x坐标轴上", x, y);
//    }
//    else if (x > 0 && y > 0)
//    {
//        printf("(%.2f,%.2f)在第一象限", x, y);
//    }
//    else if (x < 0 && y > 0)
//    {
//        printf("(%.2f,%.2f)在第二象限", x, y);
//    }
//    else if (x < 0 && y < 0)
//    {
//        printf("(%.2f,%.2f)在第三象限", x, y);
//    }
//    else if (x > 0 && y < 0)
//    {
//        printf("(%.2f,%.2f)在第四象限", x, y);
//    }
// 
//	  return 0;
//}


//*****************************************************************
//3.2.3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    float x, y;
//    scanf("%f,%f", &x, &y);
//    if (fabs(fabs(x) - 2) < 1 && fabs(fabs(y) - 2) < 1)
//    {
//        printf("该点高度为10米");
//    }
//    else
//    {
//        printf("该点高度为0米");
//    }
//
//    return 0;
//}
