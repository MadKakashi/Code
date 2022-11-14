#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link; //pointer to a struct node
};
struct node* A;
A=NULL;


int main(){
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    (temp)->data=2;
    (temp)->link = NULL;
    A = temp;
    temp = (struct node*) malloc(sizeof(struct node));
    (temp)->data = 20;
    temp->link = NULL;
    struct node* temp1 = A;
    while(temp1->link!=NULL){
        temp1 = temp1->link;
    }
    // temp1->link = 
    return 0;
}