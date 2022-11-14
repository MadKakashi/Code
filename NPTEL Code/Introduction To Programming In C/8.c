#include <stdio.h>

int main()
{
  int year = 3;
  if (((year % 4) == 0) && ((!(year % 100 == 0)) || (year % 400 == 0)))
  {
    printf("Year %d is a leap year", year);
  }

  return 0;
}