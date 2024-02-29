#include <iostream>

using namespace std;

int main(){
    int a;
    
    cout << "masukan angka lebih dari 10: ";
    cin >> a;
    
    if(a > 10 ){
        cout << "angka yang dimasukan lebih besar dari 10";
    }else if(a == 10){
        cout << "angka yang dimasukan sama dengan 10";
    }
    else{
        cout << "angka yang dimasukan lebih kecil dari 10";
    }
    return 0;
    
}