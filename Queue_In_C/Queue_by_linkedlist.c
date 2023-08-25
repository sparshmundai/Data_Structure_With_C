#include <stdlib.h>
#include <stdio.h>

struct queue{
    int data;
    struct queue *next;
};
struct queue *front,*rearr,*temp;

struct queue *enqueue(struct queue *rear,int element){
    struct queue *new=(struct queue *)malloc(sizeof(struct queue));
    if(new==NULL){
        printf("The Queue is full");
    }
    else{
        new->data=element;
        new->next=NULL;
        rear->next=new;
        rear=new;
        return rear;
    }
}

int IsEmpty(struct queue *front,struct queue *rear){
    if(front->next==NULL && rear->next==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void printy(struct queue * temp){
    while(temp!=NULL){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main(){
    struct queue *q;
    q=(struct queue *)malloc(sizeof(struct queue));
    q->data=1;
    q->next=NULL;
    front=rearr=temp=q;
    printy(rearr);

    rearr=enqueue(rearr,10);
    printy(rearr);

    if(IsEmpty(front,rearr)){
        printf("The Queue is empty");
    }
    else{
        printf("The Queue is not empty");
    }

    return 0;
}