#include <iostream>
using namespace std;

class Data {
public:
    int num1;

    Data(int n) {
        num1 = n;
    }

    
    Data operator+(Data t2) {
        Data t3(0);
        t3.num1 = num1 + t2.num1;
        return t3;
    }

    void display() {
        cout << "Value = " << num1;
    }
};

int main() {
    Data t1(23), t2(77), result(0);

    result = t1 + t2;

    result.display();

    return 0;
}