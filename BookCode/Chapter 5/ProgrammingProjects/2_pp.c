#include <stdio.h>

int main()
{
    int hour, minutes;
    printf("Enter a 24-hour time:");
    scanf("%d:%d", &hour, &minutes);

    if (hour == 00)

    {
        printf("Equivalent 12 hour time:%d:%.2d AM", 12 + hour, minutes);
    }

      if (hour >= 1 && hour <= 11 )

         printf("Equivalent 12 hour time:%d:%dAM", hour, minutes);

      if (hour >= 13 && hour <= 23)

          printf("Equivalent 12 hour time:%d:%dPM", hour - 12, minutes);
    if (hour==12){
        printf("Equivalent 12 hour time:%d:%dPM",hour,minutes);
    }
    return 0;
}
