#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    //先输出N以下的全体质数备用
    int n, j = 0, k = 0;
    scanf("%d", &n);
    
    int prinum[10000] = { 0 };
    int vrfy_pri(int);

    for (int i = 1; i <= n; i++)
    {
        if (vrfy_pri(i)==1)
        {
            prinum[j] = i;
            j++;
        }
    }

    //对于给定数字从大到小除以质数进行测试
    int factor[10000] = { 0 };
    int x = n;
    j--;
    for (; j >= 0;)
    {
        if (x % prinum[j]==0)
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

    printf("%d=",n);
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

}