#include<stdio.h>

int main(){
    int i;
    char command;
    printf("Enter an intger: ");
    scanf("%d",&i);
    getchar();
    printf("Enter a command:");
    command = getchar();
    printf("%c",command);
    return 0;
}