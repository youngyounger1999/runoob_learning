// 题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prime(int num)
{
    int flag = 1;
    for (int i = 2; i < num / 2; i++)
    {
        if (num / i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}

void find_prime(int num){
    printf("%d=",num);
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0&&prime(i)&&i!=num)//不用再判断除数i是否为质数，因为在找寻找除数过程中，
        {
            printf("%d*",i);//若除数是合数，则说明该除数可以进一步分解
            num /= i;
            i=2;
        }
        else if (num % i == 0&&prime(i)&&i==num)   
        printf("%d",i);
    }
    
}
int main(){
    int num;
    printf("请输入一个人正整数：");
    scanf("%d",&num);
    find_prime(num);
}