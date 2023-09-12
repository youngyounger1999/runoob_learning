// 题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
#include<stdio.h>
#include<string.h>
int main(){
    char buf[1024];
    fgets(buf,1024,stdin);
    printf("%zu\n",strlen(buf));
    for (int i = strlen(buf); i >=0; i--)
    {
        printf("%c",buf[i]);
    }
    
}