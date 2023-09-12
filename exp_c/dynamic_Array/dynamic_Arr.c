#define _CRT_SECURE_NO_WARNINGS//https://blog.csdn.net/qq_52057693/article/details/116019544
#include <stdio.h>
#include <stdlib.h>

/// @brief 
/// @return 
int main() {
    int size = 5;
    int *dynamicArray = (int *)malloc(size * sizeof(int)); // 动态数组内存分配 malloc之前的“（int *）（指针类型）”可写可不写

    if (dynamicArray == NULL) {             //使用动态数组时，需要检查内存分配是否成功（即 dynamicArray 是否为 NULL），以避免在内存分配失败时发生错误。
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &dynamicArray[i]);
    }

    printf("Dynamic Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    free(dynamicArray); // 动态数组内存释放

    return 0;
}