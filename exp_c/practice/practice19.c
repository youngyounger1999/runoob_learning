// һ�������ǡ�õ�����������֮�ͣ���Ϊ�����������磺6=1+2+3(����1����������)���ҳ�1000��������������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int perfect_number(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++) // ���Ӵ�1����
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
    {
        printf("%d ", number);
        return 1;
    }
    else
        return 0;
}
int main()
{
    int i;
    for (i = 2; i <= 1000; i++)
    {
        perfect_number(i);
    }
}