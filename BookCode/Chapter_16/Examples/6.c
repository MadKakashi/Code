#include <stdio.h>

typedef union
{
    int i;
    double d;
} Number;

int main()
{
    Number number_array[1000];
    // this array can store either integer or double as their elements
    // each element of number_array is a number union
    number_array[0].i = 5;
    number_array[0].d = 4.0;
    printf("%f", number_array[0].d);

    return 0;
}