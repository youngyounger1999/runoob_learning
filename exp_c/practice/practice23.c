// 题目：打印出如下图案（菱形）。
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    int rows,count;
    printf("请输入行数(奇数):");
    scanf("%d",&rows);
        for (int j = 1; j<= rows/2+1; j++)//上半部分
        {
            for (int k = 0; k < rows/2+1-j; k++)
            {
                printf(" ");
            }
            for (int k = 0; k < 2*j-1; k++)
            {
                printf("*");
            }
            printf("\n");
        }
         for (int j =rows/2 ; j>= 1; j--)//下半部分
        {
            for (int k = 0; k < rows/2+1-j; k++)
            {
                printf(" ");
            }
            for (int k = 0; k < 2*j-1; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        

    
}