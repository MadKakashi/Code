#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    // int n = 50;
    // int sum = 0;
    // while(n!=100){
    //     sum += n;
    //     n++;
    // }
    // cout << sum;

    // int i = 10;
    // while(i>=0){
    //     cout << i << endl;
    //     i--;
    // }

    int a , b;
    cin >> a >> b;
    while(b>=a){
        cout << a << endl;
        a++;
    }
    return 0;
}