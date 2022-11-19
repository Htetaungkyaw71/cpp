#include <iostream>

using namespace std;

int main(){
    bool isRainy = true; 
    bool isWarm = false;

    cout << boolalpha;
    cout << (isRainy && isWarm) << endl; 
    cout << (isRainy || isWarm) << endl; 
    cout << (!isWarm) << endl; 
    return 0;    
}