#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUMBER 100

int initialize_number_generator(void);
void read_guesses(int secret_number);

int main(){
    char ch;
    int secret_number;
    
    printf("Welcome to the game\n");
    printf("GUESS THE SECRET NUMBER B/W 1 AND 100\n");

    do{
    secret_number = initialize_number_generator();
    printf("A new number has been chosen.\n");
    read_guesses(secret_number);
    printf("Play again? (Y/N):");
    scanf(" %c",&ch);
    } while((ch =='Y') || (ch=='y'));

    return 0;
}

int initialize_number_generator(void){
    srand(time(NULL));
    return rand()%100;
}
void read_guesses(int secret_number){
    int guesses=0, guessed_number;

    for(;;){
    
    
    printf("Enter guess:");
    scanf("%d",&guessed_number);

    if (secret_number>guessed_number){
        printf("Too low; try again.\n");
        guesses++;
    }

    else if (secret_number<guessed_number){
        printf("Too high; try again.\n");
        guesses++;
    }

    else {
        printf("You won in %d guessed\n\n",guesses);
        break;
    }
    }
}
