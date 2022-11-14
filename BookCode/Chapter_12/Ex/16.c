#include<stdio.h>

void find_largest(int *p , int n){
    int max = 0 ;
    int *a = p; 
    while (p<(a+24)){
        if (max<*p){
            max = *p;
        }
        p++;
    }
    printf("%d ",max);
}

int main(){
    int temp[7][24]={ {10, 11, 12, 13,11,12,99},
                    {14, 15, 16, 117,11,1,11,}
    };
    for (int i = 0 ; i<7 ; i++){
    find_largest(temp[i],24);
    }

    // for (int i = 0 ; i<7 ; i++){
    //     for (int j = 0 ; j<24 ; j++){
    //         printf("%d ",temp[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}