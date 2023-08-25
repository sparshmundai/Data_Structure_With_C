#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

int isEmpty(struct node * ptr){
    if(ptr==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node * push(struct node * top,int element){
    if(isEmpty(top)){
        printf("Stack overflow");
    }
    else{
        struct node *new_node;
        new_node=(struct node *)malloc(sizeof(struct node *));
        new_node->data=element;
        new_node->next=top;
        top=new_node;
        return top;
    }
}

struct node * pop(struct node * top){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
        struct node *temp;
        temp=top;
        top=top->next;
        temp->next=NULL;
        free(temp);
        return top;
    }
}

void printy(struct node * top){
    while(top!=NULL){
        printf("%d \t",top->data);
        top=top->next;
    }
    printf("\n");
}

int main(){
    struct node *top;
    top=(struct node *)malloc(sizeof(struct node));

    top->data=1;
    top->next=NULL;

    printy(top);
    if(isEmpty(top)){
        printf("The list is empty \n");
    }
    else{
        printf("The list is not empty \n");
    }

    top=push(top,2);
    printy(top);

    
    top=push(top,3);
    printy(top);

    
    top=pop(top);
    printy(top);

    return 0;
}