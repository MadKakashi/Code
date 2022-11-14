#include<stdio.h>

int main(){
    int a;
    int sum = 0;
    int i = 0;
    int num;
    scanf("%d",&num);

    while (i<num){
        scanf("%d",&a);
        sum += a;
        i = i+1;
    }
    printf("%d",sum);
    return 0;
}