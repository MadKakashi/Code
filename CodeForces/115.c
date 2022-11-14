#include<stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    int counter = 0;
    for (int i = 0 ; i<n ; i++){
        int t = sum - arr[i];
        if (t%2==0) counter++;
    }
    printf("%d",counter);
    return 0;
}