#include <iostream>
#include <string>
using namespace std;
int absolute(int i)
{
    if (i >= 0) return i;
    else return -i;
}
double absolute(double i)
{
    if (i >= 0) return i;
    else return -i;
}
int main()
{
    cout << absolute(-5) << " " << absolute(-6.6) << " " << absolute(0) << " " << absolute(2.3) << endl;
    return 0;
}
