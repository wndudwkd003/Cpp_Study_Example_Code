#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(NULL));
    char mine_list[10][10];
    int rand_x, rand_y;
    fill(&mine_list[0][0], &mine_list[9][10], '.');    // '.'로 초기화
    for (int i = 0; i < 30; i++)
    {
        rand_x = rand() % 10;
        rand_y = rand() % 10;
        if (mine_list[rand_x][rand_y] == '#')
        {
            i--;
            continue;
        }
        else
        {
            mine_list[rand_x][rand_y] = '#';
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int u = 0; u < 10; u++)
        {
            cout << mine_list[i][u];
        }
        cout << endl;
    }
    return 0;
}
