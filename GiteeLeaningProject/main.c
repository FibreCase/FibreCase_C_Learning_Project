#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    int m, n, i, a;
    int min(int,int), max(int,int);
    scanf("%d,%d", &m, &n);
    i = min(m, n);
    while (i>=1)
    {
        if (m%i==0 && n%i==0)
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
        if (a%m == 0 && a % n == 0)
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