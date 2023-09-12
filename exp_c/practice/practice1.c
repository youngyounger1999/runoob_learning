// 题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
// 程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。
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