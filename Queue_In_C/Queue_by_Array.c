#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int front;
    int rear;
    int size;
    int *arr;
};

void enqueue(struct Queue *q,int element){
    if(q->rear==q->size-1){
        printf("Queue Overflow \n No space to enter a new element");
    }
    else{
        q->rear++;
        q->arr[q->rear]=element;
    }
}

int dequeue(struct Queue *q){
    if(q->front==q->rear){
        printf("Queue Underflow");
    }
    else{
        q->front++;
        return q->arr[q->front];
    }
}

int IsEmpyt(struct Queue *q){
    if(q->front==q->rear){
        return 1;
    }
    else{
        return 0;
    }
}

int IsFull(struct Queue *q){
    if(q->rear==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void printy(struct Queue *q){
    int counter=0;
    while(counter<q->rear+1){
        printf("%d \t",q->arr[counter]);
        counter++;
    }
    printf("\n");
}


int main(){
    struct Queue *q;
    q=(struct Queue *)malloc(sizeof(struct Queue));
    printf("Enter the size of an Array:");
    scanf("%d",&q->size);
    q->front=q->rear=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));

    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);

    printy(q);

    dequeue(q);

    printy(q);

    enqueue(q,6);
    enqueue(q,5);
    printy(q);

    return 0;
}
