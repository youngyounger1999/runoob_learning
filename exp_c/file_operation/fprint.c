#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("test.txt", "w+");//在指定文件夹下创建文件，该文件夹必须存在，否则无法创建文件，若直接创建文件，则文件位置在当前运行位置
    if (fp != NULL)//fp作为文件指针
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
    fp=fopen("test.txt", "r");//操作文件需要打开
    fgets(buff,7,fp);
    printf("%s\n",buff);
    fclose(fp);//关闭文件释放内存
    return 0;
    
}