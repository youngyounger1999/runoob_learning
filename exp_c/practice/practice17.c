// 输入一行字符，分别统计其中英文字母空格和其它字符个数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int Alphabet = 0, number = 0, space = 0, other = -1;
    char character[256];
    printf("请输入一串字符：(小于100个)");
    fgets(character,100,stdin);
    for (int i = 0; character[i] != '\0'; i++)
    {
        if (character[i] == ' ')
            space++;
        else if ((character[i] <= 'Z' && character[i] >= 'A') || (character[i] <= 'z' && character[i] >= 'a'))
            Alphabet++;
        else if ((int)character[i] >=48 && (int)character[i] <= 57)
            number++;
        else
            other++;
    }

    printf("字母：%d  数字：%d 空格：%d 其它：%d", Alphabet, number, space, other);
}