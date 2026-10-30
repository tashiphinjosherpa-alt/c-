#include <iostream>
using namespace std;

class Father {
public:
    void money() {
        cout << "Father's money" << endl;
    }
};

class Mother {
public:
    void care() {
        cout << "Mother's care" << endl;
    }
};

class Child : public Father, public Mother {
};

int main() {
    Child c;

    c.money();
    c.care();

    return 0;
}