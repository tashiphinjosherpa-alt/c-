#include<iostream>
using namespace std;
int main(){
int Passward;
int correctPassward= 2351;
do{

    cout<<"Enter Passward:";
    cin>>Passward;
}while(Passward!=correctPassward);
cout<<"Successful caught";



    return 0;
}