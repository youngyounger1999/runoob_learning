// ��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
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
    printf("�������ַ���");
    reverse(5);
    return 0;
}