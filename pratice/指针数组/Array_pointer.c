#include <stdio.h>
#include <stdlib.h>
/**
 *
    https://www.cnblogs.com/mq0036/p/3382732.html
    指针数组：
    指针数组中的每一个元素均为指针

    int *p1[10];

 */
int main()
{
    /*int i;
    char *pch[6] = {"G","O","O","D","A","D"};
    for(i=0;i<6;i++){
        printf("%s, ",pch[i]);
    }
    printf("\n");
    for(i=5; i>=0; i--){
        printf("%s\n",pch[i]);
    }*/

    int i;
    char CharArray[5]={'h','e','l','l','o'};
    for(i=0;i<5;i++){
        printf("%c, \n",CharArray[i]);
    }
    printf("==================\n");

    char *CharArray2[5]={'h','e','l','l','o'};
    for(i=0;i<5;i++){
        printf("%c, ",CharArray2[i]);
    }
    system("pause");

    char a[5]={'A','B','C','D'};
    char (*p3)[5] = &a;//该语句是定义一个数组指针，指向返回值为char，含5个元素的一维数组。

    char (*p4)[5] = a;//p3 这个定义的“=”号两边的数据类型完全一致，而p4 这个定义的“=”号两边的数据类型就不一致了。左边的类型是指向整个数组的指针，右边的数据类型是指向单个字符的指针。
    return 0;
}
