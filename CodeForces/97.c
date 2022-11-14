#include<stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int n,m;//n->students and m->puzzles
    scanf("%d%d",&n,&m);

    int array[m];

    for (int i = 0 ; i<m ; i++){
        scanf("%d",&array[i]);
    }

    qsort(array,m, sizeof(int), cmpfunc);

    int min= array[n-1]-array[0];
    for (int i = 0 ; i<=m-n ; i++){
       
        if(min>(array[i+n-1]-array[i])){
            min = array[i+n-1]-array[i];
        }
    }
    printf("%d",min);

    
    return 0;
}