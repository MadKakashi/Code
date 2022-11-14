#include<stdio.h>

#define ENGLISH

int main(){
    #if defined(ENGLISH)
    printf("Insert Disk 1");
    #elif FRENCH
    printf("Inseres Le Disque 1");
    #elif SPANISH
    printf("Enserte El Disco 1");
    #endif
    return 0;
}