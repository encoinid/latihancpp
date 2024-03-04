#include <iostream>

using namespace std;

// struct: data yang dibentuk beberapa data
/*
    struct namaStruct{komponen, komponen ...};
*/

struct buah {
    string warna;
    float berat;
    int harga;
    char grade;
};
int main(){

    buah semangka;
    buah salak;

    semangka.warna = "Kuning";
    semangka.berat = 4000.500f;
    semangka.harga = 42000;
    semangka.grade = 's';

    salak.warna = "Coklat";
    salak.berat = 4.50f;
    salak.harga = 20000;
    salak.grade = 'a';

    cout << "Semangka" << endl;
    cout << semangka.warna << endl;
    cout << semangka.berat << endl;
    cout << semangka.harga << endl;
    cout << semangka.grade << endl;

    cout << "Salak" << endl;
    cout << salak.warna << endl;
    cout << salak.berat << endl;
    cout << salak.harga << endl;
    cout << salak.grade << endl;


    cin.get();
    return 0;
}