#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>

using namespace std;

class Circle {
public:
    int x, y, radius;
    string color;
    void draw()
    {
        HDC hdc = GetWindowDC(GetForegroundWindow());
        Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
    }
};

int main()
{
    srand(time(NULL));

    int input;
    cout << "숫자를 입력하시오";
    cin >> input;

    
    for (int i = 0; i < input; i++)
    {
        unique_ptr<Circle> ob(new Circle);
        ob->x = rand() % 500;
        ob->y = rand() % 300;
        ob->radius = rand() % 50;
        ob->draw();
    }

    return 0;
}
