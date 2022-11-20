#include <iostream>
using namespace std;

int main(){
    char package;
    int jam;
    int owe;
    int monthly;
    int price;
    int included;

    cout << "Which package A or B or C?" << endl;
    cin >> package;
    cout << "how man jams?" << endl;
    cin >> jam;

    switch (package)
    {
    case 'A':
        monthly = 8;
        included = 2;
        price = 5;
        break;
    case 'B':
        monthly = 12;
        included = 4;
        price = 4;
        break;
    case 'C':
        monthly = 15;
        included = 6;
        price = 3;
        break;
    default:
        cout << "Type invalid package" << endl;
        break;
    }

    if(jam <= included)
    {
        owe = monthly;
        cout << "Your owe is " << owe << endl;
    }
    else{
        owe = ((jam - included) * price) + monthly;
        cout << "Your owe is " << owe << endl;
    }


    return 0;
}