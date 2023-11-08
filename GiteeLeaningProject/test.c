#include<stdio.h>
int main()
{
    int i = 0;
    int a[8] = { 0 };
    float sum = 0;
    for (i = 0; i < 8; i++)
    {
        scanf_s("%d", &a[i]);
        sum = sum + a[i];
    }
    sum = sum / 8;
    printf("平均值是%.1f\n", sum);
    printf("大于等于平均值的元素是");
    for (i = 0; i < 8; i++)
    {
        if (a[i] >= sum)
            printf("%d ", a[i]);
    }
    return 0;
}


