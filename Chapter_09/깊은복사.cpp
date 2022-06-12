#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class MyArray {
public:
	int size;
	int* data;
	MyArray(int size);
	MyArray(const MyArray& other);
	~MyArray();
};

MyArray::MyArray(int size) {
	this->size = size;
	data = new int[size];
}

MyArray::MyArray(const MyArray& other) {
	this->size = other.size;
	this->data = new int[other.size];
	for (int i = 0; i < this->size; i++) {
		this->data[i] = other.data[i];
	}
}

MyArray::~MyArray() {
	if (data != nullptr) {
		delete[] this->data;
	}
	data = nullptr;
}

int main()
{
	MyArray a(10);
	for (int i = 0; i < a.size; i++) {
		a.data[i] = i;
	}
	for (int i = 0; i < a.size; i++) {
		cout << a.data[i] << " ";
	}
	cout << endl;
	MyArray b(a);
	for (int i = 0; i < b.size; i++) {
		cout << b.data[i] << " ";
	}
	cout << endl;
	return 0;
}
