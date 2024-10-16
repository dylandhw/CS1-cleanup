#include <stdio.h>
#include <stdlib.>

Struct node{
    int data;
    int node* next;
}

struct node* deleteFirstNode(struct node* head){
    if(head == NULL){
        return NULL;
    } else {
        struct node* newNode = head->next;
        free(head);
        return newNode;
    }
}