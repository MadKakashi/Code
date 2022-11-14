#include<stdio.h>

struct node{
    int value;
    struct node* next;
};
struct node* first = NULL; //setting first to NULL indicates that the list is empty


int main(){
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->value = 10;
    
    

    return 0;
}