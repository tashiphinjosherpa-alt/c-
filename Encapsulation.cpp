#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    void setSalary(int s) {
        if (s > 0) {
            salary = s;
        }
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Employee e;

    e.setSalary(50000);

    cout << "Salary = " << e.getSalary();

    return 0;
}
