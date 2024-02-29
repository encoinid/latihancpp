#include <iostream>

using namespace std;

int main(){
    int a = 100;
    int b = 10;
    float hasil;
    
    //operator aritmatika c++ +, -, *, /, %
    // 01 penjumalahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;
    
    //pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;
    
    //perkalian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;
    
    //pembagian 
    hasil = a / b;
    cout << a << " : " << b << " = " << hasil << endl;
    
    //modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil <<endl;
    return 0;
}