#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//插入排序：从后往前扫描排序
void insertion_sort(int arr[],int len){
    int i,j,temp;
    for(i=1;i<len;i++){
        temp=arr[i];
        for ( j = i; j > 0 && arr[j-1]>temp; j--)//若前一个数没后一个大，则直接跳过这一循环
        {
            arr[j]=arr[j-1];
        }
            arr[j]=temp;
    }
}

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    printf("请输入要排序的5个整形数字:");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("输入的数为：%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    insertion_sort(arr, 5);
    printf("排序后：%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}