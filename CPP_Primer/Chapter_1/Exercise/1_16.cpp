#include<iostream>

using namespace std;

int main(){
    int sum = 0;
    int value;
    for (;cin>>value;){
        sum += value;
    }
    cout << sum;
    return 0;
}