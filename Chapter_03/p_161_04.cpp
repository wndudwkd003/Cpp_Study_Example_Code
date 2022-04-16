#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool prime(int i)
{
    int count=0;
    for (int o = 1; o <= i; o++)
    {
        if (i % o == 0) count++;
        if (count > 2)return false;
    }
    if (count == 2) return true;
    else false;
}
int main()
{
    for (int i = 2; i <= 100; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
