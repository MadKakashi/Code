#include<stdio.h>
void display(); //function prototype
int main(){
    int a;
    printf("This is intializing display\n");
    display(); // Function call
    printf("Display function finished its work\n");
    return 0;
}
// Function definition
void display(){
    printf("This is display\n");
}