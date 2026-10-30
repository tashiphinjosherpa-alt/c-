#include <iostream>
using namespace std;

class Grandfather {
public:
    void land() {
        cout << "Grandfather's land" << endl;
    }
};

class Father : public Grandfather {
public:
    void house() {
        cout << "Father's house" << endl;
    }
};

class Son : public Father {
public:
    void bike() {
        cout << "Son's bike" << endl;
    }
};

int main() {
    Son s;

    s.land();
    s.house();
    s.bike();

    return 0;
}