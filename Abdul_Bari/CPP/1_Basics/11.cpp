#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x1,x2,y1,y2;
    cout<<"Enter the coordinates of 1st point:";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of 2nd point:";
    cin>>x2>>y2;
    float distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout << "The distance between the points is "<< distance;
    return 0;
    
}

