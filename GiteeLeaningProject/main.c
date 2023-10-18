#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
    float grade;
    scanf("%f", &grade);
    
    if (grade <= 100 && grade >= 0)
    {
        switch ((int)grade/10)
        {
        default:printf("成绩是%.1f,相应的等级是E",grade);
            break;
        case 10:
        case 9:
            printf("成绩是%.1f,相应的等级是A", grade); break;
        case 8:
            printf("成绩是%.1f,相应的等级是B", grade); break;
        case 7:
            printf("成绩是%.1f,相应的等级是C", grade); break;
        case 6:
            printf("成绩是%.1f,相应的等级是D", grade); break;
        }
    }
    else
    {
        printf("输入成绩有误");
    }
    return 0;
}