#include <iostream>
using namespace std;

class Data {
public:
    int num1;

    Data(int n) {
        num1 = n;
    }

    
    Data operator++() {
        ++num1;
        return *this;
    }
};

int main() {
    Data t1(23), result(0);

    result = ++t1;

    cout << "t1 = " << t1.num1 << endl;
    cout << "result = " << result.num1 << endl;

    return 0;
}