#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Vector_ {
private:
	double x, y;
public:
	Vector_(double x = 0.0, double y = 0.0) {
		this->x = x, this->y = y;
	}
	string print() {
		return "(" + to_string(x) + ", " + to_string(y) + ")";
	}
	Vector_& operator++() {
		++x, ++y;
		return *this;
	}
	const Vector_ operator++(int) {
		Vector_ tmp = *this;
		++x, ++y;
		return tmp;
	}
	Vector_ operator+(const Vector_& other) {
		return { this->x + other.x, this->y + other.y };
	}
	bool operator==(const Vector_& other) {
		return (this->x == other.x && this->y == other.y);
	}
	bool operator!=(const Vector_& other) {
		return !(*this == other);
	}
};

int main() {
	Vector_ v1(1.0, 2.0), v2(3.0, 4.0);
	Vector_ v3 = v1 + v2;
	++v3;
	cout << v3.print() << endl;
	v3++;
	cout << v3.print() << endl;
	cout.setf(cout.boolalpha);
	cout << (v1 == v2) << endl;
	cout << (v1 != v2) << endl;
	return 0;
}
