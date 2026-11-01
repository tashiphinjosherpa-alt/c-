#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number& add(int x) {
        value += x;
        return *this;
    }

    void show() {
        cout << value << endl;
    }
};

int main() {
    Number n(10);

    n.add(5).add(10).add(20);

    n.show();
}