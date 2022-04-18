#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

class Circle
{
private:
	int x, y, r;
public:
	Circle(int x = 0, int y = 0, int r = 0) : x(x), y(y), r(y) {}
	vector<int> get_coord()
	{
		return { x, y };
	}
	int get_radius()
	{
		return r;
	}
	void set_coord(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void set_radius(int r)
	{
		this->r = r;
	}
	void print_window()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - r, y - r, x + r, y + r);
	}
};

int main()
{
	srand(time(NULL));
	Circle ob[15];
	char input;
	do
	{
		
		for (Circle& circle : ob)
		{
			circle.set_coord(rand() % 500, rand() % 300);
			circle.set_radius(rand() % 100);
		}

		input = _getch();

		if (input == 'm')
		{
			system("cls");
			for (Circle& circle : ob)
			{
				
				circle.print_window();
			}
		}
		else if (input == 'c')
		{
			system("cls");
		}
		else if (input == 'p')
		{
			for (Circle& circle : ob)
			{
				printf("%d %d\n", circle.get_coord().at(0), circle.get_coord().at(1));
				printf("%d\n", circle.get_radius());
			}
		}
	} while (input != 'q');


	return 0;
}
