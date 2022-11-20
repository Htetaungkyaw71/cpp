#include <iostream>

using namespace std;

int main(){
    int count = 0;
    while(count < 10){
        if(count % 2 == 0){
            cout << count << endl;
            count++;
            continue;
        }
        count++;
    }
    return 0;    
}