//��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
#include<stdio.h>
int main(){
    double height =100,length=100;
    for (int i = 0; i < 9; i++)
    {
        printf("%f ",height/2);
        length+=height;
        height=height/2;
    }
    printf("%f\n",length);
} 