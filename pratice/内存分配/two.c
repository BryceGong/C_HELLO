#include <stdio.h>

#include <stdlib.h>

/**
 * ����
 */

typedef int ElementType;         //   ������������
typedef struct Node {
    ElementType  Element;       //    �����򣬴������
    Node* Next;                 //    ָ����һ������ڵ�
};
int main() {
    struct Node* head = NULL;
    struct Node *p1,*p2;
    p1=p2=(struct Node*)malloc(sizeof(struct node));		//�½ڵ�

    return 0;
}


