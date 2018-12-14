#include <stdio.h>

/**
 *  键盘输入数据
 */
int main() {
   int a[3];
    for (int i = 0; i < 3 ; ++i) {
        printf("please enter 3 integer numbers:");
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 3 ; ++i) {
        printf("%d ,",*[a+i]);//i 为数组a中的第i个元素的地址，*[a+i] == a[i]
    }
   return 0;
}


