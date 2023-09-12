// 题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include <stdio.h>
void reverse(int num)
{
    char a;
    if (num > 0)
    {
        a = getchar();
        reverse(num - 1);
    printf("%c", a);
    }

    
}
int main()
{
    printf("请输入字符：");
    reverse(5);
    return 0;
}