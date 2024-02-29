#include <iostream>

using namespace std;

int main(){
    int alas = 3;
    int tinggi = 5;
    cout << "Hitung luas segitiga" << endl;
    cout << "====================" << endl;
    cout << "Masukan alas : ";
    //memasukan data ke variabel alas
    cin >> alas;
    cout << "Masukan tinggi: ";
    //memasukan data ke variabel tinggi
    cin >> tinggi;
    //menampilkan dan menghitung luas segitiga
    cout << "Luas segitiga adalah " << (alas*tinggi)/2 << endl;
    cout << cin.get();
    
    return 0;
}