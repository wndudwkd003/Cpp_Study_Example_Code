#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Student
{
private:
    string name;
    float marks;
public:
    Student(string str = "", float m = 0.f)
    {
        name = str;
        marks = m;
    }
    float getMarks()
    {
        return marks;
    }
    void print()
    {
        cout << "이름: " << name << endl;
        cout << "학점: " << marks << endl;
    }
    void setValue(string str = "", float m = 0.f)
    {
        name = str;
        marks = m;
    }
};
bool compare(Student& a, Student& b)
{
    return a.getMarks() < b.getMarks();
}
int main()
{
    string name;
    float marks;
    Student student_ob[3];
    vector<Student> students;
    for (int i = 0; i < 3; i++)
    {
        cout << "이름을 입력: ";
        cin >> name;
        cout << "성적을 입력: ";
        cin >> marks;
        student_ob[i].setValue(name, marks);
        students.push_back(student_ob[i]);
    }
    sort(students.begin(), students.end(), compare);
    for (auto& ob : students)
    {
        ob.print();
    }
    return 0;
}
