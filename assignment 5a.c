//linklist assignment 1
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void linktraversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("Element is:- %d\n",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct Node * head;
    struct Node * first;
    struct Node * second;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = first;

    first->data = 30;
    first->next = second;

    second ->data = 40;
    second ->next = NULL;

    linktraversal(head);
    return 0;

}
