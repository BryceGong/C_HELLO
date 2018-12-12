#include <stdio.h>
#include <stdlib.h>
/**
 * 赋值后p1和p2是一个二级指针
 * *p1找到一级指针存储位置，然后*(*p1)直接取到值
 * https://www.cnblogs.com/mq0036/p/3382732.html
 */
int main()
{
    char a[5]={'a','b','c','d'};
    char (*p1)[5]= &a; //定义了一个指向类型为char [5] 的的数组指针
    char (*p2)[5]=(char (*)[5])a;

    printf("a=%d\n",a);
    printf("a=%c\n",a[0]);
    printf("p1=%c\n",**p1);
    printf("p2=%c\n",**p2);
    printf("p1+1=%c\n",**(p1+1));
    printf("p2+1=%c\n",**(p2+1));

    return 0;
}
