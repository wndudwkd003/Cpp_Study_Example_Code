#include <iostream>
#include <string>
#include <vector>

using namespace std;

void sort(string*, int);

int main()
{
    string s = "asgwA";

    sort(&s, s.length());

    cout << s << endl;
    return 0;
}

void sort(string* str, int size)
{
    char tmp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int u = 0; u < size - 1; u++)
        {
            if (str->at(u) > str->at(u+1))
            {
                tmp = str->at(u);
                str->at(u) = str->at(u + 1);
                str->at(u + 1) = tmp;
            }
        }
    }
}
