#include <stdio.h>

void testStatic();
int main() {

    int i = 1;
    while (i){
        i++;
        testStatic();
        if (i == 5){
            break;
        }
    }
    return 0;
}


/**
 * static 修饰只会初始化一次
 */
void testStatic(){
    static int number = 10;
    printf("address = %p\n",&number);
    printf("number = %d\n",number++);
}
