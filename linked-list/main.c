#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;


Node* create_Node(int val){
    Node *newNode = (Node*)malloc(sizeof(Node)); //reservamos memoria
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}

Node *list = NULL;

void try_add_Node(Node* n, Node* into)
{
    if(list == NULL)
    {
        list = n;
        return;
    }
    if(into->next == NULL)
    {
        into->next = n;
    }
    else
    {
        try_add_Node(n, into->next);
    }
}

void free_list(Node* li)
{
    while(li){
        Node* temp = li;
        li = li->next;
        free(temp);
    }
}

int main()
{
    printf("start\n");
     //nodo centinela
    
    try_add_Node(create_Node(10), list);
    try_add_Node(create_Node(11), list);
    try_add_Node(create_Node(12), list);
    
    printf("Node0: %d\n", list->value);
    printf("Node1: %d\n", list->next->value);
    printf("Node2: %d\n", list->next->next->value);
    
    free_list(list);
    printf("end\n");
    return 0;
}