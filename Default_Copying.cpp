#include <iostream>
using namespace std;

class Student {
public:
    int age;
};

int main() {
    Student s1;
    s1.age = 20;

    Student s2 = s1;//D.c

    cout << s2.age;
}