// 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
// 程序分析：学会分解出每一位数。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int bit(int num){
    int count=0;
    for (int i = 1; i <= num; i=i*10)
    count++;
    return count;
}
int main(){
    int number,bits,temp;
    printf("请输入一个整数:");
    scanf("%d",&number);
    bits=bit(number);
    temp=number;
    printf("%d位数\n",bits);
    int arr[bits];
    for (int i = 0; i < bits; i++)
    {
        arr[i]=temp%10;
        temp/=10;
        printf("%d",arr[i]);
    }
    printf("\n");
    for (int i =0; i <= bits/2-1; i++)
    {
        if (arr[i] !=arr[bits-1-i])
        {
            printf("this is not a palindrome !\n");
            break;
        }
        if (i==bits/2-1)
        {
            printf("%d is a palindrome.",number);
        }
        
    }

}