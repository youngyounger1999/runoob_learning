

#include<stdio.h>
#include<stdlib.h>

//�鲢���򡪡�������
// �Ƚ������������ؽ�С��һ��
// int min(int x, int y) {
//     return x < y ? x : y;
// }�ú�����stdlib����__min������ͻ

// �鲢����������
void merge_sort(int arr[], int len) {
    int* a = arr; // ָ��ԭʼ��������
    int* b = (int*) malloc(len * sizeof(int)); // �����ڴ棬���ڴ洢�ϲ����������
    int seg, start;
    
    // �ָ�׶�
    for (seg = 1; seg < len; seg += seg) {
        // �ϲ��׶�
        for (start = 0; start < len; start += seg + seg) {
            int low = start;
            int mid = __min(start + seg, len);//�⺯���к���������min����__min��
            int high = __min(start + seg + seg, len);
            int k = low;
            
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            
            // �ϲ�����������
            while (start1 < end1 && start2 < end2)//�������Ƚϣ�������ĩβ�������һ�ηָ�[0,1),[1,2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            
            // ��ʣ��Ԫ����ӵ��ϲ������
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        
        // ����ָ�룬���ϲ���������� a ��
        int* temp = a;
        a = b;
        b = temp;
    }
    
    
    if (a != arr) {//����֮ǰ�ķָ�ϲ�������ָ��a��b��ָ�����a������û��ָ��ԭ��������arr
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];//��a����ȷ��������ݴ��ݸ�b����Ϊ����bָ�����ԭ����arr��
        b = a; // �������ԭ�����Ѿ������ȷ��������ʹ��b��Ҳָ��aָ��ĵ�ַ����ʵ����ԭ��b���䵽�ĵ�ַ
    }
    
    // �ͷŶ�̬������ڴ�
    free(b);
}
int main() {
     int arr[5]={0,55,22,11,44};
    merge_sort(arr,5);
    printf("�����%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
}