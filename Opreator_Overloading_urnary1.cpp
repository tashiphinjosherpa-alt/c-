#include <iostream>
using namespace std;

class Number {
public:
    int num;

    Number(int n) {
        num = n;
    }

    void operator-() {
        num = -num;
    }

    void display() {
        cout << "Value = " << num << endl;
    }
};

int main() {
    Number n1(10);

    -n1;   // Calls operator-()

    n1.display();

    return 0;
}