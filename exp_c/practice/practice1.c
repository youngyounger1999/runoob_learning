// ��Ŀ���� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
// ��������������ڰ�λ��ʮλ����λ�����ֶ��� 1��2��3��4��������е����к���ȥ�����������������С�
#include<stdio.h>
int main(){
    int num[4]={1,2,3,4},count;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (num[i]!=num[j]&&num[i]!=num[k]&&num[k]!=num[j])
                {
                    printf("%d\n",num[i]*100+num[j]*10+num[k]);
                    count++;
                }
                
            }
            
        }
        
    }
    printf("%d",count);
}