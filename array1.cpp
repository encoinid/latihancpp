#include <iostream>
#include <array>

using namespace std;

// Membuat array menggunakan standar library
// array<tipe_data, jumlah_array> nama_array

int main(){
    array<int, 5> nilai;

    for(int i = 0; i < 5; i++){
        nilai[i] = i;
        cout << "nilai[" << i << "] = " << nilai[i];
        cout << " " << &nilai[i] << endl;
    }
    cout << endl;
    // ukuran array
    cout << "ukuran: " << nilai.size() << endl;
    // address awal dari array
    cout << "address awal: " << nilai.begin() << endl;
    // adress akhir dari array
    cout << "address akhir: " << nilai.end() << endl;
    // ambil nilai dari array dengan index
    cout << "nilai ke 2: " << nilai.at(2) << endl;

    cin.get();
    return 0;

}