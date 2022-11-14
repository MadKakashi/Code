#include<stdio.h>

int main(){
    int itemnumber,month,day,year;
    float unitprice;

    printf("Enter item number:");
    scanf("%d",&itemnumber);

    printf("Enter unit price:");
    scanf("%f",&unitprice);

    printf("Enter purchase date(mm/dd/yyyy");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\tUnit \tPurchase\n\tPrice\tDate\n");
    printf("%d\t$%.2f\t%.2d/%.2d/%.4d",itemnumber,unitprice,month,day,year); 
    return 0;
}
