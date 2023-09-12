// 题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    char a,buf[100];
    printf("请输入字符串：");
    scanf("%s",buf);
    while (getchar()!='\n');//清理缓冲区
    printf("请输入需要删除的字符：");
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