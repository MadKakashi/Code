#include<iostream>
#include<cmath>

using namespace std;

int main(){
    //v^2 - u^2 = 2as
    int intial_speed,acc,displacement;
    cout << "Enter inital speed, acc and displacement:";
    cin >> intial_speed >> acc >> displacement ;
    float final_velocity = sqrt((2*acc*displacement)+(intial_speed*intial_speed));
    cout<<"The final velocity is " << final_velocity;
    return 0;
}