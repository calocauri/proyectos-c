#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int value;
    struct Node *ptr;
} Node;

Node *list;

Node* create_Node(int val){
    Node *newNode = (Node*)malloc(sizeof(Node)); //reservamos memoria
    newNode->value = val;
    newNode->ptr = NULL;
    return newNode;
}

void try_add_Node(Node* n, Node* into)
{
    if(into->ptr != NULL)
    {
        try_add_Node(n, into->ptr);
    }
    else{
        into->ptr = n;
    }
}

int main()
{

    try_add_Node(create_Node(10), list);
    try_add_Node(create_Node(11), list);
    try_add_Node(create_Node(12), list);

    printf("Node0: %d\n", list->ptr->value);
    printf("Node1: %d\n", list->ptr->ptr->value);
    printf("Node2: %d\n", list->ptr->ptr->ptr->value);


    while(list->ptr != NULL)
    {
        Node* n = list->ptr;
        
    }
    return 0;
}