// 题目：判断一个数字是否为质数。
// 程序分析：质数（prime number）又称素数，有无限个。
// 一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
// 程序源代码：埃拉托斯特尼筛法（Sieve of Eratosthenes）是一种古老而高效的算法，
// 用于查找一定范围内的所有素数。它的基本思想是从小到大逐一筛除合数（非素数），最终剩下的就是素数。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    int number;
    printf("请输入一个数字：");
    scanf("%d",&number);
    for (int i = 2; i <= number/2; i++)
    {
        if (number%i==0)
        {
            printf("This is not a prime number.");
            break;
        }
        else if (i==number/2)
        {
            printf("This is a prime number");
        }
        
    }
    
}