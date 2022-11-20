#include <iostream>

using namespace std;

int main(){
    int age;
    char gender;
    cout << "Enter age" << endl;
    cin >> age;
    cout << "Enter gender" << endl;
    cin >> gender;


    if(age >= 60 && (gender == 'F' || gender == 'f')){
        cout << "You qualify for the discount" << endl;
    }
    else{
        cout << "You do not qualify for the discount" << endl;
    }

}