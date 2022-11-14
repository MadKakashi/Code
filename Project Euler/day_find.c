#include<stdio.h>

int leap_year(int n){
    if (n%400==0 || (n%4==0 && n%100!=0)) return 1;
    return 0;
}

int main(){
    int day,month,year;
    scanf("%d/%d/%d",&day,&month,&year);

    int number_of_days = 0;
    int base_year = 2001;
    int a = (year>2001)? 1 : -1;   

    if (year<2001) base_year--; 

    while(base_year!=year){
        number_of_days += 365;
        if (leap_year(base_year)) number_of_days++;
        base_year += a;
    }

    int pos_of_day_in_year = 0;
    int month_list[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for (int i = 0 ; i<(month-1) ; i++){
        pos_of_day_in_year += month_list[i];
    }

    pos_of_day_in_year += day;

    if (month>2 && leap_year(year)){
        pos_of_day_in_year++;
    }

    int number_of_day_in_that_year = 365 + leap_year(year);

    if (year<2001)  number_of_days += (number_of_day_in_that_year)- pos_of_day_in_year + 1;
    else    number_of_days += pos_of_day_in_year - 1;

    int dayf;
    if (year>=2001) dayf = number_of_days%7;
    else dayf = 7 - number_of_days%7;

    switch (dayf){ 
            case 1: printf("Tue"); break;
            case 2: printf("Wed"); break;
            case 3: printf("Thur"); break;
            case 4: printf("Fri"); break;
            case 5: printf("Sat"); break;
            case 6: printf("Sun"); break;
            case 0: case 7: printf("Mon"); break;     
        }
    return 0;
}