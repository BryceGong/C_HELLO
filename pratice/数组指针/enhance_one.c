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
    printf("p3+1 address is %p\n",p3 + 1);//����ָ����һ��ָ�룬ÿ��+1��������ָ������ͳ��ȵ���һ��
    //char (*p4)[3] = a;
    return 0;
}
