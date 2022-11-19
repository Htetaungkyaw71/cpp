#include <iostream>

using namespace std;

int main (){
    int a = 3;
    int b = 9;
    int add = a + b;
    int subtract = a - b;
    int multiply = a * b;
    int divide = a / b;
    int moudle = a % b;

    int result = 10;

    result += 20;
    result -= 10;
    result *= 2;
    result++;
    result++;
    result--;


    cout <<"add = " << add  << endl;
    cout <<"subtract = " << subtract  << endl;
    cout <<"multiply = " << multiply  << endl;
    cout <<"divide = " << divide  << endl;
    cout <<"moudle = " << moudle  << endl;
    cout <<"result = " << result  << endl;



    return 0;
}