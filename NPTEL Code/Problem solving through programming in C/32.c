#include<stdio.h>
#include <ctype.h>

int main(){
    char choice;
    switch (choice = (toupper(getchar()))){
        case 'R' : printf ("Red");
        break;
        case 'G' : printf("Green");
        break;
        case 'B' : printf("Blue");
        break;
        default  : printf("Invalid Choice");
    }
    
    return 0;
}