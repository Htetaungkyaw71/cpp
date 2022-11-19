#include <iostream>

using namespace std;

int main(){
    cout << boolalpha;

    int a = 14;
    int b = 15;

    bool less = a < b;
    bool greater = a > b;
    bool equal = a == b;
    bool lessEqual = a <= b;
    bool greaterEqual  = a >= b;
    bool notEqual  = a != b;


    cout << less  << endl;
    cout << greater  << endl;
    cout << equal  << endl;
    cout << lessEqual  << endl;
    cout << greaterEqual << endl;
    cout << notEqual  << endl;

    int age = 22;

    cout << (age >= 21) << endl;

    return 0;
}