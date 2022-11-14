#include<stdio.h>

int main(){
    int a;
    double b;
    char ch;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(ch));

    printf("Size of int: %lu",(unsigned long)sizeof(int));
    return 0;
}