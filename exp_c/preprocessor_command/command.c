#include <stdio.h>
 
#define tokenpaster(n) printf ("token" #n " = %d", token##n)
//宏定义是将文本替换 tokenpaster(n)在执行过程中替换为 printf("token" #n "=%d", token##n)
 
int main(void)
{
   int token34 = 40;
   
   tokenpaster(34);
   return 0;
}