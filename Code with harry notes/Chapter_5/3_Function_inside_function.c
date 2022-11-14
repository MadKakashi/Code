#include<stdio.h>
void f1();
void f2();
void f3();
int main(){
    f1();
    
    return 0;
}
void f1(){
    printf("Good Morning Updesh\n");
    f2();
    f3();
    
}
void f2(){
    printf("Good Evening Updesh\n");
    f3();
}
void f3(){
    printf("Good Night Updesh\n");
}