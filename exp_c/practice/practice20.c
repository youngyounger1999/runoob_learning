//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
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