#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
using namespace std;
class Circle
{
private:
    int x, y, r;
    string color;
public:
    Circle(int x = 0, int y = 0, int r = 0, string str = "White")
    {
        this->x = x;
        this->y = y;
        this->r = r;
        this->color = str;
    }
    double getCircleArea()
    {
        return r * r * 3.14;
    }
    void drawCircle()
    {
        HDC hdc = GetWindowDC(GetForegroundWindow());
        Ellipse(hdc, x - r, y - r, x + r, y + r);
    }
    void setValue(int x = 0, int y = 0, int r = 0, string str = "White")
    {
        this->x = x;
        this->y = y;
        this->r = r;
        this->color = str;
    }
    vector<int> getValue()
    {
        vector<int> arr = { this->x, this->y, this->r };
        return arr;
    }
};
int main()
{
    Circle c = { 100, 100, 50 };
    for (int i = 0; i < 10; i++)
    {
        c.drawCircle();
        c.setValue(c.getValue().at(0) + 10, c.getValue().at(1), c.getValue().at(2));
    }

    return 0;
}
