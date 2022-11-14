#include <stdio.h>

struct part
{
    int roll_number;
    char name[10];
} updesh = {12, "chintu y"},
  chinky = {13, "priya"};

void print_kare(struct part updesh)
{
    printf("%d", updesh.roll_number);
    printf("%s", updesh.name);
}


int main()
{

    print_kare(updesh);
    return 0;
}