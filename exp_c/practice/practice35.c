// ��Ŀ���ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��
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