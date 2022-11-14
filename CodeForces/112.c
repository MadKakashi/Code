#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);

    long long arr[n][3];

    for (long long i = 0 ; i<n ; i++){
        for (long long j = 0 ; j<2 ; j++){
            scanf("%lld",&arr[i][j]);
        }
    }

    long long min = arr[0][0];
    long long max = arr[0][1];

    for (long long i = 0 ; i<n ; i++){
        if (min>arr[i][0]){
            min = arr[i][0];
        }
        if (max<arr[i][1]){
            max = arr[i][1];
        }
    }

    long long flag = 0;
    long long index;
    for (long long i = 0 ; i<n ; i++){
        if ((arr[i][0]<=min)&&(arr[i][1]>=max)){
            index = i + 1;
            flag = 1;
            break;
        }
    }

    if (flag==0){
        printf("-1");
    }
    else {
        printf("%lld",index);
    }
    return 0;
}