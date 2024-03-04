#include <iostream>

using namespace std;

union namaUnion{
    int angka;
    char huruf[4];
};

int main(){
    namaUnion dataUnion;
    dataUnion.angka = 132435364;
    
    cout << "angka: " << dataUnion.angka << " " << &dataUnion.angka << endl;
    cout << "huruf: " << dataUnion.huruf << " " << &dataUnion.huruf << endl;

    dataUnion.huruf[0] = 'a';
    dataUnion.huruf[1] = 'b';
    dataUnion.huruf[2] = 'c';
    dataUnion.huruf[3] = 'd';

    cout << "angka: " << dataUnion.angka << " " << &dataUnion.angka << endl;
    cout << "huruf: " << dataUnion.huruf << " " << &dataUnion.huruf << endl;

    cin.get();
    return 0;
}