// 题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char buf[8];
    int i=0;
    printf("（周几判断）请输入一个字母：");
    buf[i] = getchar();
    while (getchar() != '\n'); // 清空输入缓冲区中的其他字符，直到遇到换行符为止
    switch (buf[0])
    {
    case 'M':
    case 'm':
        printf("Monday");
        break;
    case 'F':
    case 'f':
        printf("Friday");
        break;
    case 'W':
    case 'w':
        printf("Wednesday");
        break;
    case 'T':
    case 't':
        printf("请继续输入下一个字母：");
        while (getchar() != '\n'); // 清空输入缓冲区中的其他字符，直到遇到换行符为止
        if (buf[1] == 'u')
        {
            printf("Tuesday");
        }
        else if (buf[1] == 'h')
        {
            printf("Thursday");
        }
        else
            printf("incorrect");
        break;
    case 'S':
    case 's':
        printf("请继续输入下一个字母：");
        buf[1] = getchar();
        while (getchar() != '\n'); // 清空输入缓冲区中的其他字符，直到遇到换行符为止
        if (buf[1] == 'u')
        {
            printf("Sunday");
        }
        else if (buf[1] == 'a')
        {
            printf("Saturday");
        }
        else
        {
            printf("%c\n", buf[1]);
            printf("incorrect");
        }
        break;

    default:
        printf("This is not a correct letter.");
        break;
    }
}