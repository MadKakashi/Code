#include<stdio.h>

int find_largest(int* p,int n){
    int max = *p;
    p++;
    int* max2 = p+9;
    for (;p<=max2;p++){
        if (*p>max) max=*p;
    }
    return max;
}

int main(){

   int a[10] = {1,234,554,666,887,887,44,322};
   printf("%d",find_largest(a,10));

    return 0;
}