#include <stdio.h>

#include <stdlib.h>

/**
 *  malloc在堆区分配，只能使用指针访问
 *  2018-12-16
 */
int main() {
    //void *__cdecl malloc(size_t _Size);
    // malloc会把内存首地址返回，我们需要手动强转
    int* pInt = (int*)malloc(sizeof(int));//动态分配一个整形变量
    char* pChar =(char*)malloc(sizeof(char));//动态分配一个字符
    char* pCharArr = (char*)malloc(sizeof(char)*10);//动态分配字符数组

    for (int i = 0; i < 10; ++i) {
        *(pCharArr+i)='a'+i;
    }

    for (int j = 0; j < 10; ++j) {
        printf("%c\n",*(pCharArr+j));
    }
    //释放内存
    free(pInt);
    free(pChar);
    free(pCharArr);
   return 0;
}


