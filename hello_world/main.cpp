#include <iostream>

using namespace std;

int main ()
{
    string name = "htetaungkyaw";
    int age = 30;
    bool isGood = true;
    char street = 'A';
    double price = 0.4;

    cout << name << endl;
    cout << age << endl;
    cout << boolalpha;
    cout << isGood << endl;

    cout << street << endl;
    cout << price << endl;


    name[3] = 'Z';

    cout <<"name length is" <<name.length() << endl;
    cout <<"name substring" <<name.substr(1,2) << endl;
    cout <<"name index" << name[3] << endl;



 
    return 0;
}