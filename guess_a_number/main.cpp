#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(nullptr));

    int guess = rand() % 100 + 1;
    int number;

    cout << "Guess a number" << endl;
    cin >> number;

    while (number != guess)
    {
        if(number < guess){
            cout << "Guess a number again, your number is low" << endl;
            cin >> number;
        }else if(number > guess){
            cout << "Guess a number again, your number is high" << endl;
            cin >> number;   
        }    
    }
    cout << "Congrat!" << endl;


    
    return 0;    
}