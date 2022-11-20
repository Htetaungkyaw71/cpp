#include <iostream>

using namespace std;

int main(){
    int count = 10;
    while(count < 10){
        cout << count << endl;
        count++;
    }
    cout << endl << endl;

    int count1 = 10;
    do{
        cout << count1 << endl;
        count1++; 
    }while (count1 < 10);
  
    
    return 0;    
}