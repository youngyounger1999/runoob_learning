#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ѡ�����򷨣��ҵ����(����С)����������ǰ
void selection_sort(int arr[],int size){
    int i,j,temp,max;
    for(i=0;i<size;i++)
    {    max=i;

        for (j = i+1; j < size; j++)
        {
            if (arr[j]>arr[max])//����arr[j]>arr[i]�Ǵ���ģ����ʾֻҪarr[j]��arr[i]��ͽ��������ݸ�max������������
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
    printf("��������������\n");
    scanf("%d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5]);
    printf("����ǰ��%d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
    selection_sort(arr,6);
    printf("���������");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d ",arr[i]);
    }
    
}