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
    printf("ƽ��ֵ��%.1f\n", sum);
    printf("���ڵ���ƽ��ֵ��Ԫ����");
    for (i = 0; i < 8; i++)
    {
        if (a[i] >= sum)
            printf("%d ", a[i]);
    }
    return 0;
}


