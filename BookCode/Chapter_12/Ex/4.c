#include<stdio.h>
#include<stdbool.h>

int contents[100];
int* top_ptr = &contents[0];

void make_empty(void){
    top_ptr = &contents[0];
}

bool is_empty(void){
    return top_ptr == &contents[0];
}

bool is_full(void){
    return top_ptr == &contents[100];
}

void push(int i){
    if (is_full) stack_overflow();
    else {
        *(top_ptr++) = i;
    }
}

int pop(void){
    if (is_empty) stack_underflow();
    else {
        return *(--top_ptr);
    }
}


int main(){
    
    return 0;
}