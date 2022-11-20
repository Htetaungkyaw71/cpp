#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(nullptr));

    int i = 1;
    while (i <= 10)
    {
        cout << "dice" << " " << i << " " << rand() % 6 + 1  << endl;
        i++;
    }
    

    return 0;    
}