#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() {
        cout << "Employee Working" << endl;
    }
};

class Programmer : public Employee {
public:
    void work() {
        cout << "Programming" << endl;
    }
};

class Manager : public Employee {
public:
    void work() {
        cout << "Managing Team" << endl;
    }
};

int main() {
    Employee* emp;

    Programmer p;
    Manager m;

    emp = &p;
    emp->work();

    emp = &m;
    emp->work();

    return 0;
}