// 题目：输入某年某月某日，判断这一天是这一年的第几天？
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int leap_check(int year)
{
    int leap = 0;
    if (year % 100 != 0)
    {
        if (year % 4 == 0)
            leap = 1;
    }
    else if (year % 400 == 0)
        leap = 1;
    return leap;
}
int main()
{
    int year, month, day, leap, count;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("请输入年、月、日：(以空格分开)");
    scanf("%d %d %d", &year, &month, &day);
    leap = leap_check(year);
    for (int i = 1; i < month; i++)
    {
        count += months[i];
    }
    if (month > 2)
        count+=leap;
    count += day;
    printf("今年的第%d天", count);
}