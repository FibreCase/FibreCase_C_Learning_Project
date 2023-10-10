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