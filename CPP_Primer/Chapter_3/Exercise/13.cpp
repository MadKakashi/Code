#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;

int main(){
    char ca[] ="this";
    char ca2[] = "tjw";

    char result[strlen(ca)+strlen(ca2)+2];

    strcpy(result,ca);
    strcat(result," ");
    strcat(result,ca2);
    

    for (auto c : result)
        cout << c;
    return 0;
}