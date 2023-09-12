// 题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
// 已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单
#include<stdio.h>
// #pragma warning(disable:4996) 预处理命令，禁用4996警告
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
