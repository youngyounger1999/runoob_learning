// ��Ŀ���ж�һ�������Ƿ�Ϊ������
// ���������������prime number���ֳ������������޸���
// һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ��������
// ����Դ���룺������˹����ɸ����Sieve of Eratosthenes����һ�ֹ��϶���Ч���㷨��
// ���ڲ���һ����Χ�ڵ��������������Ļ���˼���Ǵ�С������һɸ����������������������ʣ�µľ���������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    int number;
    printf("������һ�����֣�");
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