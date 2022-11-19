#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullname;
    string location;
    int initialScore;

    cout << "Type your fullname" << endl;
    getline(cin,fullname);

    cout << "Type your location" << endl;
    getline(cin,location);

    cout << "Type your initialScore 0 to 100" << endl;
    cin >> initialScore;

    cout << "Hello, " << fullname << endl;
    cout << "We heard you are from, " << location << endl;
    cout << "Your origin score is " << initialScore << " but with five points added, your score is " << (initialScore += 5)  << endl;




    return 0;
}