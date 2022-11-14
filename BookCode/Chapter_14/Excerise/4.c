#include<stdio.h>

#define AVG(x,y) (x+y)/2
#define AREA(x,y) (x)*(y)

int main(){
    printf("%d",AVG(1+1,2+2));
    printf(" %f",50/AREA(10.0,10));

    // (((x)+(y))/2)
    // ((x)*(y))
    return 0;
}