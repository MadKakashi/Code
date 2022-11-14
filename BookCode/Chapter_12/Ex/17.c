#include<stdio.h>
#define LEN 3
int sum_two_dimensional_array(const int a[3][LEN], int n){
    int sum = 0;
    const int *p = &a[0][0];

    for (;p<&a[n-1][LEN];p++){
        sum += *p;
    }
    printf("%d",sum);
}

int main(){
    int a[3][3]= {{1,2,3},
                    {2,3,4},
                    {2,5,6}};
    
    sum_two_dimensional_array(a,3);

    return 0;
}