// 题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。
// 问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。
// 问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
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
printf("第五个人%d岁\n",years(num));
}