#include<stdio.h>

int day_of_year(int month,int day, int year){
    int sum = 0;
    int array[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 1 ; i<month ; i++){
        sum += array[i];
    }
    sum += day;
    if (( year%400 || year%4 &&year%100!=0)&&(month>2)) sum++;
    return sum;
}

int main(){
    

    return 0;
}