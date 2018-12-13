#include <stdio.h>

/**
 * 指针变量的值是地址
 * 指针访问属于间接访问
 * 一个变量的地址称为该变量的指针
 * 如果有一个变量专门用于存放另一变量的地址，则称它为指针变量
 * 指针变量的值是地址
 * @return
 */
int main() {
   int i = 1;
   int* p = &i;
   int** p2 = &p;
   int*** p3 = &p2;
   printf("i address %p\n",&i);     //0
   printf("p value %p\n",p);        //0
   printf("&p address %p\n",&p);    //1
   printf("p2 value %p\n",p2);      //1
   printf("*p2 address %p\n",*p2);
   printf("**p2 value %d\n",**p2);

   int result = (***p3);
   printf("result value %d",result);
   return 0;
}


