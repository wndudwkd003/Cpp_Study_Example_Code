#include <iostream>
#include <string>
using namespace std;

int main()
{
    int h = 60;
    float c;
    c = (float)5 / 9 * (h - 32);  // 형변환을 해주지 
    cout << "화씨온도 " << h << "도는 섭씨온도 " << c << "입니다." << endl;
    return 0;
}
