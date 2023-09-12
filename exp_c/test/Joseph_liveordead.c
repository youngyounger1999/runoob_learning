// 30 个人在一条船上，超载，需要 15 人下船。
// 于是人们排成一队，排队的位置即为他们的编号。
// 报数，从 1 开始，数到 9 的人下船。
// 如此循环，直到船上仅剩 15 人为止.
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
            printf("%d号",members[i]);
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