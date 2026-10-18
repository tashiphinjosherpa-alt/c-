#include <iostream>
using namespace std;

int main() {
    int a = 90;
    int *p = &a;

    cout << a << endl;     
    cout << *p << endl;    
    cout << p << endl;    
    cout << &a << endl;    
    return 0;
}
