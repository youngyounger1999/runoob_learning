#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//冒泡排序由大到小：两数两两交换将最大的数放在数组最前
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
    printf("请输入要排序的5个整形数字：");
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    printf("输入的数为：%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
    bubble_sort(arr,5);
    printf("排序后：%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
}