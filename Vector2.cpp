#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(5);
    v.push_back(15);
    v.push_back(25);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}