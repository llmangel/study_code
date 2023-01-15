#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    /* data */
    int data;
    struct Node* next;
    
}Node;

Node* createLIst(){
    Node* headnode = (Node*)malloc(sizeof(Node));
    // 变量使用前必须初始化
    headnode->data = 1;
    headnode->next = NULL;
    return headnode;
}

Node* createnode(int data){
    Node* newnode = (Node*)malloc(sizeof(Node));
}
int main(int argc, char const *argv[])
{
    /* code */

    // system("pause");
    Node* list = createLIst();

    return 0;
}
