#include <stdio.h>

// ����ö������ Product
enum Product {
    APPLE,
    BANANA,
    ORANGE,
    GRAPES,
    STRAWBERRY
};

// ����ö������ Size
enum Size {
    SMALL,
    MEDIUM,
    LARGE
};

// ����ṹ�� Order����ʾ������Ϣ
struct Order {
    enum Product product;
    enum Size size;
    int quantity;
};

// ��������ӡ������Ϣ
void printOrder(struct Order order) {
    const char *productNames[] = {
        "ƻ��", "�㽶", "����", "����", "��ݮ"
    };

    const char *sizeNames[] = {
        "С", "��", "��"
    };

    printf("��������:\n");
    printf("��Ʒ: %s\n", productNames[order.product]);
    printf("�ߴ�: %s\n", sizeNames[order.size]);
    printf("����: %d\n", order.quantity);
}

int main() {
    struct Order order1 = {APPLE, MEDIUM, 5};
    struct Order order2 = {BANANA, LARGE, 3};
    struct Order order3 = {GRAPES, SMALL, 7};

    printf("��һ������:\n");
    printOrder(order1);

    printf("\n�ڶ�������:\n");
    printOrder(order2);

    printf("\n����������:\n");
    printOrder(order3);

    return 0;
}
