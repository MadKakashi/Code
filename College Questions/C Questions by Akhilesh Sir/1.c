//w.a.p to calculate the simple interest according to given pricipal rate and time

#include <stdio.h>

int main()
{
    float principle, rate, time, simple_interest;

    printf("Enter principle:");
    scanf("%f", &principle);

    printf("Enter rate:");
    scanf("%f", &rate);

    printf("Enter time(in years):");
    scanf("%f", &time);

    simple_interest = principle * rate * time;

    printf("The simple interest is %f", simple_interest);

    return 0;
}