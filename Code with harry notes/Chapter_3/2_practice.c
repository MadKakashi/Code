#include <stdio.h>
#include <math.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Enter physics marks:\n");
    scanf("%d", &physics);

    printf("Enter chemistry marks:\n");
    scanf("%d", &chemistry);

    printf("Enter maths marks:\n");
    scanf("%d", &maths);

    total = (((physics+chemistry+maths)/300.0)*100.0);
    if ((total < 40) || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("Your total percentage is %f and you are failed", total);
    }
    else
    {printf("Your total percentage is %f and you are Passed",total);
    }
    return 0;
}