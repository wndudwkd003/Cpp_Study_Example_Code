#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class mystring
{
public:
	int size;
	char* s;
	mystring(const char* c)
	{
		size = strlen(c) + 1;
		s = new char[size];
		strcpy(s, c);
	}
	~mystring()
	{
		delete[] s;
	}
};

int main()
{
	mystring str = { "hello" };
	cout << str.s << endl;
	return 0;
}
