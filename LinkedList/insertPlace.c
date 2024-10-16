#include <stdio.h>
#include <stdlib.>

Struct node{
    int data;
    int node* next;
}

void insertPlace(struct node* head, int val, int place){
    struct node* temp = malloc(sizeof(struct node));
    head->data = val;
    int count = 1;
    while(head->next != NULL && count < place - 1){
       head = head->next;
       count++; 
    }
    temp->next = head->next;
    head->next = temp;
}