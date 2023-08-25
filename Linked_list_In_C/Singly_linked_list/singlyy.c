#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node * InsertAtHead(struct node *head,int element){
            struct node *temp=(struct node*)malloc(sizeof(struct node));
            temp->data=element;
            temp->next=head;
            head=temp;
            return head;
}

struct node * InsertAtTail(struct node *head,int element){
            struct node *temp=(struct node*)malloc(sizeof(struct node));
            temp->data=element;
 
            struct node *curr=head;
            while(curr->next!=NULL){
                curr=curr->next;
            }

            temp->next=curr->next;
            curr->next=temp;

            return head;
}

struct node * InsertAtPosition(struct node *head,int element,int position){
            struct node *temp=(struct node*)malloc(sizeof(struct node));
            temp->data=element;

            if(position==1){
                return InsertAtHead(head,element);
            }


            struct node*curr=head;
            int counter=1;
            while(counter<position-1){
                curr=curr->next;
                counter++;
            }

            temp->next=curr->next;
            curr->next=temp;


            return head;

}


struct node *deletefirst(struct node *head){
            struct node * curr=head;
            head=head->next;
            curr->next=NULL;
            free(curr);

            return head;
} 

struct node *deletelast(struct node *head){
            struct node * curr=head;
            struct node * prev=NULL;
            
            while(curr->next != NULL){
                prev=curr;
                curr=curr->next;
            }

            prev->next=curr->next;
            curr->next=NULL;
            free(curr);

            return head;
}


struct node *deleteAtPos(struct node *head,int position){
            struct node * curr=head;
            struct node * prev=NULL;
            int counter=1;
            while(counter<position){
                prev=curr;
                curr=curr->next;
                counter++;
            }

            prev->next=curr->next;
            curr->next=NULL;
            free(curr);

            return head;
}

void printhhh(struct node *temp){

    while(temp != NULL){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    printf("\n"); 
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;


    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    head->data=2;
    head->next=second;

    second->data=3;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    
    printhhh(head);

    head=InsertAtHead(head,1);
    printhhh(head);


    head=InsertAtPosition(head,31,1);
    printhhh(head);

    head=deletefirst(head);
    printhhh(head);

    head=deletelast(head);
    printhhh(head);

    head=deleteAtPos(head,2);
    printhhh(head);


    // head=InsertAtTail(head,4);
    // printhhh(head);
    return 0;
}
