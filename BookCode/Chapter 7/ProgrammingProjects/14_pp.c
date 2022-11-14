#include <stdio.h>
#include <math.h>

int main()
{
    double x, y = 1.0, y_old,frac,avg;
    scanf("%lf", &x);

    do
    {
        frac = (x / y);
        avg = ((y + frac) / 2);
        y_old = y;
        y = avg;
        printf("%f %f %f\n", x, y, frac, avg);
    } while (fabs(y_old - y) >= (.0001) * (y));
    return 0;
}
