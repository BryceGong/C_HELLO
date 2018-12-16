#include <stdio.h>

#include <stdlib.h>

/**
 * 链表
 */

typedef int ElementType;         //   定义数据类型
typedef struct Node {
    ElementType  Element;       //    数据域，存放数据
    Node* Next;                 //    指向下一个链表节点
};
int main() {
    struct Node* head = NULL;
    struct Node *p1,*p2;
    p1=p2=(struct Node*)malloc(sizeof(struct node));		//新节点

    return 0;
}


