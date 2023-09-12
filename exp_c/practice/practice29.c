// 题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int bit(int num){
    int count=0;
    for (int i = 1; i <= num; i=i*10)
    count++;
    return count;
}
void reverse(int num,int count)
{
    if (count!=0)
    {
        // count=count-1;
        printf("%d",num%10);
        reverse(num/10,--count);
        
    }
   
}
int main(){
    int num;
    printf("请输入一个多位正整数：");
    scanf("%d",&num);printf("%d位数\n",bit(num));
    reverse(num,bit(num));
    
}