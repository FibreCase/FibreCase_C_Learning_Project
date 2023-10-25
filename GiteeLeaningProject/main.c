#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    //先输出N以下的全体质数备用
    int n ;
    scanf("%d", &n);
    

    int prinum[n];
    int vrfy_pri(int);

    for (int i = 1, j = 0; i <= n; i++)
    {
        if (vrfy_pri(i)==1)
        {

        }
    }


    return 0;
}

int vrfy_pri(int i)
{

}
