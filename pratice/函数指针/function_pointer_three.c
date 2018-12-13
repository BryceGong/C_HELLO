#include <stdio.h>

/**
 * 函数指针,即本质是一个指针变量。
 * 在使用函数指针前，必须对函数指针进行初始化指向函数实体。
 * @return
 */

int (*fun)(int a,int b);
int max(int a,int b)
{
    if(a == b)
    return 0;
    return(a > b ? a:b); //比较两个整型数大小，并返回较大值
}
int main() {
    fun = &max;
    int i = (*fun)(2,3);
    printf("i is %d",i);
    return 0;
}


