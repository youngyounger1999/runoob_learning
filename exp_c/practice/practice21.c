// ���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ��?
// �ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ��?��һ����һ����
// ����10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
#include <stdio.h>
int how_many_pitches(int days)
{
    int pitches;
    days--;
    if (days == 0)
    {
        pitches = 1;
    }
    else
    pitches=(how_many_pitches(days)+1)*2;
    return pitches;
}
int main(){
    int pitches;

    pitches=how_many_pitches(10);
    printf("%d",pitches);
}