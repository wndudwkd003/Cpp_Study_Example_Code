#include <iostream>
using namespace std;

void fibo(int);

int main()
{
    fibo(4);
    return 0;
}

void fibo(int n)
{
    static int a = 1, b = 1, c = 2, count = 0;
    cout << a << " ";
    a = b;
    b = c;
    c = a + b;
    count++;
    if (count != n) fibo(n);
}
