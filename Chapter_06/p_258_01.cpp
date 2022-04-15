#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
class Circle
{
private:
    int x, y, radius;
    HDC hdc;
public:
    Circle() : x(0), y(0), radius(0) {
        hdc = GetWindowDC(GetForegroundWindow());
    }
    void setValue(int x, int y, int r)
    {
        this->x = x;
        this->y = y;
        this->radius = r;
    }
    vector<int> getValue()
    {
        vector<int> vec = { x, y, radius };
        return vec;
    }
    void print()
    {
        Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
    }
};

int main()
{
    srand(time(NULL));

    Circle circles[10];
    char input;
    while (true)
    {
        input = _getch();
        if (input == 'c')
        {
            system("cls");
            for (Circle& ob : circles)
            {
                ob.setValue(rand() % 1000, rand() % 500, rand() % 50);
                ob.print();
            }
        }
        else if (input == 'm')
        {
            system("cls");
            for (Circle& ob : circles)
            {
                ob.setValue(ob.getValue().at(0) + 100, ob.getValue().at(1), ob.getValue().at(2));
                ob.print();
            }
        }
        else if (input == 'q')
        {
            break;
        }
    }

    return 0;
}
