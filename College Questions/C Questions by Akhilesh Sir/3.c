//wap to calculate the area and perimeter of rectangle
#include <stdio.h>

int main()
{
    int length, breadth, perimeter, area;

    printf("Enter the lenght(in m):");
    scanf("%d", &length);

    printf("Enter the breadth(in m):");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Perimeter is %d square metre\n", perimeter);
    printf("Area is %d square metre", area);

    return 0;
}