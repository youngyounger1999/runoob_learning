// ��Ŀ��ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    char a,buf[100];
    printf("�������ַ�����");
    scanf("%s",buf);
    while (getchar()!='\n');//��������
    printf("��������Ҫɾ�����ַ���");
    a=getchar();
    // while (getchar()!='\n');
    printf("%c\n",a);
    for (int i = 0; buf[i] != '\0'; i++)
    {
        if (buf[i] == a)
        {
            for (int j=i; buf[j] != '\0'; j++){
                buf[j]=buf[j+1];
            }
        }
        
    }
    for (int i = 0; buf[i] != '\0'; i++)
    {
        printf("%c",buf[i]);
    }
    
    
    
}