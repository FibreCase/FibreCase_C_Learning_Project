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
