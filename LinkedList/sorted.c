#include <stdio.h>
#include <stdlib.>

Struct node{
    int data;
    int node* next;
}
int sorted(struct node* head){
    if(head == NULL || head->next == NULL){
        return 1;
    }
    int current = head->data;
    head = head->next;
    while(head != NULL){
        if(current > head->data){
            return 0;
        } else {
            current = head->data;
            head = head->next;
        }
    }
    return 1;
}