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
    
    if (w==3)
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