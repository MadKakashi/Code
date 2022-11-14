#include<stdio.h>

int main(){
    long long friends,bottles,mL_of_drink,limes,slices,gm_of_salt,ml_for_one_friend,gm_of_salt_for1person;
    scanf("%lld%lld%lld%lld%lld%lld%lld%lld",&friends,&bottles,&mL_of_drink,&limes,&slices,&gm_of_salt,&ml_for_one_friend,&gm_of_salt_for1person);
    long long a = (bottles*mL_of_drink)/(ml_for_one_friend);
    long long b = limes*slices;
    long c = (gm_of_salt)/(gm_of_salt_for1person);
    
    if (a<=b && a<=c){
        printf("%lld",a/friends);
    }
    else if (c<=a && c<=b){
        printf("%lld",c/friends);
    }
    else {
        printf("%lld",b/friends);
    }
    return 0;
}