//linklist assignmemnt 02
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
// Implementing insertAtIndex.
struct Node * insertatIndex(struct Node * head,int data , int index){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    // pointer
    struct Node * p = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
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
    printf("UPDATE AFTER \n");
    head = insertatIndex(head,50,3);
    linktraversal(head);

    return 0;

}
