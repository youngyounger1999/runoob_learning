// ��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
// �ѳ�ǩ���������������������Ա����������������a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�����
#include<stdio.h>
// #pragma warning(disable:4996) Ԥ�����������4996����
struct fight
{
    char member1;
    char member2;
};
struct teams
{
    char member1;
    int flag;
};

int main()
{
    struct teams team[] =
        {
            {'x', 0},
            {'y', 0},
            {'z', 0}};

    struct fight fight[3] = {
        {
            'c',
        },
        {
            'a',
        },
        {
            'b',
        }};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (fight[i].member1 == 'c')
            {

                if (team[j].member1 != 'x' && team[j].member1 != 'z')
                {
                    fight[i].member2 = team[j].member1;
                    team[j].flag = 1;
                    break;
                }
            }
            else if (fight[i].member1 == 'a')
            {
                if (team[j].member1 != 'x' && team[j].flag == 0)
                {
                    fight[i].member2 = team[j].member1;
                    team[j].flag = 1;
                }
            }
            else if (team[j].flag == 0)
            {
                fight[i].member2 = team[j].member1;

            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%c vs %c\n",fight[i].member1, fight[i].member2);
    }
    
}
