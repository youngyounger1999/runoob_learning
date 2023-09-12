// 题目：对10个数进行排序。
// 程序分析：可以利用选择法，即从后9个比较过程中，
// 选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换。
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