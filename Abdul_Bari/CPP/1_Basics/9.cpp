#include<iostream>

using namespace std;

int main(){
    int principal , rate , time;
    float interest;
    cout << "Enter principal , rate and time:";
    cin >> principal >> rate >> time;
    interest =(float) (principal*rate*time)/100;
    cout << "Interest is " <<interest;

    return 0;
}