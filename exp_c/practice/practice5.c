// ��Ŀ��������������x,y,z���������������С���������
#include <stdio.h>
int main()
{
    int array[3];
    printf("����������������");
    scanf_s("%d %d %d",&array[0], &array[1], &array[2]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3-i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d", array[i]);
    }
    
}