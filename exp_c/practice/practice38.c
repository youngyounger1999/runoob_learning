// ��Ŀ����һ��3*3����Խ���Ԫ��֮��
#include<stdio.h>
int main(){
    int N=3,m=0;
    int arr[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] =m++;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < N; i++)
    {
        int k,l,sum=0;
        l=i;
        for (int j = 0; j < N; j++,l=(l+1)%3,k=(k+1)%3)
        {
            k=j;
            sum+=arr[l][k]; 
        }
        printf("%d 2",sum);
    }
    
}