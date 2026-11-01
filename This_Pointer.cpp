#include <iostream>
using namespace std;

class Student {
    int age;

public:
    void setAge(int age) {
        this->age = age;
    }

    void show() {
        cout << age << endl;
    }
};

int main() {
    Student s;
    s.setAge(20);
    s.show();
}