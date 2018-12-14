#include <stdio.h>

/**
 *
 * 以下赋值方式p/p1/a等价
 * p+2 == &a[2]
 * 实际上在编译时，a[i]就是按*(a+i)来处理的
 * 注意 &a 等价于一个数组指针 int (*p)[3]
 */
int main() {
   int a[3] = {1,2,3};
   int *p = &a[0];
   int* p1 = a;             //此处a相当于&a[0]
   printf("a %d\n",a);      //a  2293296
   printf("&a %d\n",&a+1);  //&a 2293308
   printf("*(p1+1) %d\n",*(p1+1)); //2
   printf("*(a+1) %d\n",*(a+1));   //2
   printf("*(p+1) %d\n",*(p+1));   //2
   printf("p[1] %d\n",p[1]);   //2
   printf("p1[1] %d\n",p1[1]);   //2

   //此处p4指向了整个数组a的地址，所以 *p4 == a，而a代表的是a[0]的地址，所以*p4也是a[0]的地址
   int (*p4)[3] =&a;

   printf("*(*p4+1) %d\n",*(*p4+1));   //2
   //int(*)[3] p5 =&a;
   return 0;
}


