#include<iostream>
#include<string>
#include<vector>
#include<cstring>

using namespace std;

int main(){
    const char ca1[] = "this";
    const char ca2[] = "that";
    char largest[100] = {};

    strcpy(largest,ca1);
    strcat(largest," ");
    strcat(largest,ca2);

    for (auto a  :largest){
        cout << a ;
    }
    return 0;
}