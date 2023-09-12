#include <stdio.h>

// 定义枚举类型 Product
enum Product {
    APPLE,
    BANANA,
    ORANGE,
    GRAPES,
    STRAWBERRY
};

// 定义枚举类型 Size
enum Size {
    SMALL,
    MEDIUM,
    LARGE
};

// 定义结构体 Order，表示订单信息
struct Order {
    enum Product product;
    enum Size size;
    int quantity;
};

// 函数：打印订单信息
void printOrder(struct Order order) {
    const char *productNames[] = {
        "苹果", "香蕉", "橙子", "葡萄", "草莓"
    };

    const char *sizeNames[] = {
        "小", "中", "大"
    };

    printf("订单详情:\n");
    printf("产品: %s\n", productNames[order.product]);
    printf("尺寸: %s\n", sizeNames[order.size]);
    printf("数量: %d\n", order.quantity);
}

int main() {
    struct Order order1 = {APPLE, MEDIUM, 5};
    struct Order order2 = {BANANA, LARGE, 3};
    struct Order order3 = {GRAPES, SMALL, 7};

    printf("第一个订单:\n");
    printOrder(order1);

    printf("\n第二个订单:\n");
    printOrder(order2);

    printf("\n第三个订单:\n");
    printOrder(order3);

    return 0;
}
