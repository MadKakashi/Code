#include<stdio.h>

int main(){
    long long strength , dragons;
    scanf("%lld%lld",&strength,&dragons);

    long long int array[dragons][2];
    long long *p = &array[0][0];

    while(p<=(&array[dragons-1][1])){
        scanf("%lld",p);
        p++;
    }

    for (long long i = 0 ; i<dragons ; i++){
        for (long long j = i+1 ; j<dragons ; j++){
            if ((array[i][0])>(array[j][0])){
                printf ("i=%d j=%d -->%d %d\n",i,j,array[i][0],array[j][0]);

                long long temp = array[i][0];
                array[i][0] = array[j][0];
                array[j][0] = temp;

                long long temp1 = array[i][1];
                array[i][1] = array[j][1];
                array[j][1] = temp1;    
                
            }
 
            }
        }
    

    //     for (int i  =  0  ; i<dragons ; i++){
    //     for (int j= 0 ; j<2 ; j++){
    //         printf ("%d ",array[i][j]);
    //     }
    //     printf("\n");
    // }

    
    for (long long i = 0 ; i<dragons ; i++){
        if (strength<=array[i][0]){
            printf("NO");
            return 0;
        }
        else{
            strength += array[i][1];
        }
    }
    printf("YES");
    return 0;
}