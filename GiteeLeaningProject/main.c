#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    float mon=0,inter;
    char i;
    scanf("%f", &inter);

    if (inter < 100000)
    {
        i = 1;
    }
    else if (inter <= 200000 && inter > 100000)
    {
        i = 2;
    }
    else if (inter <= 400000 && inter > 200000)
    {
        i = 3;
    }
    else if (inter <= 600000 && inter > 400000)
    {
        i = 4;
    }
    else if (inter <= 1000000 && inter > 600000)
    {
        i = 5;
    }
    else if (inter > 1000000)
    {
        i = 6;
    }

    switch (i)
    {
    
    case 6:
        mon = (inter - 1e6) * 0.01;
        inter = 1e6;
    case 5:
        mon = (inter - 6e5) * 0.015 + mon;
        inter = 6e5;
    case 4:
        mon = (inter - 4e5) * 0.03 + mon;
        inter = 4e5;
    case 3:
        mon = (inter - 2e5) * 0.05 + mon;
        inter = 2e5;
    case 2:
        mon = (inter - 1e5) * 0.075 + mon;
        inter = 1e5;
    case 1:
        mon = inter * 0.1 + mon;
    }

    printf("奖金是%.2f", mon);
    return 0;
}
    