#include <stdio.h>

/**
 * ����ָ��,��������һ��ָ�������
 * ��ʹ�ú���ָ��ǰ������Ժ���ָ����г�ʼ��ָ����ʵ�塣
 * @return
 */

int (*fun)(int a,int b);
int max(int a,int b)
{
    if(a == b)
    return 0;
    return(a > b ? a:b); //�Ƚ�������������С�������ؽϴ�ֵ
}
int main() {
    fun = &max;
    int i = (*fun)(2,3);
    printf("i is %d",i);
    return 0;
}


