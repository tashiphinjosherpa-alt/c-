#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    Student(const Student &s) {
        name = s.name;
    }
};

int main() {
    Student s1("Tashi");

    Student s2 = s1;

    cout << s2.name;

    return 0;
}