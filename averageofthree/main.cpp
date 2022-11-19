#include <iostream>
#include <string>

using namespace std;

int main(){
    double first;
    double second;
    double third;
    cout << "Please enter a real number" << endl;
    cin >> first;
    cout << "Now, enter another real number" << endl;
    cin >> second;
    cout << "Now, enter final real number" << endl;
    cin >> third;

    double average = (first + second + third) / 3;

    cout << "Average is " << average << endl;


    return 0;
}