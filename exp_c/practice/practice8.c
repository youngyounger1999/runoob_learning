// ��Ŀ�����9*9�ھ�
#include<stdio.h>
int main(){
    int i, j;
    for ( i = 1; i <= 9; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%dx%d=%-2d ", i, j,i*j);
        }
        printf("\n");
    }
    
}