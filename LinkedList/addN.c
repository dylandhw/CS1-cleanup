#include <stdio.h>
#include <stdlib.>

Struct node{
    int data;
    int node* next;
}

void addN(struct node* head, int n){
    while(head != NULL){ /*Loops through every node*/
        head->data += n; /*Modifies current node's data*/
        head = head->next; /*Moves head up (traverses)*/
    }
}