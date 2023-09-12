// 题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
// 小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，
// 问每个月的兔子总数为多少？（输出前40个月即可）
// 程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。
// 遵循斐波那契数列
#include <stdio.h>
int main()
{
    int month=1, one_month_ago=2,current_month=2,temp;
    printf("第%2d个月: %10d,",month,current_month);  
    for (month = 2; month <= 40; month++)
    {
        printf("第%2d个月: %10d,",month,current_month);
        if (month % 4==0)
        {
            printf("\n");
        }
        temp=current_month;
        current_month=one_month_ago+current_month;
        one_month_ago =temp;
    }
}