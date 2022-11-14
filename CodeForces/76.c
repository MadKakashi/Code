#include<stdio.h>

int main(){
    int num_of_children, minimum_candles;
    scanf("%d %d",&num_of_children,&minimum_candles);

    int array[num_of_children];
    for(int i = 0 ; i<num_of_children ; i++){
        scanf("%d",&array[i]);
    }

    for (int i = 0 ; i<num_of_children ; i++){
        int count;
        if (array[i]>minimum_candles){
            if (array[i]%minimum_candles==0){
                count = array[i]/minimum_candles;
            }
            else {
                count = (array[i]/minimum_candles)+1;
            }
        }
        else{
            count = 1;
        }
        array[i] = count;
    }
    int max = 0,ans;
    for (int i = 0 ; i<num_of_children ; i++){
        if (max<=array[i]){
            max = array[i];
            ans = i;
        }
    }

    printf("%d",ans+1);
    return 0;
}