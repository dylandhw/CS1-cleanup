#include <stdio.h>
#include <stdlib.>

Struct node{
    int data;
    int node* next;
}

struct nodea* copy(struct node* head){
    struct node* newList = NULL;
    struct node* end = NULL;
    while(list != NULL){
        struct node* newNode = malloc(sizeof(struct node));
        newNode->data = list->data;
        newNode->next = NULL;
        if(newList == NULL){
            newList = newNode;
            end = newNode;
        } else {
            end->next = newNode;
            end = newNode;
        }
    }
}