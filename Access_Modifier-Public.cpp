#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student s;

    s.name = "Tashi";

    cout << s.name;

    return 0;
}