#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 +1 ; // generates a random number between 1 to 100

    // printf("the number is %d",number);
    //keep running the loop untill the number is guesssed
    do{
        printf("Guess a number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please \n");
        }
        else if(guess<number)
        {printf("Higher number please\n");}
        else{
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);

    return 0;
}
