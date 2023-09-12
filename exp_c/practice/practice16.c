// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int max_com_devisor(int num1,int num2) {
    int num=num1>num2?num1:num2;
    for (int i = num; i >= 1; i--)
    {
        if (num1%i == 0&&num2%i == 0)
        {
            num=i;
            break;
        }
        
    }
    return num;
}
int main(){
    int num1,num2,max_devisor,min_multiple;
    printf("请输入两个整数：");
    scanf("%d %d",&num1,&num2);
    max_devisor=max_com_devisor(num1,num2);
    min_multiple=num1*num2/max_devisor;
    printf("最小公倍数：%d，最大公因数：%d",min_multiple,max_devisor);
}
