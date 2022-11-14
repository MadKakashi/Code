#include<stdio.h>

int main(){
    int a ,b,c;

    // printf("Enter a date(mm/dd/yyyy:");
    // scanf("%d/%d/%d",&a,&b,&c);

    char *months[] = {"January", "Feburary","March",
                    "April","May","June","July",
                    "August","September","October",
                    "November","December"};
   
    //printf("You entered the date %s %d, %d",*(months+a-1),b,c);
    printf("%d %d\n",months[0],months[1]);
    printf("%d %d\n",*months,*(months+1));
    printf("%d",(&months[0]));
    return 0;
}