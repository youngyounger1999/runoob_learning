// ��Ŀ����һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,8,9},a,temp;
    int length=sizeof(arr)/sizeof(arr[0])+1;
    int array[length];
    printf("������һ������");
    scanf("%d",&a);
    for (int i = 0; i < length-1; i++)
    {
        array[i]=arr[i];
    }
    array[length-1]=a;
    for (int i = 0; i < length-1; i++)
    {
        if (a<array[i])
        {
            for (int j = i; j < length; j++)
            {
                temp=array[j];
                array[j]=a;
                a=temp;
            }
            break;
        }
        
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d",array[i]);
    }
    
    
}