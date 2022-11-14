#include<iostream>

using namespace std;

int main(){
    int refVal = 10; //declared a variable refVal having value 10
    int &refVal3 = refVal; // defined a referecne refVal13 which binds to refVal
    int &i = refVal3; //here reVal3 is itself a reference so the reference i will actuall bind itself to the variable the reference rVal3 binds
    int &y = i;
    y = 89;
    cout << i << " " << refVal3 << " " <<refVal << endl;
    

    
    return 0;
}