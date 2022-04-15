#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int dice_number[6];
    int sum = 0;
    for (int& i : dice_number)
    {
        i = rand() % 6 + 1;
        cout << (&i - &dice_number[0]) + 1 << "번째의 주사위의 값: " << i << endl;
        sum += i;
    }
    cout << "\n6개의 주사위의 합: " << sum << endl;
    return 0;
}
