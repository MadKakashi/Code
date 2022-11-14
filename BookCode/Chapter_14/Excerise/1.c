#include<stdio.h>

#define CUBE(x) ((x)*(x)*(x))
#define REMAINDER(n) ((n%4))
#define PRODUCT(x,y) (((x)*(y)<100) ? 1 : 0 )

int main(){
    printf("%d\n",CUBE(6)); //does not work with characters data types
    printf("%d\n",REMAINDER(7));  //does not work with float and char
    printf("%d",PRODUCT(12,12)); //does not work with char
    


    return 0;
}