#include<stdio.h>

int main(){
    int m,n;
    int a;
    int colindex;
    int rowsum = 0;
    int rowsumsq = 0;



    while (colindex<n){
        scanf("%d",&a);
        rowsum = rowsum+a;
        colindex += 1;
    }
    rowsumsq = rowsum*rowsum;
    return 0;
}