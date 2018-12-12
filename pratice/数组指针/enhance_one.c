#include <stdio.h>
#include <stdlib.h>
/**
 */
int main()
{
    char a[5]={'A','B','C','D'};
    char (*p3)[4] = &a;
    //char (*p4)[5] = a;
    printf("&a is %p\n",&a);
    printf("a+1 address is %p\n", a + 1);
    printf("p3+1 address is %p\n",p3 + 1);//数组指针是一个指针，每次+1都返回它指向的类型长度的下一个
    //char (*p4)[3] = a;
    return 0;
}
