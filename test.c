#include <stdio.h>

/**
 * ָ�������ֵ�ǵ�ַ
 * ָ��������ڼ�ӷ���
 * һ�������ĵ�ַ��Ϊ�ñ�����ָ��
 * �����һ������ר�����ڴ����һ�����ĵ�ַ�������Ϊָ�����
 * ָ�������ֵ�ǵ�ַ
 * @return
 */
int main() {
   int i = 1;
   int* p = &i;
   int** p2 = &p;
   int*** p3 = &p2;
   printf("i address %p\n",&i);     //0
   printf("p value %p\n",p);        //0
   printf("&p address %p\n",&p);    //1
   printf("p2 value %p\n",p2);      //1
   printf("*p2 address %p\n",*p2);
   printf("**p2 value %d\n",**p2);

   int result = (***p3);
   printf("result value %d",result);
   return 0;
}


