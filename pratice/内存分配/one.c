#include <stdio.h>

#include <stdlib.h>

/**
 *  malloc�ڶ������䣬ֻ��ʹ��ָ�����
 *  2018-12-16
 */
int main() {
    //void *__cdecl malloc(size_t _Size);
    // malloc����ڴ��׵�ַ���أ�������Ҫ�ֶ�ǿת
    int* pInt = (int*)malloc(sizeof(int));//��̬����һ�����α���
    char* pChar =(char*)malloc(sizeof(char));//��̬����һ���ַ�
    char* pCharArr = (char*)malloc(sizeof(char)*10);//��̬�����ַ�����

    for (int i = 0; i < 10; ++i) {
        *(pCharArr+i)='a'+i;
    }

    for (int j = 0; j < 10; ++j) {
        printf("%c\n",*(pCharArr+j));
    }
    //�ͷ��ڴ�
    free(pInt);
    free(pChar);
    free(pCharArr);
   return 0;
}


