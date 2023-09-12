#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//选择排序法：找到最大(或最小)的数放在最前
void selection_sort(int arr[],int size){
    int i,j,temp,max;
    for(i=0;i<size;i++)
    {    max=i;

        for (j = i+1; j < size; j++)
        {
            if (arr[j]>arr[max])//若用arr[j]>arr[i]是错误的，这表示只要arr[j]比arr[i]大就将序数传递给max，而不是最大的
            {
                max=j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}
int main(){
    int arr[6];
    printf("请输入六个数：\n");
    scanf("%d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5]);
    printf("排序前：%d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
    selection_sort(arr,6);
    printf("排序后数：");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d ",arr[i]);
    }
    
}