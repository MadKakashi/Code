//Find the largest of three numbers

#include<stdio.h>


int main(){
    int a,b,c; //declaring a,b and c as integers
    scanf("%d %d %d",&a,&b,&c); //storing the entered values into a,b and c
     if ((a>b) && (a>c)){
         printf("Largest is %d",a);//checking if a is greater than tother 2
     }
     else if (b>c){
         printf("Largest id %d",b); //as a is not the greatest we are checking whether b is the greatest 
     }
     else {
         printf("Largest is %d",c);
     }

    
    return 0;
}