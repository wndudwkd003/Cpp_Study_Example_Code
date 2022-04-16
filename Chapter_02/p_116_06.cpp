#include <iostream>
#include <string>
using namespace std;

int main()
{
    string print(7, '*');
    for (int i = 0; i<print.length(); i++)
    {
        print[i] = i + 1 + 48;
        cout << print << endl;
    }
    return 0;
}
