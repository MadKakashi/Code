#include<iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter n";
    cin >> num;
    int sum = ((num)*(num+1))/2;
    cout << "The sum is " << sum;
    return 0;
}