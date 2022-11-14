#include <stdio.h>
#include <string.h>
struct updesh
{
    int rollno;
    char name[20];
    char grade;
};
void print_karo(struct updesh god)
{
    printf("%d %s", god.rollno, god.name);
}

int main()
{

    struct updesh chintu = {23, "chintuyadav", 'B'};
    print_karo(chintu);
    return 0;
}