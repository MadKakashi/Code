#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    char a = CHAR_MAX;
    cout << (int)a << " " <<(int) ++a << endl;

    int b = INT_MAX;
    cout << b << " " << ++b << endl;

    long long c = __LONG_LONG_MAX__;
    cout << c << " " << ++c << endl;
    return 0;
}