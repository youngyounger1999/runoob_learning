// ��Ŀ����������������m��n���������Լ������С��������
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
    printf("����������������");
    scanf("%d %d",&num1,&num2);
    max_devisor=max_com_devisor(num1,num2);
    min_multiple=num1*num2/max_devisor;
    printf("��С��������%d�����������%d",min_multiple,max_devisor);
}
