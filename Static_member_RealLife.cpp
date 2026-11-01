#include <iostream>
using namespace std;

class Employee {
private:
    string name;

public:
    static int totalEmployees;

    Employee(string n) {
        name = n;
        totalEmployees++;
    }

    static void displayTotal() {
        cout << "Total Employees: "
             << totalEmployees << endl;
    }
};

int Employee::totalEmployees = 0;

int main() {
    Employee e1("Tashi");
    Employee e2("Ram");
    Employee e3("Hari");

    Employee::displayTotal();

    return 0;
}