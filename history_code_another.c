//from ������ ţ������������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���õ���ʱ���뷨��Ϊÿһͷ��ţ���赹��ʱ3��ÿ��-1��������ʱ��0ʱ����Ϊ
//��ţ���з�ֳ��������ÿ��������ĩβ���һ��3����ţ��
int main()
{
	int cow[999] = { 0 };//����һͷţ��״ֻ̬��0-3��9�����ڼ�����������岿��ĩβ

	//����C99��֧�ֽ������ʼ��Ϊһ������ֵ�����ֶ���ֵ
	for (int i = 0; i < 999; i++)
	{
		cow[i] = 9;
	}

	int n = 10, y = 0, a = 0;//nΪ������������

	cow[0] = 3;

	//���ڱ�ʾ����
	for (int i = 0; y < n; y++)
	{
		//������������
		while (cow[i] != 9)
		{
			//Ϊ0��ţ
			if (cow[i] == 0)
			{
				//Ѱ������������ĩβ
				while (cow[a] != 9)
				{
					a++;
				}
				//������ţ
				cow[a] = 3;
				a = 0;
				i++;
			}
			//��Ϊ0��ţ
			else
			{
				cow[i] = cow[i] - 1;
				i++;
			}
		}
		//i���㣬��һ�֣��꣩
		i = 0;
	}

	//Ѱ������ĩβ���������Ϊţ������
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



//from 2022 MOS�������� 1
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
    case -1: printf("���� 6�����������"); break;
    case -2: printf("���� 5�����������"); break;
    case -3: printf("���� 4�����������"); break;
    case 3: printf("���� 3�����������"); break;
    case 2: printf("���� 2�����������"); break;
    case 1: printf("���� 1�����������"); break;
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
