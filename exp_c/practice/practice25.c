// ��Ŀ����1+2!+3!+...+20!�ĺ͡�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long long factorial(int num){
    if (num==1)
    {
        return 1;
    }
    else
    return num*factorial(num-1);    
}
int main(){
    long long num;
    long long sum=0;
    printf("��λ�׳˵ĺͣ�");
    scanf("%lld",&num);
    printf("%lld",num);
    for(int i=1;i<=num;i++){
        sum+=factorial(i);
    }
    printf("%lld\n",sum);

}