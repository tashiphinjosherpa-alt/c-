#include <iostream>
using namespace std;

class Person {
protected:
    string name;
};

class Student : public Person {
public:
    void setName(string n) {
        name = n;
    }

    void showName() {
        cout << name;
    }
};

int main() {
    Student s;

    s.setName("Tashi");
    s.showName();

    return 0;
}