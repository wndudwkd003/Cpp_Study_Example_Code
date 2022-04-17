#include <iostream>
#include <string>
using namespace std;

int sum_even(int, int);

int main()
{
    cout << sum_even(1, 10) << endl;

    return 0;
}

int sum_even(int a, int b)
{
    int sum = 0;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    return sum;
}
