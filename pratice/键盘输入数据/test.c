#include <stdio.h>

/**
 *  ������������
 */
int main() {
   int a[3];
    for (int i = 0; i < 3 ; ++i) {
        printf("please enter 3 integer numbers:");
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 3 ; ++i) {
        printf("%d ,",*[a+i]);//i Ϊ����a�еĵ�i��Ԫ�صĵ�ַ��*[a+i] == a[i]
    }
   return 0;
}


