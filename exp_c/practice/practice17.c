// ����һ���ַ����ֱ�ͳ������Ӣ����ĸ�ո�������ַ�����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int Alphabet = 0, number = 0, space = 0, other = -1;
    char character[256];
    printf("������һ���ַ���(С��100��)");
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

    printf("��ĸ��%d  ���֣�%d �ո�%d ������%d", Alphabet, number, space, other);
}