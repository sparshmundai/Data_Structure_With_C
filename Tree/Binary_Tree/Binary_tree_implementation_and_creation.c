#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node * left;
    int data;
    struct node * right;
};

struct node * create(){
    struct node * new;
    new=(struct node *)malloc(sizeof(struct node));

    int data;
    printf("    Enter the value(-1 For No Value):");
    scanf("%d",&data);

    if(data==-1){
        return NULL;
    }
    else{
        new->data=data;
        printf("The left node of %d node \n",data);
        new->left=create();
        printf("The right node of %d node \n",data);
        new->right=create();
        return new;
    }
}

int main(){
    struct node * root;
    root=NULL;
    root=create();

}