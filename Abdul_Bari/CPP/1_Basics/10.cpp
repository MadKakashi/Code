#include<iostream>

using namespace std;

int main(){
    int radius , height;
    cout << "Enter the radius and height:";
    cin >> radius >> height;
    float vol = 3.14*radius*radius*height;
    cout << "Volume of the cylinder is " << vol;
    return 0;
}