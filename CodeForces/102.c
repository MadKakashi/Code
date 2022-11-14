#include<stdio.h>

int main(){
    long long num_50=0,num_25=0,i;
    long long n;

    scanf("%lld",&n);

    long long arr[n];
    for (long long i = 0 ; i<n ; i++){
        scanf("%lld",&arr[i]);
    }

    for (i = 0 ; i<n ; i++){
        if (arr[i]==25) num_25++;

        else if (arr[i]==50){
            if (num_25-1<0){
                printf("NO");
                return 0;
            }
            else {
                num_25--;
                num_50++;
            }
        }
        else if (arr[i]==100){
            if ((num_25<3 || (num_50<1 && num_25<1))){
                printf("NO");
                return 0;
            }
            else {
                if (num_25<3) num_25 -=3;
                else {
                    num_50--;
                    num_25--;
                }
            }
        }
    }
    if (i==n)
    printf("YES");
    return 0;
}
