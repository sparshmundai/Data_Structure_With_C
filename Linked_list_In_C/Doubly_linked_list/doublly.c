#include <stdio.h>
#include <stdlib.h>


struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *insertAthead(struct node *head,int data){
        struct node*temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;
        return head;
}

struct node *insertAtlast(struct node *head,int data){
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->prev=NULL;
        temp->next=NULL;

        struct node *curr=head;

        while(curr->next != NULL){
            curr=curr->next;
        }

        temp->next=curr->next;
        temp->prev=curr;
        curr->next=temp;

        return head;
}

struct node *insertAtPosition(struct node *head,int data,int position){
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;

        struct node *curr=head;
        int counter=1;
        while(counter<position-1){
            curr=curr->next;
            counter++;
        }

        temp->next=curr->next;
        temp->prev=curr;
        curr->next=temp;


        return head;
}

struct node * deletefirst(struct node *head){
        struct node*temp=head;
        head=head->next;
        temp->next=NULL;
        temp->prev=NULL;
        free(temp);

        return head;
}

struct node * deletelast(struct node *head){
        struct node*curr=head;
        struct node*prevv=NULL;
        
        while(curr->next != NULL){
            prevv=curr;
            curr=curr->next;
        }

        prevv->next=curr->next;
        prevv->next=curr;
        curr->prev=prevv;
        // curr->next=NULL;
        // curr->prev=NULL;
        free(curr);

        return head;
}

void printy(struct node *temp){
    while(temp!=NULL){
        printf("%d \t", temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main(){
    struct node * head;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=12;
    head->next=NULL;
    head->prev=NULL;

    printy(head);

    head=insertAthead(head,23);
    printy(head);

    // head=insertAtlast(head,30);
    head=insertAtPosition(head,3,2);

    printy(head);

    // head=deletefirst(head);
    // printy(head);

    // head=deletelast(head);
    // printy(head);

    return 0;
}