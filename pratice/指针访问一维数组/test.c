#include <stdio.h>
#include <stdlib.h>
/**
    数组名不代表整个数组，只代表数组首元素地址，注意编译报错
 */
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9,0};
    int * p;
    p = &a[0];
    p=a     //把a元素的首元素地址赋给指针变量p  此处的a相当于&a[0]
    return 0;
}
