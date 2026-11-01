#include <iostream>
using namespace std;

class Test {
public:
    void show() {
        cout << "Address of object: " << this << endl;
    }
};

int main() {
    Test t1, t2;

    t1.show();
    t2.show();

    return 0;
}