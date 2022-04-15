#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int list[10];
    int max;

    for (int& i : list)
    {
        i = rand() % 100 + 1;
        cout << i << " ";
    }
    cout << endl;

    max = list[0];

    for (int& i : list)
    {
        if (max <= i)
        {
            max = i;
        }
    }
    cout << "최댓값: " << max << endl;

    return 0;
}
