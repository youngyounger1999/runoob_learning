// 题目：求1+2!+3!+...+20!的和。
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
    printf("几位阶乘的和：");
    scanf("%lld",&num);
    printf("%lld",num);
    for(int i=1;i<=num;i++){
        sum+=factorial(i);
    }
    printf("%lld\n",sum);

}