#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    while(n--){
        int angle;
        scanf("%d",&angle);
        int sides = 3;
        while(1){
            int internal_angle = ((sides-2)*(180))/sides;
            if (internal_angle==angle && ((sides-2)*180)%sides==0){
                printf("YES\n");
                break;
            }
            if (internal_angle>angle){
                printf("NO\n");
                break;
            }
            sides++;
        }
    }
    return 0;
}