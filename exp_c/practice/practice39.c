// 题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,8,9},a,temp;
    int length=sizeof(arr)/sizeof(arr[0])+1;
    int array[length];
    printf("请输入一个数：");
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