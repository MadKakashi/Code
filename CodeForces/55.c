#include<stdio.h>

int main(){
    long long num,sum=0;
    scanf("%lld ",&num);
    char array[num][13];
    char ch;

    for (long long i = 0 ; i<num ; i++){
        for (long long j = 0 ; j<13 ; j++){
            scanf("%c",&array[i][j]);
            if (array[i][j]=='\n'){
                break;
            }
        }
    }
    for(long long i = 0 ; i<num ; i++){
        ch = array[i][0];
        if (array[i][0]=='T'){
            sum += 4;
        }
        else if (array[i][0]=='C'){
            sum += 6;
        }
        else if (array[i][0]=='O'){
            sum += 8;
        }
        else if (array[i][0]=='D'){
            sum += 12;
        }
        else {
            sum += 20;
        }

    }
    printf("%lld",sum);
    return 0;
}