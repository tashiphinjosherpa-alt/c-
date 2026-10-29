#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void display() {
        cout << name;
    }
};

int main() {
    Student s1("Tashi");

    s1.display();

    return 0;
}