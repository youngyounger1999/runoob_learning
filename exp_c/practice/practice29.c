// ��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
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
    printf("������һ����λ��������");
    scanf("%d",&num);printf("%dλ��\n",bit(num));
    reverse(num,bit(num));
    
}