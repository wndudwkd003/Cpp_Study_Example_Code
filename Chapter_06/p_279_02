#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Rect {
    int w, h, area;
public:
    Rect()
    {
        this->w = 0;
        this->h = 0;
        this->area = w * h;
    }
    Rect(int w, int h)
    {
        this->w = w;
        this->h = h;
        this->area = w * h;
    }
    void setValue(int w, int h)
    {
        this->w = w;
        this->h = h;
        this->area = this->w * this->h;
    }
    void print()
    {
        cout << "폭: " << w << " 넓이: " << h << endl;
    }
    int getArea()
    {
        return this->area;
    }
};
bool compare(Rect& a, Rect& b)
{
    return a.getArea() < b.getArea();
}
int main()
{
    Rect list[3];
    vector<Rect> v;
    int w, h;
    for (Rect& ob : list)
    {
        cout << "list" << &ob - &list[0] << "번째에 입력할 폭과 높이: ";
        cin >> w >> h;
        ob.setValue(w, h);
        v.push_back(ob);
    }
    for (auto& ob : v)
    {
        ob.print();
    }
    cout << endl;
    sort(v.begin(), v.end(), compare);
    for (auto& ob : v)
    {
        ob.print();
    }
    
    return 0;
}
