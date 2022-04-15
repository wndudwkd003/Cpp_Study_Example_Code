#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    string answer[10] = { "larva", "drone", "overlord", "zergling", "hydralisk",
                         "lurker", "mutalisk", "queen", "ultralisk", "defiler" };
    int rand_index = rand() % 10;
    string result(answer[rand_index].length(), '_');
    char input;
    while (answer[rand_index] != result)
    {
        cout << result << endl;
        cout << "글자를 입력하시오: ";
        cin >> input;

        for (int i = 0; i < answer[rand_index].length(); i++)
        {
            if (answer[rand_index].find(input, i) != string::npos)
                result[answer[rand_index].find(input, i)] = input;
        }
    }
    cout << "정답: " << result << endl << "성공하였습니다!" << endl;
    return 0;
}
