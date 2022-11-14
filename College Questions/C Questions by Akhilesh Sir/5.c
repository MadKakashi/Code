//wap to calculate the area and perimter of square
#include <stdio.h>

int main()
{
    int side, area, perimeter;

    printf("Enter side:");
    scanf("%d", &side);

    area = side * side;
    perimeter = 4 * side;

    printf("Perimeter is %d\n", perimeter);
    printf("Area is %d", area);

    return 0;
}