#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int sum = 0;
    int a;

    for (int i = 0 ; i<num ;i++){
        scanf("%d",&a);
        sum += a;
    }
    printf("%d",sum);
    return 0;
}