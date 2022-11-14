#include<stdio.h>

int main(){
    int rowindex = 0; //index of row is zero
    int colsum = 0; //sum of column entries read so far
    int a; //stores the current number
    int colindex; //index of the current column
    int rowsum = 0; //sum of row entries read so far
    int rowsumsq = 0; //square of the sum of row entries
    int n=3; //stores the number of columns
    int m=2; //stores the number of rows

    while (rowindex<m){
        rowsum = 0;
        colindex = 0;
        while (colindex<n) //the loop will continue all columns of particular row is read
            {
            scanf("%d",&a); //read the current number
            rowsum = rowsum + a; //add that number to the rowsum
            colindex = colindex + 1; //increase the column index by 1 as one is read 
            }
        rowsumsq = rowsum*rowsum; //squaring the rowsum and storing it in rowsumsq
        colsum = colsum + rowsumsq;
        rowindex = rowindex + 1;
    }
    printf("%d",colsum);
    return 0;
}