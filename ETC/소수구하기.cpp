#include <iostream>
#include <cmath>

using namespace std;

void print_prim(int);

int main()
{
	print_prim(10);
	return 0;
}

void print_prim(int n)
{
	bool flag = false;
	for (int i = 2; i <= n; i++)
	{
		for (int u = 2; u <= sqrt(i); u++)
		{
			if (i % u == 0)
			{
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			cout << i << " ";
		}
		flag = false;
	}
	cout << endl;
}
