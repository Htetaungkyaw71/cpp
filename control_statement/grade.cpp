#include <iostream>

using namespace std;

int main(){
    char grade;
    cout << "Enter your grade" << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Good job" << endl;
        break;
    case 'B':
        cout << "I like that" << endl;
        break;
    case 'C':
        cout << "Good try again" << endl;
        break;
    case 'D':
        cout << "your close to fail" << endl;
        break;
    case 'E':
        cout << "You failed" << endl;
        break;
    
    default:
        cout << "Enter a valid grade" << endl;
        break;
    }



}