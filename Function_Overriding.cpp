#include <iostream>
using namespace std;

class Employee {
public:
    void work() {
        cout << "Employee is working" << endl;
    }
};

class Programmer : public Employee {
public:
    void work() {
        cout << "Programmer is coding" << endl;
    }
};

int main() {
    Programmer p;
    p.work();

    return 0;
}
