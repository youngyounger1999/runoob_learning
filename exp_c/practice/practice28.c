// ��Ŀ����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ
// �ʵ�4������������˵�ȵ�3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ
// �ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
#include<stdio.h>
int years(int num){
    int year;
    if (num==1)
    {
        year= 10;
    }
    else {
        year=2+years(num-1);
    }
    return year;
    
}
int main(){
int num=5;
printf("�������%d��\n",years(num));
}