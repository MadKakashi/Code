//using do while loop to read int and output it untill -1 is seen
#include<stdio.h>

int main(){
    int a;
    do {
        scanf("%d",&a);
        printf("%d",a);
    } while (a!=-1);
    return 0;
}