#include <iostream>
#include <string>
using namespace std;

int main(){
    string adjective1;
    string girlName;
    string adjective2;
    string occupation1;
    string plaeName;
    string clothing;
    string hobby;
    string adjective3;
    string occupation2;
    string boyName;
    string manName;

    cout << "Type adjective1" << endl;
    getline(cin,adjective1);

    cout << "Type girlName" << endl;
    getline(cin,girlName);

    cout << "Type adjective2" << endl;
    getline(cin,adjective2);

    cout << "Type occupation1" << endl;
    getline(cin,occupation1);

    cout << "Type plaeName" << endl;
    getline(cin,plaeName);

    cout << "Type clothing" << endl;
    getline(cin,clothing);

    cout << "Type hobby" << endl;
    getline(cin,hobby);

    cout << "Type adjective3" << endl;
    getline(cin,adjective3);

    cout << "Type occupation2" << endl;
    getline(cin,occupation2);

    cout << "Type boyName" << endl;
    getline(cin,boyName);

    cout << "Type manName" << endl;
    getline(cin,manName);

    cout << "There once was a " << adjective1 << " girl named " << girlName << " who was a " << adjective2 << " "  << occupation1 << " in the kingdom of " << plaeName << ". She loved to wear " << clothing << " and " << hobby << ". She wanted to mary the " << adjective3 << " 
    " << occupation2 << " named " << boyName << " but her father, King " << manName << " forbid her from seeing him." << endl;


    return 0;
}