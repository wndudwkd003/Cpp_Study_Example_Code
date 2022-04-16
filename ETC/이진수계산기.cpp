#include <Windows.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int input = 0;
    int quotient = 0, remainder = 0;    // quotient = 몫, remainder = 나머지
    vector<int> binary;

    short space = 0;

    do
    {
        system("cls");
        cout << "정수를 입력하시오: ";
        cin >> input;

    } while (input < 0);

    quotient = input;

    while (true)
    {
        if (quotient == 0)
        {
        binary.assign(8, 0);
        break;
        }
        else if (quotient == 1)
        {
            binary.push_back(quotient);
            while (binary.size() % 8 != 0)
            {
                binary.push_back(0);
            }
            break;
        }
        
        else
        {   remainder = quotient % 2;
            quotient /= 2;
            binary.push_back(remainder);
        }
    }
    
    cout << "이진수는: ";

    for (int i = binary.size(); i >= 1; i--)
    {
        cout << binary[i-1];
        space++;
        if (space == 4)
        {
            cout << " ";
            space = 0;
        }
    }

    cout << "입니다." << endl;

    return 0;
}
