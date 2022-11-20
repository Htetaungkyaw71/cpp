#include <iostream>

using namespace std;

int main(){
    int age = 16;
    if(age < 16){
        cout << "you can't drive" << endl;
    }else{
        cout << "you can drive" << endl;
    }

    for(int i = 1;i <= age;i++)
    {
        cout << "Happy birthday" << i << endl;
    }
    return 0;
}