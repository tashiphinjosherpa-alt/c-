#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Object Created" << endl;
    }

    ~Test() {
        cout << "Object Destroyed" << endl;
    }
};

int main() {
    Test t1;
    Test t2;
    Test t3;

    return 0;
}