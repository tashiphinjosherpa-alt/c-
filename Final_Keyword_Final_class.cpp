#include <iostream>
using namespace std;

class Animal final {
public:
    void sound() {
        cout << "Animal Sound";
    }
};

class Dog : public Animal {  // Error
};

int main() {
    return 0;
}