#include <stdio.h>

struct students
{
    int rollno;
} s1 = {4};

void func(struct students *g1);


int main()
{
    struct students s2 = {62};
    func(&s2);
    printf("\n%d",s2.rollno);
    return 0;
}

void func(struct students *g1)
{
    printf("%d",g1->rollno);

    g1->rollno = 23;
}