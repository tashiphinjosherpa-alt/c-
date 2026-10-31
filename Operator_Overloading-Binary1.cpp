#include <iostream>
using namespace std;

class Number {
public:
    int num;

    Number(int n) {
        num = n;
    }

    Number operator+(Number obj) {
        return Number(num + obj.num);
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    cout << n3.num;

    return 0;
}