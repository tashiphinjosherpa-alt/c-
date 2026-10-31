#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() final {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {   // Error
        cout << "Dog Bark" << endl;
    }
};

int main() {
    Dog d;
}