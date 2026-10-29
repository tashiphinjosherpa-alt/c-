#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    void showAge() {
        cout << age;
    }
};

int main() {
    Student s;

    s.setAge(20);
    s.showAge();

    return 0;
}