#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
} typedef Node;

void create(Node *first, int arr[]){
    Node *temp , *last;
    first = (Node *) malloc(sizeof(Node));
    first -> data = arr[0];
    first -> next = NULL;
    last = first;
    int i = 1;

    while((temp = (Node *) malloc(sizeof(Node))) != NULL){
        temp -> data = arr[i];
        temp -> next = NULL;
        last -> next = temp;
        last = temp;
    }
}

void display(Node *pointer){
    while(pointer != NULL){
        printf("%d\n", pointer -> data);
        pointer = pointer -> next;
    }
}


int main(){
    Node *first = NULL;
    int arr[] = {2,5,3,4};
    create(first, arr);
    display(first);
    return 0;
}