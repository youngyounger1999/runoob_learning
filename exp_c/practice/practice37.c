// ��Ŀ����10������������
// �����������������ѡ�񷨣����Ӻ�9���ȽϹ����У�
// ѡ��һ����С�����һ��Ԫ�ؽ����� �´����ƣ����õڶ���Ԫ�����8�����бȽϣ������н�����
#include <stdio.h>
void bubble_sort(int arr[], int length)
{
    int temp;
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void selection_sort(int arr[], int length)
{
    int min, temp;
    for (int i = 0; i < length - 1; i++)
    {
        min = i;
        for (int j = i; j < length - 1; j++)
        {
            if (arr[min] > arr[j + 1])
            {
                min = j + 1;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void insertion_sort(int arr[], int length)
{
    int temp;
    for (int i = length - 1; i >= 0; i--)
    {
        temp = arr[i];
        for (int j = i; arr[j+1] < temp && j<length-1; j++)
        {
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
int main()
{
    int arr[10] = {546, 5, 8, 23, 14, 7, 48, 1598, 16, 49};
    // bubble_sort(arr,sizeof(arr)/sizeof(arr[0]));
    // selection_sort(arr,sizeof(arr)/sizeof(arr[0]));
    insertion_sort(arr, sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}