#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("test.txt", "w+");//��ָ���ļ����´����ļ������ļ��б�����ڣ������޷������ļ�����ֱ�Ӵ����ļ������ļ�λ���ڵ�ǰ����λ��
    if (fp != NULL)//fp��Ϊ�ļ�ָ��
    {
        fprintf(fp, "This is testing for fprintf...\n");
        fputs("This is testing for fputs...\n", fp);
        fclose(fp);
        // printf("This is testing for fclose...\n");
    }
    else
    {
        printf("wrong file");
    }
    char buff[250];
    fp=fopen("test.txt", "r");//�����ļ���Ҫ��
    fgets(buff,7,fp);
    printf("%s\n",buff);
    fclose(fp);//�ر��ļ��ͷ��ڴ�
    return 0;
    
}