// ��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
// 60-89��֮�����B��ʾ��60�����µ���C��ʾ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    char grade;
    int score;
    printf("������ɼ�:");
    scanf("%d",&score);
    grade=score>=90? 'A':((score>=60)?'B':'C');
    printf("%c",grade);
}