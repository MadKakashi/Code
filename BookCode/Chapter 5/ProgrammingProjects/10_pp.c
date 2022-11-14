/* A=90-100
B=80-89
C=70-79
D=60-69
F=0-59*/
#include<stdio.h>

int main(){
    int grades1,grades2,total_marks;
    printf("Enter the numerical grades:");
    scanf("%d",&total_marks);

    if(total_marks>100 || total_marks<0){
        printf("Error");

    }



   else{
    switch(total_marks/10){
        case 9: case 10: printf("A"); break;
        case 8 : printf("B"); break;
        case 7 : printf("C"); break;
        case 6 : printf("D"); break;
        case 5 : case 4: case 3: case 2: case 1: case 0: printf("F"); break;
        default : printf("Error"); break;
}}
    



    return 0;
}