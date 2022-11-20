#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (i <= 50)
    {
        if(i % 2 == 0){
            cout << i << " is even" << endl;
        }else{
            cout << i << " is odd" << endl;
        }
        i++;
    }
     
    return 0;
}