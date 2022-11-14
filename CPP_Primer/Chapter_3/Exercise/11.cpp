#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<int>scores(11,0);
    int marks;
    while(cin>>marks){
        if (marks>=0 && marks<=100){
            //auto index = scores.begin() + (marks/10);
            (*(scores.begin()+marks/10))++;     
        }
    }

    for (auto a : scores){
        cout << a << endl;
    }
    return 0;
}