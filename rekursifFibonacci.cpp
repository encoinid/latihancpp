#include <iostream>

using namespace std;

int fibonacci(int n);

int main(){
    int angka, hasil;
    cout << "Menghitung fibonacci ke-n: ";
    cin >> angka;
    hasil = fibonacci(angka);
    cout << hasil;

    cin.get();
    return 0;
}

int fibonacci(int n){
    cout << "fungsi fibonacci" << n << endl;
    if(n <= 1){
        return n;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

// Fibonacci lebih tidak menggunakan rekursif