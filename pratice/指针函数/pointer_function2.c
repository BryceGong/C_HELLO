#include <stdio.h>
/*
* �������ּ�Ϊ��ַ
* ������ҲΪ��ַ
*
* ָ�뺯����
* ��һ�����������䷵��ֵΪһ��ָ��ʱ��ʵ���Ͼ��Ƿ���һ����ַ�����ú�������������Ҫָ����ַ�ı��ʽ��
* ��ʽ��
* ����˵���� * ������(����)
* ��Ȼ�ˣ����ڷ��ص���һ����ַ����������˵����һ�㶼��int
*/
int *pointer_function();         //����һ������ֵΪָ�����͵ĺ��������������Ǻ���������ֵΪָ�����Ͷ��ѡ�
int (*function_pointer) (int x); //����һ��ָ������ָ����������Խ���ַ��������ֱ�Ӹ�ֵ����
int print(int x);
int * pointer_function2();
int main() {
    int i = 10;
    int *p = &i;
    int res = *(pointer_function(p)); //ָ�뺯�����÷�ʽ---�����Ǻ���
    int *result = pointer_function2();
    printf("&i %p\n",&i);
    printf("p %p\n",p);
    printf("res %d\n",res);
    printf("result %p\n",result);
    //int *fun_p = (*print)(i);//����ָ����÷�ʽ
    return 0;
}

/**
 * ָ�뺯��
 * @param address
 * @return
 */
int * pointer_function(int * address){
    return address;
}

int * pointer_function2(){
    int a = 1;
    int* p_arg = &a;
    printf("p_arg %p\n",p_arg);
    return p_arg;
}


int print(int x){
    printf("Hello World\n");
}

