// ��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮��
#include<stdio.h>
int main(){
    int count,temp;
    float i=2,j=1,sum=0;
    for ( count = 0; count < 20; count++)
    {
        sum +=i/j;
        temp=i;
        i+=j;
        j=temp;
    }
    printf("%f\n",sum);
    
}