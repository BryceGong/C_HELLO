#include <stdio.h>
#include <stdlib.h>
/**
 */
int main()
{
    char a[6]={'A','B','C','D','E'};
    char (*p3)[3] = &a;
    char (*p4)[3] = a; //编译报错原因：左边的类型是指向整个数组的指针，右边的数据类型是指向单个字符的指针
    char (*p2)[5]=(char (*)[5])a;
    printf("=====================\n");
    printf("&a is %p\n",&a);
    printf("a is %p\n",a);
    printf("a[0] is %p\n",&a[0]);
    printf("a[1] is %p\n",&a[1]);
    printf("a[2] is %p\n",&a[2]);
    printf("a[3] is %p\n",&a[3]);
    printf("a[3]  is %c\n",a[3]);
    printf("=====================\n");
    printf("(&a + 1) is %p\n",(&a + 1));
    printf("(a +1) is %p\n",(a + 1));

    printf("=====================\n");
    printf("(p3) is %p\n",(p3));
    printf("p3 +1 is %p\n",p3 + 1);
    printf("*(p3 + 1) is %p\n",*(p3 + 1)); //p3此处可以理解为行指针，可以将其转为列指针，从而查出具体值
    printf("**(p3 +1) is %c\n",**(p3+1));
    printf("=====================\n");
    printf("(p4) is %p\n",(p4));
    printf("p4 +1 is %p\n",p4 + 1);
    printf("*(p4 + 1) is %p\n",*(p4 + 1));
    printf("**(p4 +1) is %c\n",**(p4+1));
    printf("=====================\n");
    printf("*(&a[3]) address is %c\n",*(&a[3]));
    printf("a[3] address is %p\n",a[3]);
    printf("a[3]  is %c\n",a[3]);

    return 0;
}
