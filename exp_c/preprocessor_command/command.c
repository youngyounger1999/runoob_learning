#include <stdio.h>
 
#define tokenpaster(n) printf ("token" #n " = %d", token##n)
//�궨���ǽ��ı��滻 tokenpaster(n)��ִ�й������滻Ϊ printf("token" #n "=%d", token##n)
 
int main(void)
{
   int token34 = 40;
   
   tokenpaster(34);
   return 0;
}