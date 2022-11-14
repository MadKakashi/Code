#include <stdio.h>

int main(){
    int a, z = 0, x = 0, y = 0;
    while (a != -1)
    {
        scanf("%d", &a);
        if (x < a)
        {
            z = x;
            x = a;
            y++;
        }
    }

    if (z < x && y > 1)
        printf("%d", z);
    else
    {
        printf("0");
    }
    return 0;
}