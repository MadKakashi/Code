#include<stdio.h>

int main(){
    int i;
    char command;
    printf("Enter an intger: ");
    scanf("%d",&i);
    printf("Enter a command:");
    command = getchar();
    return 0;
}