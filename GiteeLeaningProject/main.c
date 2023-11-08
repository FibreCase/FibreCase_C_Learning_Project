#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //***********************
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

    for (int j = 0,i = n-1; i >= 0; i--,j++)
    {
        a[i] = b[j];
    }

    //***********************
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
        
    
    return 0;
}