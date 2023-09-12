// 题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
// 1、则：x + 100 = n2, x + 100 + 168 = m2
// 2、计算等式：m2 - n2 = (m + n)(m - n) = 168
// 3、设置： m + n = i，m - n = j，i * j =168，i 和 j 至少一个是偶数
// 4、可得： m = (i + j) / 2， n = (i - j) / 2，i 和 j 要么都是偶数，要么都是奇数。
// 5、从 3 和 4 推导可知道，i 与 j 均是大于等于 2 的偶数。
// 6、由于 i * j = 168， j>=2，则 1 < i < 168 / 2 + 1。
// 7、接下来将 i 的所有数字循环计算即可。
#include <stdio.h>
int main()
{
    int i, j, flag = 0;
    for (i = 2; i < 85; i += 2)
    {
        for (j = 2; j < 85; j += 2)
        {
            if (i * j == 168)
            {
                printf("i:%d j:%d, x=%d\n", i, j, (i + j) * (i + j) / 4 - 268);
            }
        }
    }
    return 0;
}