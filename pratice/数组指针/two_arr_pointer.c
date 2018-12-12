#include <stdio.h>


//https://www.cnblogs.com/wangweigang/p/9031451.html
int main()
{
    int a[3][4] = {{1,2,3,4},{4,5,6,8},{7,8,9,0}};
    int (*p)[4]; //定义一个指针指向一个二维数组类型  int[4]
    p = a;

    //很明显  a[1] == *(a+1) / *(p+1)

    printf("%d\n",*(*(a+1) + 3));

    printf("%s",p);

    *(*(a+2) + 1) = 100;
    printf("---%d\n",a[2][1]);


}