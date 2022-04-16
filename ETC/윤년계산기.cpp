#include <iostream>
#include <string>
using namespace std;

int main()
{
    int year;
    cout << "년도를 입력하시오: ";
    cin >> year;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        cout << year << "는 윤년입니다." << endl;
    }
    else
    {
        cout << year << "는 윤년이 아닙니다." << endl;
    }
    
    return 0;
}
