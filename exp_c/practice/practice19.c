// 一个数如果恰好等于它的因子之和，称为“完数”。如：6=1+2+3(包括1不包括本身)。找出1000以内所有完数。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int perfect_number(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++) // 因子从1计算
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
    {
        printf("%d ", number);
        return 1;
    }
    else
        return 0;
}
int main()
{
    int i;
    for (i = 2; i <= 1000; i++)
    {
        perfect_number(i);
    }
}