#include<iostream>
using namespace std;
int main(){
    int pin=0;
    while(pin != 9999){
        cout << "Incorrect Pin, Please Try Again: ";
        cin >> pin;
    }
    cout << "Access Granted!" << endl;
    return 0;
}
