// ��Ŀ���ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
// С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ�������
// ��ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
// ������������ӵĹ���Ϊ����1,1,2,3,5,8,13,21....�����¸�������������֮�ͣ��ӵ������¿�ʼ����
// ��ѭ쳲���������
#include <stdio.h>
int main()
{
    int month=1, one_month_ago=2,current_month=2,temp;
    printf("��%2d����: %10d,",month,current_month);  
    for (month = 2; month <= 40; month++)
    {
        printf("��%2d����: %10d,",month,current_month);
        if (month % 4==0)
        {
            printf("\n");
        }
        temp=current_month;
        current_month=one_month_ago+current_month;
        one_month_ago =temp;
    }
}