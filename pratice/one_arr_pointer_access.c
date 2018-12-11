#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    int *p1 = &arr[0];
    //p++;
    printf("%d\n",p[0]);
    printf("%d\n",p1[0]);
    printf("%d\n",arr[0]);

    //访问第一个元素
    int i = *(p+0);
    int res = *(arr+0);
    printf("%d\n",i);
    printf("%d\n",res);



}