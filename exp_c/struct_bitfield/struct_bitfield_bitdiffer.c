#include <stdio.h>

struct example1 {
     int a : 4;
     int b : 5;
     unsigned int c : 7;
     int d : 7;
     int e : 7;
     short f : 2; //��ͬ�������ᵼ�´洢��С��ͬ

};

int main() {
     struct example1 ex1;

     printf("Size of example1: %zu bytes\n", sizeof(ex1));//������Ϊ4�ֽڣ�˵���������������ڴ�ţ����һ���ֽ�aaaabbbb �ڶ����ֽ�bccccccc��

     return 0;
}