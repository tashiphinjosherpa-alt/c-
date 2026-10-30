#include <iostream>
using namespace std;

class Employee {
public:
    Employee() {
        cout << "Employee Created" << endl;
    }

    ~Employee() {
        cout << "Employee Deleted" << endl;
    }
};

int main() {
    Employee* e = new Employee();

    delete e;   

    return 0;
}