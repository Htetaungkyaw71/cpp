#include <iostream>

using namespace std;

int main(){
    int age;
    cin >> age;
    if(age >= 21){
        cout << "Have a beer!" << endl;
    }else if (age >= 16){
        cout << "Have a Coke!" << endl;
        cout << "But You can drive" << endl;
    }
    else{
        cout << "Have a coke!" << endl;
    }
    cout << "Thanks for coming" << endl;


}