#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int psum[n];
    psum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {   
        psum[i] = arr[i] + psum[i-1];
    }
    int index=1;
    int min = 0;
    int k1 = k,a=0;

    while(k1--){
        min += arr[a];
        a++;
    }

    for (int i = k ; i<=n-1 ; i++){
        if (psum[i]-psum[i-k]<min){
            min = (psum[i]-psum[i-k]); 
            index = i - k + 2;
        }
    }
    printf("%d",index);

    return 0;
}