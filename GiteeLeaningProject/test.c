#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int swch(int, int, int);
    int y, m, d;
    scanf("%d,%d,%d", &y, &m, &d);

    y, m, d = swch(y, m, d);
    printf("%d%d%d", y, m, d);

    return 0;
}

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
