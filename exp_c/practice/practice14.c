// ��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��
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
        if (num % i == 0&&prime(i)&&i!=num)//�������жϳ���i�Ƿ�Ϊ��������Ϊ����Ѱ�ҳ��������У�
        {
            printf("%d*",i);//�������Ǻ�������˵���ó������Խ�һ���ֽ�
            num /= i;
            i=2;
        }
        else if (num % i == 0&&prime(i)&&i==num)   
        printf("%d",i);
    }
    
}
int main(){
    int num;
    printf("������һ������������");
    scanf("%d",&num);
    find_prime(num);
}