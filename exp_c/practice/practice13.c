// ��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
// ���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
#include <stdio.h>
int armstrong(int num)
{
    int i, j, k, arm_num = num;
    i = arm_num % 10;
    arm_num /= 10;
    j = arm_num % 10;
    arm_num /= 10;
    k = arm_num % 10;
    if (num == i * i * i + j * j * j + k * k * k)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    for (int i = 100; i < 1000; i++)
    {
        if (armstrong(i))
        {
            printf("%d\n", i);
        }
    }
}