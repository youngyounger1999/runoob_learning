//��s=a+aa+aaa+aaaa+...,���ݸ�����������λ������÷���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    int num,i,sum;
    printf("���֣�");
    scanf("%d",&num);
    int k=num;
    printf("λ����");
    scanf("%d",&i);
    for (int j = 1; j <=i; j++)
    {
        sum+=num;
        num=num*10+k;
    }
    printf("the answer is %d",sum);
}