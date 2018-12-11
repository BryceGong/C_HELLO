#include <stdio.h>

void testStatic();
int main() {

    int i = 1;
    while (i){
        testStatic();
        i++;
        testStatic();
        if (i == 10){
            break;
        }
    }
    return 0;
}

void testStatic(){
    static int number = 10;
    printf("address = %p\n",&number);
    printf("number = %d\n",number++);
}
