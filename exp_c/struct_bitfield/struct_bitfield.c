#include <stdio.h>

struct packed_struct {
   unsigned int f1 : 1;   // 1λ��λ��
   unsigned int f2 : 1;   // 1λ��λ��
   unsigned int f3 : 1;   // 1λ��λ��
   unsigned int f4 : 1;   // 1λ��λ��
   unsigned int type : 4; // 4λ��λ��
   unsigned int my_int : 9; // 9λ��λ��
};

int main() {
   struct packed_struct pack;

   pack.f1 = 1;
   pack.f2 = 0;
   pack.f3 = 1;
   pack.f4 = 0;
   pack.type = 7;
   pack.my_int = 255;

   printf("f1: %u\n", pack.f1);
   printf("f2: %u\n", pack.f2);
   printf("f3: %u\n", pack.f3);
   printf("f4: %u\n", pack.f4);
   printf("type: %u\n", pack.type);
   printf("my_int: %u\n", pack.my_int);
   printf("all size: %d\n", /*�ɼ�(int)ǿ��ת��sizeof���ͳ�ȥ���棬���߽���ӡ���͸Ļء�%zu��*/(int)sizeof(pack));
        // sizeof ����size_t���� ��ʽ˵������%zu

   return 0;
}