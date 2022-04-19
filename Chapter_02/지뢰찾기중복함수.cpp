#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;

void print(char[][10], int);
void print(vector<vector<char>>&, int);
void set_mine(char[][10], int);
void set_mine(vector<vector<char>>&, int);

int main()
{
	srand(time(NULL));

	char arr[10][10];
	fill(&arr[0][0], &arr[9][10], '.');

	vector<vector<char>> vec(10, vector<char>(10, '.'));
	
	set_mine(arr, 10);
	print(arr, 10);

	set_mine(vec, 10);
	print(vec, 10);

	return 0;
}

void set_mine(vector<vector<char>>& vec, int size)
{
	int x, y, rand_time = 30;
	for (int i = 0; i < rand_time; i++)
	{
		x = rand() % 10;
		y = rand() % 10;
		if (vec[x][y] != '#')
		{
			vec[x][y] = '#';
		}
		else
		{
			i--;
		}
	}
}

void set_mine(char arr[][10], int size)
{
	int x, y, rand_time = 30;
	for (int i = 0; i < rand_time; i++)
	{
		x = rand() % 10;
		y = rand() % 10;
		if (arr[x][y] != '#')
		{
			arr[x][y] = '#';
		}
		else
		{
			i--;
		}
	}
}

void print(vector<vector<char>>& vec, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int u = 0; u < size; u++)
		{
			cout << vec[i][u];
		}
		cout << endl;
	}
	cout << endl;
}

void print(char arr[][10], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int u = 0; u < size; u++)
		{
			cout << arr[i][u];
		}
		cout << endl;
	}
	cout << endl;
}
