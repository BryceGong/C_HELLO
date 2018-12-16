#include <stdio.h>

#include <stdlib.h>

/**
 * 野指针和内存泄漏
 * 野指针：未有效初始化的指针或者数组越界访问
 *
 * 内存泄漏
 * 程序不断向系统申请内存而不释放导致程序退出
 */
int main() {
   while (1){
       malloc(100000);//害我重启电脑--fuck
   }
   return 0;
}


