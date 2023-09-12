
#include <stdio.h>
void shell(int arr[], int len)
{
    int gap, i, j, temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)//间隔每次缩小一半，分组成第1、4、7、10...与2、5、8、11...等组进行排序
    {
        for (i = gap; i < len; i++)
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j+gap] = temp;
        }
    }
}

int main()
{
    int arr[10] = {22, 55, 44, 16, 34, 78, 49, 25, 889, 566};
    shell(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}