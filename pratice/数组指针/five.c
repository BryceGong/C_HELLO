#include <stdio.h>
#include <stdlib.h>
/**
 * 赋值后p1和p2是一个二级指针
 * *p1找到一级指针存储位置，然后*(*p1)直接取到值
 * https://www.cnblogs.com/mq0036/p/3382732.html
 */
int main()
{
    int a[4]={1,2,3,4};
    printf("a address is %d\n",&a);
    int (*p)[4] = &a;
    printf("a[5] == %d\n",**p +4);
    return 0;
}
