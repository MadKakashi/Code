#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);

   for (int i = 1 ; i<= num ; i++){
       if (i%2==1){
           printf("I hate");
       }
       else {
           printf("I love");
       }
       if (i<=num-1){
           printf(" that ");
       }
   }
   printf(" it");
    return 0;
}
//1 I hate 
//2 I hate that I love 
//3 I hate that I love that I love 

//few observations
//the last word is always "it"