#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s_3[] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '=', '.', ',', '/', '?', '`', '~' };
    string input;
    bool s_1_c, s_2_c, s_3_c, s_4_c;

    while (true)
    {
        s_1_c = false;
        s_2_c = false;
        s_3_c = false;
        s_4_c = false;

        cout << "비밀번호를 입력하시오: ";
        cin >> input;

        for (auto& c : input)
        {
            if (c >= 'a' && c <= 'z')
            {
                s_1_c = true;
            }
            if (c >= 'A' && c <= 'Z')
            {
                s_2_c = true;
            }
            for (auto& s : s_3)
            {
                if (c == s) s_3_c = true;
            }
            if (c >= '0' && c <= '9')
            {
                s_4_c = true;
            }
        }
        if (s_1_c && s_2_c && s_3_c && s_4_c)
        {
            cout << "안전합니다" << endl;
            break;
        }
        else
        {
            cout << "안전하지 않습니다." << endl;
        }
    }
    return 0;
}
