//from 王定灿 牛出生计数问题
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//利用倒计时的想法，为每一头新牛赋予倒计时3，每轮-1，当倒计时到0时即认为
//该牛具有繁殖能力，则每轮在数组末尾添加一个3（新牛）
int main()
{
	int cow[999] = { 0 };//由于一头牛的状态只有0-3，9可用于检测数组有意义部分末尾

	//由于C99不支持将数组初始化为一个非零值，则手动赋值
	for (int i = 0; i < 999; i++)
	{
		cow[i] = 9;
	}

	int n = 10, y = 0, a = 0;//n为轮数（年数）

	cow[0] = 3;

	//用于表示轮数
	for (int i = 0; y < n; y++)
	{
		//遍历整个数组
		while (cow[i] != 9)
		{
			//为0的牛
			if (cow[i] == 0)
			{
				//寻找数组有意义末尾
				while (cow[a] != 9)
				{
					a++;
				}
				//生成新牛
				cow[a] = 3;
				a = 0;
				i++;
			}
			//不为0的牛
			else
			{
				cow[i] = cow[i] - 1;
				i++;
			}
		}
		//i归零，下一轮（年）
		i = 0;
	}

	//寻找数组末尾并输出，即为牛的数量
	a = 0;
	while (cow[a] != 9)
	{
		a++;
	}
	printf("%d", a);

	return 0;
}

//from JinRenn
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int getnum();

    printf("%d", getnum());

    return 0;
}

//This fuction is used to get the number
int getnum()
{
    char c;
    int i = 0, s = 0, n, m;
    int cc[99] = { ' ' };
    int ss[99] = { 0 };

    while ((c = getchar()) != ' ' || (c = getchar()) != '\n')
    {
        cc[i] = c - 48;
        i++;
    }

    i--;

    for (n = i; i >= 0; i--)
    {
        m = n - i;
        s = s + cc[i] * pow(10, m);
    }

    return s;
}



//from 2022 MOS复试试题 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int swch(int, int, int);
    int calest(int);
    int y, m, d, w;

    //To switch the number
    scanf("%d,%d,%d", &y, &m, &d);
    y, m, d = swch(y, m, d);

    w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;

    if (w == 3)
    {
        printf("V-Why-50");
    }
    else
    {
        calest(w);
    }

    return 0;
}

//This fuction is used to switch the number
int swch(int y, int m, int d)
{
    if (m <= 2)
    {
        m = m + 12;
        y = y - 1;
        return y, m, d;
    }
    else
    {
        return y, m, d;
    }
}

int calest(int w)
{
    int e;

    e = 3 - w;
    switch (e)
    {
    default:
        break;
    case -1: printf("还有 6天才是星期四"); break;
    case -2: printf("还有 5天才是星期四"); break;
    case -3: printf("还有 4天才是星期四"); break;
    case 3: printf("还有 3天才是星期四"); break;
    case 2: printf("还有 2天才是星期四"); break;
    case 1: printf("还有 1天才是星期四"); break;
    }
}

//from JinRen 23.10.22
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a = 0, b = 0, c, j, i = 0, s = 0;
	int vrfy(int, int, int);
	scanf("%d", &n);

	for (c = n; a <= n; b = 0, a++)
	{
		for (j = n - a, c = j; b <= j; b++, c = j - b)
		{
			if (vrfy(a, b, c) == 1)
			{
				printf("%d %d %d\n", a, b, c);
				s++;
			}
		}
	}

	if (s == 0)
	{
		printf("No output");
	}

	return 0;
}

int vrfy(int a, int b, int c)
{
	if (a * 50 + b * 20 + c == 1200)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
