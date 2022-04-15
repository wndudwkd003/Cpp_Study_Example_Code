#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Complex
{
    double r;
    double i;
public:
    Complex(double r, double i)
    {
        this->r = r;
        this->i = i;
    }
    vector<double> getValue()
    {
        vector<double> vec = { r, i };
        return vec;
    }
    void print()
    {
        cout << "(" << r << ((i > 0) ? " + " : " - ") << abs(i) << "i)";
    }
};

Complex add(Complex a, Complex b)
{
    vector<double> arr_a = a.getValue();
    vector<double> arr_b = b.getValue();
    return Complex(arr_a[0] + arr_b[0], arr_a[1] + arr_b[1]);
}

int main(void)
{
    Complex com1(5, 3);
    Complex com2(3, -4);
    Complex com3 = add(com1, com2);
    com1.print();
    cout << "+";
    com2.print();
    cout << "=";
    com3.print();
    cout << endl;
    return 0;
}
