#include<stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int n,count=0;
    scanf("%d",&n);

    int arr[n][2];

    for (int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<2 ; j++){
            scanf("%d",&arr[i][j]);
        }
        getchar();
    }
    int max = 0;
    for (int i = 0 ; i<n ; i++){
        count = 0;
        while(arr[i][0]==arr[i+1][0] && arr[i][1]==arr[i+1][1]){
            count++;
            i++;
        }
        if (max<count) max = count;
        
    }

    printf("%d",max+1);

    



    return 0;
}