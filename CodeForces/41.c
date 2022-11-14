#include<stdio.h>

int main(){
    int level,lilx,lily,temp,i;
    scanf("%d",&level);
    int number_mapping[1000] = {0};


    scanf("%d",&lilx);
    int array[lilx];
    for (int i = 0 ; i<lilx ; i++){
        scanf("%d",&array[i]);
        number_mapping[array[i]]++;
    }
    
    scanf("%d",&lily);
    int array2[lily];
    for (int x = 0 ; x<lily ; x++){
        scanf("%d",&array2[x]);
        number_mapping[array2[x]]++;
    }

    for ( i = 1 ; i<=level ; i++ ){
        if (number_mapping[i]>=1){
            continue;
        }
        else {break;}
    }
    if (i==level+1){
        printf("I become the guy.");
    }
    else {
        printf("Oh, my keyboard!");
    }
    

    return 0;
}