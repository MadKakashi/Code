#include<stdio.h>
int main() {
    int array[30], num, i, pos;  
    scanf("%d", &num); /*Accepts the size of array from test case data */

    for (i = 0; i<num; i++) {
    scanf("%d", &array[i]);  /* Read the array elements from the test case data */
    }

    scanf("%d", &pos); /* Accepts the Position of the element to be deleted */

    num -= 1;    
    int array2[num-2];

    for (int i = 0 ; i<pos-1 ; i++){
        array2[i] = array[i];
    }

    for (int i = pos-1 ; i<num-1 ; i++){
        array2[i] = array[pos+1];
    }

    for (int i = 0 ; i < num-1 ; i++){
        array[i] = array2[i];
    }

    /* Printing the array after deletion */
    for (i = 0; i<num; i++)
    printf("%d\n", array[i]);

    return (0);
}
