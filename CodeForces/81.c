#include<stdio.h>

int main(){
    int testcases,num_of_colors;
    scanf("%d",&testcases);

    for (int i  = 0 ; i<testcases ; i++){
        scanf("%d",&num_of_colors);
        int array[num_of_colors];
        int max = 0,ans;
        for (int j = 0 ; j<num_of_colors ; j++){
            scanf("%d",&array[j]);
            if (array[j]>max){
                max = array[j];
                ans  = j;
            }
        }
        printf("%d\n",ans+1);
    }
    return 0;
}