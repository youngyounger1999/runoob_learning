// 30 ������һ�����ϣ����أ���Ҫ 15 ���´���
// ���������ų�һ�ӣ��Ŷӵ�λ�ü�Ϊ���ǵı�š�
// �������� 1 ��ʼ������ 9 �����´���
// ���ѭ����ֱ�����Ͻ�ʣ 15 ��Ϊֹ.
#include <stdio.h>
int main()
{
    int num=0, count=30, i;
    int members[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    for (i = 0; count > 15; i++)
    {
        num++;
        if (num == 9)
        {
            num=1;
            printf("%d��",members[i]);
            for (int j = i; j < count; j++)
            {
                members[j]=members[j+1];
            }
            count--;
        }
        else if (i>count)
            i=1;
    }
}