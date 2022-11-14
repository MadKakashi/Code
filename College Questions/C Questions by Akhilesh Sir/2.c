//w.a.p to accept marks of five subjects of a student form theuser and print the total,average and percentage(assume that full marks of each subject is 100)
#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    float total,average,percentage;
    //for simplicity I am naming subjects as a,b,c,d,e

    printf("Enter your marks in A:");
    scanf("%f", &a);

    printf("Enter your marks in B:");
    scanf("%f", &b);

    printf("Enter your marks in C:");
    scanf("%f", &c);

    printf("Enter your marks in D:");
    scanf("%f", &d);

    printf("Enter your marks in E:");
    scanf("%f", &e);

    total = a+b+c+d+e;
    average = (a+b+c+d+e)/5;
    percentage = ((a+b+c+d+e)/500)*100;

    printf("Total marks are:%f\n",total);
    printf("Average marks are:%f\n",average);
    printf("Total percentage is:%f",percentage);

    return 0;
}