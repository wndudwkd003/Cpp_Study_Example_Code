#include <iostream>
#include <string>
using namespace std;

int main()
{
    char cal;
    double a, b;
    cout << "연산의 종류 ";
    cin >> cal;
    cout << "숫자를 입력하시오: ";
    cin >> a >> b;
    switch (cal)
    {
    default:
        break;
    case '+':
        cout << "계산의 결과: " << a + b << endl;
        break;
    case '-':
        cout << "계산의 결과: " << a - b << endl;
        break;
    case '*':
        cout << "계산의 결과: " << a * b << endl;
        break;
    case '/':
        cout << "계산의 결과: " << a / b << endl;
        break;
    }
    return 0;
}
