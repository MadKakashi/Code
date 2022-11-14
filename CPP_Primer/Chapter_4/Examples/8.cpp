#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string s1 = "this is a what string";
    auto start = s1.begin();
    auto final =  s1.end();
    unsigned aCnt = 0 , eCnt = 0 , iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    int cons = 0;
    while(start != final){
        switch(*start){
            case 'a' : 
            case 'e' : 
            case 'i' : 
            case 'o' : 
            case 'u' : ++uCnt; break;
            default : ++cons; break;
        }
        start++;
    }
    cout << uCnt << endl << cons << endl;
    cout << s1.size();

    return 0;
}