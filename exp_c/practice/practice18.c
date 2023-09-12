//求s=a+aa+aaa+aaaa+...,根据给出的数字与位数计算该方程
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    int num,i,sum;
    printf("数字：");
    scanf("%d",&num);
    int k=num;
    printf("位数：");
    scanf("%d",&i);
    for (int j = 1; j <=i; j++)
    {
        sum+=num;
        num=num*10+k;
    }
    printf("the answer is %d",sum);
}