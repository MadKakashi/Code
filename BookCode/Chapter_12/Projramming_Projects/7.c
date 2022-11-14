#include<stdio.h>
#define N 10

void max_min(int a[], int n,int *max , int *min){
    int i ;
    *max = *min = *a;
    int *last = a+9;
    for (int *p=a;p<=last;p++,a++){
        if (*a>*max){
            *max = *a;
        }
        else if (*a<*min){
            *min = *a;
        }
    }

}

int main(){
    int b[N], i ,big, small;

    for (int *p=b;p<=b+9;p++){
        scanf("%d",p);
    }
    
    max_min(b,N,&big,&small);

    printf("%d %d",big,small);
    return 0;
}