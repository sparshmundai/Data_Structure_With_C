#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void printy(struct node *head){
    struct node *temp=head;

    do{
        printf("%d \t",temp->data);
        temp=temp->next;
    }while(temp->data != head->data);

}


int main(){
    struct node *head;
    struct node *second;

    head=(struct node*)malloc(sizeof(struct node)); 
    second=(struct node*)malloc(sizeof(struct node)); 
    
    head->data=2;
    head->next=second;

    second->data=4;
    second->next=head;

    printy(head);

    return 0;
}