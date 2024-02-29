#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int b = 5;
    
    bool hasil;
    
    //operator logika = NOT(!), AND(&&) , OR(||)
    
    //NOT
    hasil = !(a==2);
    cout << hasil << endl;
    
    //AND : kedua nilai true untuk menghasilkan TRUE/1
    hasil = (a == 2 ) && (b == 5); // true true = true
    cout << hasil << endl;
    hasil = (a == 2 ) && (b == 6); // true false = false
    cout << hasil << endl;
    hasil = (a == 3 ) && (b == 5); // false true = false
    cout << hasil << endl;
    hasil = (a == 3 ) && (b == 4); // false false = false
    cout << hasil << endl;
    
     //OR : salah satu nilai true untuk menghasilkan TRUE/1
    hasil = (a == 2 ) || (b == 5); // true true = true
    cout << hasil << endl;
    hasil = (a == 2 ) || (b == 6); // true false = true
    cout << hasil << endl;
    hasil = (a == 3 ) || (b == 5); // false true = true
    cout << hasil << endl;
    hasil = (a == 3 ) || (b == 4); // false false = false
    cout << hasil << endl;
    
}