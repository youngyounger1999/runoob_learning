#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//ð�������ɴ�С��������������������������������ǰ
void bubble_sort(int arr[],int size){
    int i,j,temp;
    for(i=size-1;i>=0;i--)
        for(j=0;j<i;j++)
        if (arr[j]<arr[j+1])
        {
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
        
}
int main(){
    int arr[5]={0,1,2,3,4};
    printf("������Ҫ�����5���������֣�");
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    printf("�������Ϊ��%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
    bubble_sort(arr,5);
    printf("�����%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
}