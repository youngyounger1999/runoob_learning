#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������򣺴Ӻ���ǰɨ������
void insertion_sort(int arr[],int len){
    int i,j,temp;
    for(i=1;i<len;i++){
        temp=arr[i];
        for ( j = i; j > 0 && arr[j-1]>temp; j--)//��ǰһ����û��һ������ֱ��������һѭ��
        {
            arr[j]=arr[j-1];
        }
            arr[j]=temp;
    }
}

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    printf("������Ҫ�����5����������:");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("�������Ϊ��%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    insertion_sort(arr, 5);
    printf("�����%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}