#include <iostream>
#include <string>
using namespace std;
inline int get_max(int a, int b)
{
    if (a > b) return a;
    else return b;
}
int main()
{
    int a, b;
    cout << "두 수를 입력하시오: ";
    cin >> a >> b;
    cout << get_max(a, b) << endl;
    return 0;
}
