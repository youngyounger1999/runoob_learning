// ��Ŀ���ж� 101 �� 200 ֮���������
#include <stdio.h>
int prime(int num)
{
    int flag = 1;
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}
int main()
{
    for (int i = 101; i <= 200; i++)
    {
        if (prime(i))
        {
            printf("%d\n", i);
        }
    }
}