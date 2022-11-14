#include <stdio.h>
#include <cs50.c>

int main(){
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("x+y=%d",x+y);
    
    return 0;
}