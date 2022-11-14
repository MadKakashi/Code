#include<stdio.h>

typedef unsigned long u_long;

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}
 //becuase of space between unsigned and long

 


GENERIC_MAX(u_long)

int main(){
    
    printf("%d",u_long_max(2324421,311313));



    return 0;
}




