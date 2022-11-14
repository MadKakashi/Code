#include<iostream>
#include<string>

using namespace std;

int main(){
    const string hexdigits = "123456789ABCDEF";

    string result;
    int n;
    while(cin >> n){
        if (n-1 < hexdigits.size()){
            result += hexdigits[n-1];
        }
    }
    cout << result;
    return 0;
}