#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    int n,i=3;
    scanf("%d",&n);
    while (i<sqrt(n)){
        if (n%i==0){
            printf("%d is not a prime",n);
            exit (0);
        }
        i = i+1;


    }
    printf("%d is a prime ",n);
    return 0;
}