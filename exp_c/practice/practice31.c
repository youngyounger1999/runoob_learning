// ��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char buf[8];
    int i=0;
    printf("���ܼ��жϣ�������һ����ĸ��");
    buf[i] = getchar();
    while (getchar() != '\n'); // ������뻺�����е������ַ���ֱ���������з�Ϊֹ
    switch (buf[0])
    {
    case 'M':
    case 'm':
        printf("Monday");
        break;
    case 'F':
    case 'f':
        printf("Friday");
        break;
    case 'W':
    case 'w':
        printf("Wednesday");
        break;
    case 'T':
    case 't':
        printf("�����������һ����ĸ��");
        while (getchar() != '\n'); // ������뻺�����е������ַ���ֱ���������з�Ϊֹ
        if (buf[1] == 'u')
        {
            printf("Tuesday");
        }
        else if (buf[1] == 'h')
        {
            printf("Thursday");
        }
        else
            printf("incorrect");
        break;
    case 'S':
    case 's':
        printf("�����������һ����ĸ��");
        buf[1] = getchar();
        while (getchar() != '\n'); // ������뻺�����е������ַ���ֱ���������з�Ϊֹ
        if (buf[1] == 'u')
        {
            printf("Sunday");
        }
        else if (buf[1] == 'a')
        {
            printf("Saturday");
        }
        else
        {
            printf("%c\n", buf[1]);
            printf("incorrect");
        }
        break;

    default:
        printf("This is not a correct letter.");
        break;
    }
}