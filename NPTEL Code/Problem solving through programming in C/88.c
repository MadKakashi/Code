#include<stdio.h>

int main() {
    int arr[20], i, n;
    int a;

    scanf("%d", &n); /* Accepts the number of elements in the array */

    for (i = 0; i< n; i++) 
    scanf("%d", &arr[i]); /*Accepts the elements of the array */

    int brr[n];
    for (int j = 0; j<n;j++){
     brr[j] = arr[j]; /*copy the elements of arr to brr*/
    }

    for ( a = 0 ;a<n;a++){ 
     arr[a]= brr[n-a-1]; /*reverses the arr array */
    }

    for (i = 0; i< n; i++) {
    printf("%d\n", arr[i]); // For printing the array elements 
    }

   return (0);
}
