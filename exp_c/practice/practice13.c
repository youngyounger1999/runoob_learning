// 题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
// 例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
#include <stdio.h>
int armstrong(int num)
{
    int i, j, k, arm_num = num;
    i = arm_num % 10;
    arm_num /= 10;
    j = arm_num % 10;
    arm_num /= 10;
    k = arm_num % 10;
    if (num == i * i * i + j * j * j + k * k * k)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    for (int i = 100; i < 1000; i++)
    {
        if (armstrong(i))
        {
            printf("%d\n", i);
        }
    }
}