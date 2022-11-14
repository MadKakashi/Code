#include<stdio.h>

struct date{
    int month;
    int day;
    int year;
};

int day_of_year(struct date d){
    int res  = 0 , i;
    const int days_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (d.month>1 &&((d.year%4==0)&&(d.year%100!=0)||(d.year%400==0))){
        res++;
    }
    for (int i = 0 ; i<d.month ; i++){
        res += days_month[i];
    }
    return res+d.day;
}

int compare_dates (struct date d1, struct date d2){
    // if (d1.year>d2.year){
    //     return -1;
    // }

    // else if (d1.year==d2.year && d1.month > d2.month){
    //     return -1;
    // }

    // else if (d1.year==d2.year && d1.month==d2.month && d1.day>d2.day){
    //     return -1;
    // }

    // else if(d1.year==d2.year && d1.month==d2.month && d1.day==d2.day){
    //     return 0;
    // }

    // else {
    //     return 1;
    // }

    int d1day = day_of_year(d1);
    int d2day = day_of_year(d2);
    if (d1day>d2day){
        return -1;
    }
    else if (d1day<d2day) return 1;
    else return 0;
}
int main(){
    printf("f");
    return 0;
}