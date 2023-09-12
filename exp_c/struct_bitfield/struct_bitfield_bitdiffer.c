#include <stdio.h>

struct example1 {
     int a : 4;
     int b : 5;
     unsigned int c : 7;
     int d : 7;
     int e : 7;
     short f : 2; //不同整型数会导致存储大小不同

};

int main() {
     struct example1 ex1;

     printf("Size of example1: %zu bytes\n", sizeof(ex1));//输出结果为4字节，说明几个变量是相邻存放（如第一个字节aaaabbbb 第二个字节bccccccc）

     return 0;
}