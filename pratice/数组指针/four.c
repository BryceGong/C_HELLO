#include <stdio.h>
#include <stdlib.h>
/**
 * ��ֵ��p1��p2��һ������ָ��
 * *p1�ҵ�һ��ָ��洢λ�ã�Ȼ��*(*p1)ֱ��ȡ��ֵ
 * https://www.cnblogs.com/mq0036/p/3382732.html
 */
int main()
{
    char a[5]={'a','b','c','d'};
    char (*p1)[5]= &a; //������һ��ָ������Ϊchar [5] �ĵ�����ָ��
    char (*p2)[5]=(char (*)[5])a;

    printf("a=%d\n",a);
    printf("a=%c\n",a[0]);
    printf("p1=%c\n",**p1);
    printf("p2=%c\n",**p2);
    printf("p1+1=%c\n",**(p1+1));
    printf("p2+1=%c\n",**(p2+1));

    return 0;
}
