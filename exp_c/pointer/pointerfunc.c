#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *par);
double getAverage(int *arr, int size);//输入参数类型是int* 而不是int 所以当指针�?*p�? 实际参数是p而不�?*p
int main ()
{
  unsigned long sec;
    int *p;
    double avg;
    int a[]={1,2,3,4,5};
    p=a;

   getSeconds( &sec );

   avg=getAverage(p,5);//p或a�?&a[0] 皆可

   /* 输出实际�? */
   printf("Number of seconds: %ld\n avg= %f\n p=%d\n &a=%p\n", sec,avg,*p,&a[0] );

   return 0;
}

void getSeconds(unsigned long *par)
{
   /* 获取当前的秒�? */
   *par = time( NULL );
   return;
}
double getAverage(int *arr, int size)
{
  int    i, sum = 0;      
  double avg;          
 
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
 
  avg = (double)sum / size;
 
  return avg;
}