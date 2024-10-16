#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyNode{
    int data;
    struct SinglyNode* next;
} SinglyNode;

typedef struct DoublyNode {
    int data;
    struct DoublyNode* next;
    struct DoublyNode* prev;
} DoublyNode;

typedef struct CircularNode {
    int data;
    struct CircularNode* next;
} CircularNode;


void reverseSingly(SinglyNode** head){
    SinglyNode* prev = NULL;
    SinglyNode* current = NULL;
    SinglyNode* next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void reverseDoubly(DoublyNode** head){
    DoublyNode* temp = NULL;
    DoublyNode* current = *head;

    while(current != NULL){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->next;
    }
    if(temp != head){
        *head = temp->prev;
    }
}

void reverseCircular(CircularNode** head){
    CircularNode* prev = NULL;
    CircularNode* current = *head;
    CircularNode* tail = *head;

    while(tail->next != *head){
        tail = tail->next;
    }
    do{
        CircularNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != *head);

    tail->next = prev;
    *head = prev;
}