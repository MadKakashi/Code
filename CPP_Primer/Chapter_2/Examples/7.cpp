#include<iostream>

using namespace std;

int main(){
    int i = 1024, i2 = 2048;
    //two integers i and i2 are defined having values 1024 and 2048 respectively
    int &r = i, r2 = i2;
    //reference r is declared and it binds to i and int r2 is defined which is equal to i2
    int i3 = 1024 , &ri = i3;
    //integer i3 is defined with 1024 values; reference ri is defined which binds to i3

    int &r3= i3 , &r4 = i2;
    //reference r3 binds to i3 and reference r4 binds to i2
    return 0;
}