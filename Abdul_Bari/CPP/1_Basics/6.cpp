#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c;
    cout << "Enter A, B and C:";
    cin >> a >> b >> c;
    int root_1 = ((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
    int root_2 = ((-b)-sqrt((b*b)-(4*a*c)))/(2*a);
    cout << "The roots of the quadratic equation is " << root_1 << " and " << root_2; 
    return 0;
}