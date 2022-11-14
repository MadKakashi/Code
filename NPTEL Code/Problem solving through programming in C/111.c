//use of the scope of variable in different functions
#include<stdio.h>

int a; //global variable
void myproc(){
    int a = 1; //the global variable is assigned 1
    while (a==2){
        int a = 3;
        printf("A = %d\n",a); //prints the nearest most declared value of a
        break;
    }
    printf("A = %d\n",a); //prints the value of a declared inside the function itself
}

int main(){
    int a = 1;
    myproc();
    printf("A= %d\n",a); //prints the value of a declared inside the main function
    
    return 0;
}

