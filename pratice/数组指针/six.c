#include <stdio.h>
#include <stdlib.h>
/**
 *
 * ��ֵ��p1��p2��һ������ָ��
 * *p1�ҵ�һ��ָ��洢λ�ã�Ȼ��*(*p1)ֱ��ȡ��ֵ
 * https://www.cnblogs.com/mq0036/p/3382732.html
 */
int main()
{
    int a[4]={1,2,3,4};
    int (*p)[4] = &a;

    printf("(&a) %d\n",&a);
    printf("p %p\n",p);

    printf("&a[1] %p\n",&a[1]);
    printf("(&a + 1) %d\n",&a+1);

    printf("a[5] == %d\n",**p +4);
    return 0;
}
