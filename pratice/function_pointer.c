#include <stdio.h>
    /*
    * 函数名字即为地址
    * 数组名也为地址
    *
    * 指针函数：
    * 当一个函数声明其返回值为一个指针时，实际上就是返回一个地址给调用函数，以用于需要指针或地址的表达式中
    * 格式：
    * 类型说明符 * 函数名(参数)
    * 当然了，由于返回的是一个地址，所以类型说明符一般都是int
    */
   int *pointer_function();         //定义一个返回值为指针类型的函数申明【本质是函数，返回值为指针类型而已】
   int (*function_pointer) (int x); //定义一个指向函数的指针变量【可以将地址（函数名直接赋值）】
   int print(int x);
int main() {
    int i = 10;
    int *p = &i;
    int result = *(pointer_function(p)); //指针函数调用方式---本质是函数
    printf("%d\n",result);
    int *fun_p = (*print)(i);//函数指针调用方式
    return 0;
}

/**
 * 指针函数
 * @param address
 * @return
 */
int * pointer_function(int * address){
    return address;
}

/**
 * 函数指针
 * @param x
 * @return
 */
int (*function_pointer) (int x) = print;

int print(int x){
    printf("Hello World\n");
}

