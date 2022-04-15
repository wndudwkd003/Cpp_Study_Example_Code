#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    double a = rand() % 100, b = rand() % 100 + 1;
    double answer, input = 0;
    char c;

    switch (rand() % 4)
    {
    default:
        break;
    case 0:
        answer = a + b;
        c = '+';
        break;
    case 1:
        answer = a - b;
        c = '-';
        break;
    case 2:
        c = '*';
        answer = a * b;
        break;
    case 3:
        answer = a / b;
        c = '/';
        break;
    }

    cout << "산수 문제를 자동으로 출제합니다." << endl;
    while (true)
    {
        cout << a << c << b << "=";
        cin >> input;
        if (input != answer)
        {
            cout << "틀렸습니다." << endl;
            continue;
        }
        else
        {
            cout << "맞았습니다." << endl;
            break;
        }
    }

    return 0;
}
