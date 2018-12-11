#include <stdio.h>

//定义一个求两个整数最大值的函数，并定义一个函数指针指向这个函数，使用指针来调用验证结果
int findMax(int a,int b){
    return a<b?b:a;
}


//函数指针的使用场景
//返回类型为空，参数为空的函数指针
//理解：将函数作为参数  不通逻辑从大到小排序或者从小到大排序    策略模式
void showMessage(void (*p)(void)){
    printf("the content was entered by other functions!\n");
    p();
};

void func1(){
    printf("Everything will be OK!\n");
}

void func2(){
    printf("Smile at life Every day!\n");
}
int (*f_p)(int a,int b) = findMax;
int main() {
    showMessage(func2);
    int i = findMax(3,2);
    int result = f_p(2,3);
    printf("%d\n",i);
    printf("%d\n",result);
    return 0;
}


