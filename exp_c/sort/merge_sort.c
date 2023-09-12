

#include<stdio.h>
#include<stdlib.h>

//归并排序——迭代法
// 比较两个数，返回较小的一个
// int min(int x, int y) {
//     return x < y ? x : y;
// }该函数与stdlib库中__min函数冲突

// 归并排序主函数
void merge_sort(int arr[], int len) {
    int* a = arr; // 指向原始输入数组
    int* b = (int*) malloc(len * sizeof(int)); // 分配内存，用于存储合并结果的数组
    int seg, start;
    
    // 分割阶段
    for (seg = 1; seg < len; seg += seg) {
        // 合并阶段
        for (start = 0; start < len; start += seg + seg) {
            int low = start;
            int mid = __min(start + seg, len);//库函数中函数名不是min而是__min。
            int high = __min(start + seg + seg, len);
            int k = low;
            
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            
            // 合并两个子数组
            while (start1 < end1 && start2 < end2)//将索引比较，不包含末尾，例如第一次分割[0,1),[1,2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            
            // 将剩余元素添加到合并结果中
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        
        // 交换指针，将合并结果保存在 a 中
        int* temp = a;
        a = b;
        b = temp;
    }
    
    
    if (a != arr) {//由于之前的分割合并交换了指针a、b的指向，因此a最后可能没有指向原来的数组arr
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];//将a中正确排序的数据传递给b（因为现在b指向的是原数组arr）
        b = a; // 传递完后原数组已经获得正确排序，现在使得b，也指向a指向的地址，其实就是原来b分配到的地址
    }
    
    // 释放动态分配的内存
    free(b);
}
int main() {
     int arr[5]={0,55,22,11,44};
    merge_sort(arr,5);
    printf("排序后：%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
}