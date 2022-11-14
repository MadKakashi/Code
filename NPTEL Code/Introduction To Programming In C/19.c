#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    while (a != -1)
    {
        scanf("%d", &a); // the number will be inputted untill "-1" is encounted, when "-1" is encountered the control exits from the loop
    }
    return 0;
}