#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int number;
    cout << "enter a number" << endl;
    cin >> number;

    while (number >= 0)
    {
        sum += number;
        cout << "enter a number" << endl;
        cin >> number;
     
    }
    cout << "Sum" << sum << endl;
    

  
    
    return 0;    
}