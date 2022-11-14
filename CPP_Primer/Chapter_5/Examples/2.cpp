#include<iostream>
#include<string>
#include<vector>

using namespace std;

void incrementAndPrint(){
    static int s_value = 1; //static duration via static keyword. This initializer is only executed once
    ++s_value;
    cout << s_value << endl;
} //s_value is not destroyed here but becomes inaccessible because it goes out



int main(){
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    return 0;
}