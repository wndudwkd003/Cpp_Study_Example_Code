#include <iostream>
#include <string>
using namespace std;

int main()
{
    int array[3], max;
    cout << "3개의 정수를 입력하시오: ";
    cin >> array[0] >> array[1] >> array[2];
    if (array[0] > array[1] && array[0] > array[2])
    {
        max = array[0];
    }
    else if (array[1] > array[0] && array[1] > array[2])
    {
        max = array[1];
    }
    else
    {
        max = array[2];
    }
    cout << "가장 큰 정수는 " << max << endl;
    return 0;
}
