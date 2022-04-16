#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string str;
    cout << "문자열을 입력하시오: ";
    getline(cin, str);

    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
    }
    if (str.back() != '.')
    {
        str.push_back('.');
    }
    cout << str << endl;

    return 0;
}
