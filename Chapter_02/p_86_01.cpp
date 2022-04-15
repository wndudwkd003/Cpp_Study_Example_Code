#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 0, b = 0;
    char input;
    cout << "영문자를 원하는 만큼 하나씩 입력 후 컨트롤 + z를 치세요." << endl;
    while (cin >> input)
    {
        switch (input)
        {
        default:
            b++;
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            a++;
            break;
        }
    }
    cout << "모음: " << a << endl << "자음: " << b << endl;

    return 0;
}
