#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    scanf("%f,%f", &x, &y);
    if (fabs(fabs(x) - 2) < 1 && fabs(fabs(y) - 2) < 1)
    {
        printf("该点高度为10米");
    }
    else
    {
        printf("该点高度为0米");
    }

    return 0;
}
    