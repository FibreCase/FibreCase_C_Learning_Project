#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    char c; //用户输入字符
    int letters = 0, // 字母数目
        space = 0, // 空格数目
        digit = 0, // 整数数目
        others = 0; // 其他字符数目
    while ((c = getchar()) != '\n') 
    { // 每次读取一个字符，回车时结束
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;//字母＋1
        else if (c == ' ')
            space++;//空格+1
        else if (c >= '0' && c <= '9')
            digit++;//数字+1
        else
            others++;//其他+1
    }
    printf("字母数:%d\n空格数:%d\n数字数:%d\n其它字符数:%d\n\n", letters, space, digit, others);

    return 0;
}
    