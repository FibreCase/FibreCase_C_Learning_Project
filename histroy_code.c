//7.2b.7
#include<stdio.h>

int reverse(int number);

int main() {
	int number;
	scanf("%d", &number);
	printf("%d", reverse(number));
}

int reverse(int number) {
	char c[99],s[99];
	int i = 0,j = 0,n=0;
	sprintf(c,"%d",number);

	for (; i < 99; ++i) {
		if (c[i] == '\0') {
			break;
		}
	}

	for (; j < i; ++j) {
		s[j] = c[i-j-1];
	}
	s[j] = '\0';

	sscanf(s,"%d",&n);
	return n;
}

//7.2b.6
void del_samechar(char * str) {
	char c;
	for (int i = 0; i < strlen(str);) {
		if (str[i] == str[i+1]) {
			c = str[i];
			while (str[i] == c) {
				for (int j = i; j < strlen(str); ++j) {
				str[j] = str[j+1];
				}
			}
		}
		else {
			i++;
		}
	}
}

//7.2b.5
int fun(long n) {
	char c[999];
	int i = 0, t = 1;
	sprintf(c, "%ld", n);

	for (; i < 999; ++i) {
		if (c[i] == '\0') {
			break;
		}
	}

	for (int k = 0; k < i-1; ++k) {
		if (c[i-k-1] != c[k]) {
			t = 0;
		}
	}

	return t;
}

//7.2b.4
//这道题我没有按照提示使用math.h
#include<stdio.h>

void convert(int n) {
	char c[99], s[99];
	sprintf(c,"%d",n);

	for (int i = 0,j = 0; i < 99; ++i) {
		if (c[j] != '\0') {
			s[i] = c[j++];
			s[++i] = '*';
		}
		else {
			s[i] = '\0';
			break;
		}
	}

	printf("%s",s);
}

int main() {
	int number;
	scanf("%d", &number);
	putchar('*');
	convert(number);
	printf("\n");
}


//7.2b.3
int sumday(int y, int m, int d) {
	int mouth_day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int sum = 0;
	for (int i = 0; i < m-1; ++i) {
		sum += mouth_day[i];
	}
	sum += d;
	if ((y % 4 ==0 && y % 400 != 0) && m >=2) {
		sum += 1;
	}

	return sum;
}

//7.2b.2
#include<stdio.h>
#include<string.h>

void sort(char str[]);

int main() {
	char str[80];
	scanf("%s", str);
	sort(str);
	printf("%s\n", str);
}

void sort(char str[]) {
	char c;
	int n = 0;
	for (; n < 80; ++n) {
		if (str[n] == '\0') {
			break;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (str[j] > str[j+1]) {
				c = str[j];
				str[j] = str[j+1];
				str[j+1] = c;
			}
		}
	}
}

//7.2b.1
#include <stdio.h>

int max_same(float a[][6], int n);

int main(void) {
	float aa[6][6];
	int i, j, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%f", &aa[i][j]);

	if (max_same(&aa, n))
		printf("YES\n");
	else
		printf("NO\n");
}

int max_same(float a[][6], int n) {
	float max[n];
	int t = 1;
	for (int i = 0; i < n; ++i) {
		max[i] = *(*(a + i));
		for (int j = 0; j < n - 1; ++j) {
			if (*(*(a + i) + j + 1) > *(*(a + i) + j)) {
				max[i] = *(*(a + i) + j + 1);
			}
		}
	}
	for (int i = 0; i < n-1; ++i) {
		if (max[i] != max[i+1]) {
			t = 0;
		}
	}

	return t;
}

//7.2.2
#include <stdio.h>

int prime(int n);

int main() {
	int m;

	scanf("%d", &m);
	for (int i = 2; i < m / 2 + 1; ++i) {
		if (prime(i) == 1 && prime(m - i) == 1) {
			printf("%d=%d+%d\n", m, i, m - i);
		}
	}

	return 0;
}

int prime(int n) {
	int t = 0;
	if (n == 2) {
		return 1;
	}
	else if (n == 1) {
		return 0;
	}
	else {
		for (int i = 2; i < n; ++i) {
			if (n % i == 0) {
				t = 1;
				break;
			}
		}
		if (t == 1) {
			return 0;
		}
		else {
			return 1;
		}
	}
}

//7.2.1
#include <stdio.h>

int prime(int n);

int main() {
	int m, n;

	scanf("%d%d", &m, &n);
	for (int i = m; i < n - 1; ++i) {
		if (prime(i) == 1 && prime(i + 2) == 1) {
			printf("[%d,%d]\n", i, i + 2);
		}
	}

	return 0;
}

int prime(int n) {
	int t = 0;
	if (n == 2) {
		return 1;
	}
	else if (n == 1) {
		return 0;
	}
	else {
		for (int i = 2; i < n; ++i) {
			if (n % i == 0) {
				t = 1;
				break;
			}
		}
		if (t == 1) {
			return 0;
		}
		else {
			return 1;
		}
	}
}

//7.1.10
int fun(int * aa,int n, int y) {
	for (int i = 0; i < n-1; ++i) {
		if (aa[i] == y) {
			for (int j = i; j < n-1; ++j) {
				aa[j] = aa[j+1];
			}
			if (aa[n-1] == y)
				n--;
			n--;
			i--;
		}
	}
	return n;
}

//7.1.9
long compose(long number) {
	char n[999];
	char s[999] = {0};
	long int su;
	sprintf(n, "%ld", number);

	for (int i = 0, j = 0; i < 999; ++i) {
		if (*(n + i) == '\0') {
			break;
		}
		else if (*(n + i) % 2 == 0) {
			*(s + j++) = *(n + i);
		}
	}

	sscanf(s,"%ld", &su);
	return su;
}

//7.1.8
//这个题中i的限制条件无法使用sizeof会报错，未理解原因
void counta_z(char *str, int *count) {
	for (int i = 0; i < 255; ++i) {
		if (*(str + i) >= 'A' && *(str + i) <= 'Z') {
			(*(count + str[i] - 65))++;
		}
		else if (*(str + i) >= 'a' && *(str + i) <= 'z') {
			(*(count + str[i] - 97))++;
		}
		else if (*(str + i) == '\0') {
			break;
		}
	}
}

//7.1.7
//冒泡排序，同样可以通过数组的形式实现
void  sort(int * a,int  n) {
	int t;
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < n - i; ++j) {
			if (*(a + j) > *(a + j + 1)) {
				t = *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = t;
			}
		}
	}
}

//7.1.6
//无聊
char my_toupper(char ch) {
	if (ch >= 'a' && ch <= 'z') {
		ch = ch - 32;
	}
	return ch;
}

//7.1.5
//多写了两个最值函数拿来用
int min(int a, int b) {
	int min;
	min = a;
	if (b < min) {
		min = b;
	}
	return min;
}

int max(int a, int b) {
	int max;
	max = a;
	if (b > max) {
		max = b;
	}
	return max;
}

int hcf(int a,int b) {
	int s =1;
	for (int i = min(a,b); i > 1; --i) {
		if (a%i == 0 && b %i ==0) {
			s = i;
			break;
		}
	}

	return s;
}

int lcd(int a,int b,int h) {
	int s = a*b;
	for (int i = max(a,b); i < a*b; ++i) {
		if (i%a==0 &&i%b ==0) {
			s = i;
			break;
		}
	}
	return s;
}

//7.1.4
//过于简单
int add(int a,int b) {
	int s;
	s = a+b;
	return s;
}

int sub(int a,int b) {
	int s;
	s = a-b;
	return s;
}

//7.1.3
void convert(int n) {
	char s[999];
	char ss[999];
	int i = 0, j = 0;
	sprintf(s,"%d",n);
	for (; i < (sizeof s) / 2; ++i, ++j) {
		ss[i] = s[j];
		ss[++i] = '*';
	}
	printf("%s",ss);
}

//7.1.2
//这道题可以不使用指针的方法，直接返回新数列是可以的
void concatenate(const char * s1, const char * s2, char * s) {
	int i = 0, j = 0;
	while (*(s1 + i) != '\0') {
		*(s + j) = *(s1 + i);
		i++,j++;
	}

	i = 0;
	while (*(s2 + i) != '\0') {
		*(s + j) = *(s2 + i);
		i++,j++;
	}

	//由于子函数不会自动添加结尾
	//所以我们需要手动添加一个结尾
	*(s + j) = '\0';
}

//7.1.1
int prime(int n)
{
	int t = 0;
	if (n == 2) {
		return 1;
	}
	else if (n ==1) {
		return 0;
	}
	else {
		for (int i = 2; i < n; ++i) {
			if (n%i==0) {
				t = 1;
				break;
			}
		}
		if (t == 1) {
			return 0;
		}
		else {
			return 1;
		}
	}
}

//6.3.5
#include <stdio.h>

int
main()
{
	int n;
	int sut[11][11] = {0};
	scanf("%d",&n);

	for (int i = 1; i <= n; ++i) {
		sut[i][1] = 1;
		sut[i][i] = 1;
	}

	if (n >= 3) {
		for (int i = 3; i <= n; ++i) {
			for (int j = 2; j <= i-1; ++j) {
				sut[i][j] = sut[i-1][j-1] + sut[i-1][j];
			}
		}
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			printf("%4d ",sut[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//6.3.4
#include <stdio.h>

int
main()
{
	int org[2][3];
	int sut[3][2];

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			scanf("%d",&org[i][j]);
		}
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			sut[i][j] = org[j][i];
		}
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			printf("%d ",sut[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//6.3.3
#include <stdio.h>

int
main()
{
	int zone[2][3];
	int sum[3] = {0};

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			scanf("%d",&zone[i][j]);
		}
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			sum[i] = sum[i] + zone[j][i];
		}
	}

	for (int i = 0; i < 3; ++i) {
		printf("%d ",sum[i]);
	}
	return 0;
}

//6.3.2
#include <stdio.h>

int
main()
{
	int m,n;
	int zone[99][99];
	int sum[99] = {0};
	scanf("%d%d",&m,&n);

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d",&zone[i][j]);
		}
	}

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			sum[i] = sum[i] + zone[i][j];
		}
	}

	for (int i = 0; i < m; ++i) {
		printf("第%d行元素之和是%d\n",i,sum[i]);
	}
	return 0;
}

//6.3.1
#include <stdio.h>

int
main()
{
	float zone[4][4];
	float sum =0;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			scanf("%f",&zone[i][j]);
		}
	}

	for (int i = 0; i < 4; ++i) {
		sum = zone[i][i] +sum;
	}

	printf("%.1f",sum);

	return 0;
}

//6.2.8
#include <stdio.h>
#include <string.h>

int
main()
{
	int st, en, j = 0;
	char ch[999];
	char su[999];
	gets(ch);
	scanf("%d", &st);
	scanf("%d", &en);

	if (st >= strlen(ch) || st == 0) {
		printf("起始位置%d越界", st);
		return 0;
	}
	if ((st + en) >= strlen(ch))
		en = strlen(ch) - st + 1;

	for (int i = st - 1; i < st + en - 1; ++i) {
		su[j++] = ch[i];
	}

	su[j] = '\0';

	printf("%s", su);

	return 0;
}

//6.2.7
#include <stdio.h>
#include <string.h>

int
main()
{
	int i = 0;
	char ch[999];
	char c;
	int k = 0;
	gets(ch);
	scanf("%c", &c);
	for (; i < strlen(ch); ++i) {
		if (ch[i] == c) {
			k = 1;
			break;
		}
	}


	ch[i] = '\0';

	if (k == 0) {
		printf("特定字符是%c\n", c);
		printf("特定字符不存在");
	}
	else {
		printf("特定字符是%c\n", c);
		printf("删除特定字符%c后的字符串是%s", c, ch);
	}

	return 0;
}


//6.2.6
#include <stdio.h>
#include <string.h>

int
main()
{
	char ch[999];
	int sum = 0;
	gets(ch);

	for (int i = 0; i < strlen(ch); ++i) {
		if (ch[i] >= '0' && ch[i] <= '9')
			sum++;
	}

	printf("%d", sum);
	return 0;
}

//6.2.5
#include <stdio.h>
#include <string.h>

int
main()
{
	char or1[99], or2[99], su[99];

	gets(or1);
	gets(or2);

	for (int i = 0, j = 0, k = 0; i < strlen(or1) + strlen(or2); ++i) {
		if (i < strlen(or1))
			su[i] = or1[j++];
		else
			su[i] = or2[k++];
	}

	printf("%s", su);
	return 0;
}

//6.2.4
#include <stdio.h>
#include <string.h>

int
main()
{
	char ch[100];
	int sum = 0;

	while (1) {
		gets(ch);
		if (strcmp(ch, "stop") == 0)
			break;
		if (strcmp(ch, "") == 0)
			continue;
		for (int i = 0; i < strlen(ch) - 1; ++i) {
			if ((ch[i] != ' ') && (ch[i + 1] == ' '))
				sum++;
		}
		if (ch[strlen(ch) - 1] != ' ')
			sum++;
	}

	printf("%d", sum);
	return 0;
}

//6.2.3
#include <stdio.h>
#include <string.h>

int
main()
{
	char ch[8];
	int n[8];
	int fn[8];
	int t = 0;
	gets(ch);

	unsigned long long l = strlen(ch);
	for (int i = 0; i < l; ++i) {
		n[i] = (int)ch[i] - 48;
		fn[l - 1 - i] = (int)ch[i] - 48;
	}

	for (int i = 0; i < l / 2; ++i) {
		if (n[i] != fn[i])
			t = 1;
	}

	if (t == 1) {
		for (int i = 0; i < l; ++i) {
			printf("%d", n[i]);
		}
		printf("不是回文数");
	}
	else {
		for (int i = 0; i < l; ++i) {
			printf("%d", n[i]);
		}
		printf("是回文数");
	}
}


//6.2.2
#include <stdio.h>
#include <string.h>

int
main()
{
	char ch[99];
	gets(ch);
	printf("字符串长度是%llu", strlen(ch));

	return 0;
}

//6.2.1
#include <stdio.h>
#include <string.h>

int
main()
{
	char content[999] = { 0 };
	char c;
	int t, l = 0, s = 0, n = 0, b = 0, e = 0;

	while (1) {
		gets(content);
		if (strcmp("end", content) == 0) {
			break;
		}
		else {
			for (int i = 0; i < strlen(content); ++i) {
				c = content[i];
				if (c >= 'a' && c <= 'z')
					t = 0;
				else if (c >= 'A' && c <= 'Z')
					t = 1;
				else if (c == ' ')
					t = 2;
				else if (c >= '0' && c <= '9')
					t = 3;
				else
					t = 4;

				switch (t) {
				case 0: s++;
					break;
				case 1: l++;
					break;
				case 2: b++;
					break;
				case 3: n++;
					break;
				case 4: e++;
					break;
				default: break;
				}
			}

		}
	}

	printf("大写字母有%d个\n小写字母有%d个\n数字有%d个\n空格有%d个\n其他字符有%d个", l, s, n, b, e);
	return 0;
}



//6.b1.3
int i = 0, n = 0, t;
int b[999] = { 0 };
int a[999] = { 0 };

while (1)
{
	scanf("%d", &t);
	if (t != -1)
	{
		n++;
		b[i] = t;
		i++;
	}
	else
	{
		break;
	}
}

for (int j = 0, i = n - 1; i >= 0; i--, j++)
{
	a[i] = b[j];
}


//6.b1.2
int t, i, k = 0;

scanf("%d", &t);

for (i = 0; i < 15;)
{
	if (a[i] == t && i != 15)
	{
		for (int j = i; j < 14; j++)
		{
			a[j] = a[j + 1];
		}
		k++;
	}
	else if (a[i] == t && i == 15)
	{
		i++;
		k++;
	}
	else
	{
		i++;
	}
	for (int c = 0; c < k; c++)
	{
		a[14 - c] = 0;
	}
}

n = n - k;


//6.b1.1
int b[11] = { 0 };
int t;

scanf("%d", &t);

for (int i = 0; i < 11; i++)
{
	if (t < a[i])
	{
		b[i] = t;
		//move the number
		for (; i < 11; i++)
		{
			b[i + 1] = a[i];
		}
		break;
	}
	else
	{
		b[i] = a[i];
		if (i == 10)
		{
			b[i] = t;
		}
	}
}

for (int i = 0; i < 11; i++)
{
	printf("%d ", b[i]);
}


//6.1.5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 10, t;
	int a[10] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 5; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}


//6.1.4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 10, t;
	int a[10] = { 0 };

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}

//6.1.3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[10] = { 0 };
	int b[10] = { 0 };
	int max, k = 0;

	//To give the number
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	max = a[0];
	for (int i = 1; i < 10; i++)
	{
		if (a[i] == max)
		{
			k++;
			b[k] = i;
		}
		else if (a[i] > max)
		{
			max = a[i];
			b[k] = i;
		}
	}

	printf("最大值是%d,其在数组中位置是", max);

	for (int i = 0; i < k + 1; i++)
	{
		printf("%d ", b[i]);
	}

	return 0;
}

//6.1.2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[9999] = { 0 };
	int s = 0, k = 0, n, max, min;
	float a;

	scanf("%d", &n);

	//赋值部分
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	//最大值求值部分
	max = num[0];
	k = 0;
	for (int j = 0; j < n; j++)
	{
		if (num[j] > max)
		{
			max = num[j];
			k = j;
		}
	}
	printf("最大值%d\n最大值下标%d\n", max, k);

	//最小值求值部分
	min = num[0];
	k = 0;
	for (int j = 0; j < n; j++)
	{
		if (num[j] < min)
		{
			min = num[j];
			k = j;
		}
	}
	printf("最小值%d\n最小值下标%d\n", min, k);

	//平均值求值部分
	for (int i = 0; i < n; i++)
	{
		s = s + num[i];
	}

	a = (float)s / n;

	printf("平均值%.2f\n", a);

	return 0;
}


//6.1.1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[8] = { 0 };
	int s = 0, j = 0;
	float a;

	scanf("%d%d%d%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7]);

	for (int i = 0; i < 8; i++)
	{
		s = s + num[i];
	}

	a = (float)s / 8;

	printf("平均值是%.1f\n", a);

	printf("大于等于平均值的元素是");
	for (; j < 8; j++)
	{
		if ((float)num[j] >= a)
		{
			printf("%d ", num[j]);
		}
	}

	return 0;
}

//4.2.12
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, n, c = 0, s = 0;
	scanf("%d%d", &a, &n);

	for (int i = 0; i < n; i++)
	{
		c = c + pow(10, i);
		s = s + c * a;
	}

	printf("S%d(%d)=%d", n, a, s);

	return 0;
}

//4.2.11
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	void vrfy(int, int, int);
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			for (int k = 1; k <= 4; k++)
			{
				vrfy(i, j, k);
			}
		}
	}

	return 0;
}

void vrfy(int i, int j, int k)
{
	int s;
	if (i != j && i != k && j != k)
	{
		s = i * 100 + j * 10 + k;
		printf("%d\n", s);
	}
}

//4.2.10
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

//4.2.9
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float h;
	scanf("%f", &h);
	float hh[11] = { 0 };
	hh[0] = h;

	for (int i = 1; i <= 10; i++)
	{
		hh[i] = hh[i - 1] / 2;
	}

	float r = 0;
	r = hh[0];
	for (int i = 1; i < 10; i++)
	{
		r = r + 2 * hh[i];
	}

	r = r + hh[10];

	printf("第10次落地时共经过%f米\n第10次反弹%f米", r, hh[10]);

	return 0;
}

//4.2.8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n, s = 1, r = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++, r = r + s, s = 1)
	{
		for (int j = 1; j <= i; j++)
		{
			s = s * j;
		}
	}

	printf("%d", r);

	return 0;
}

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

	int prinum[1000] = { 0 };
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
	int factor[1000] = { 0 };
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
	else
	{
		return 0;
	}
}

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

