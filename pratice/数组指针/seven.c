#include <stdio.h>

/**
 *  加深二维数组与指针的理解
 *  2018-12-16
 */
int main() {
    //int a[10] = {0,1,2,3,4,5,6,7,8,9,0};//此处的a相当于&a[0]
    int arr[2][3] ={{1,2,3},{4,5,6}};
    //此处的arr相当于arr[0]相当于排长、行指针、指向一行、一位数组&a[0]
    printf("%d\n",*(*(arr+1)+2));

    //定义一个数组指针指向arr+1
    int (*p)[3] = arr + 1;//此时相当于p=&a为行指针  所以*p=a=&a[0]为列指针

    printf("%d", *(*p +2));//验证成功---好嗨噢
   return 0;
}


