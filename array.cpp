#include <iostream>
using namespace std;

/* 
    --menulis array
    tipe_data nama_array[jumlah_member];

    -mengisi array pada array
    contoh:
        int array[2];
        array[0] = 1;
        array[1] = 2;

        atau 
        int array[2] = {1, 2};
*/

int main(){
    // membuat array
    int array[3];
    array[0] = 2;
    array[1] = 4;
    array[2] = 6;

    // menampilkan data pada array

    cout << &array[0] << " nilainya adalah " << array[0] << endl; // &nama_varibale mengambil alamat memory dari sebuah varibel
    cout << &array[1] << " nilainya adalah " << array[1] << endl;
    cout << &array[2] << " nilainya adalah " << array[2] << endl;
    
    // memanipulasi nilai pada array, cara 1
    int *ptr = array;
    *(ptr + 1) = 10; // memanipulasi nilai dari array[1]  menjadi 10

    // cara 2 --> nama_varibel_arra[index-ke] = nilai baru
    array[2] = 14;

    cout << "setelah nilai dimanipulasi" << endl;
    cout << &array[0] << " nilainya adalah " << array[0] << endl; // &nama_varibale mengambil alamat memory dari sebuah varibel
    cout << &array[1] << " nilainya adalah " << array[1] << endl;
    cout << &array[2] << " nilainya adalah " << array[2] << endl;

    // menampilkan besar memory yang digunakan dan jumlah member
    cout << "ukuran array: " << sizeof(array) << " byte" << endl;
    cout << "jumlah member: " << sizeof(array)/sizeof(int) << endl;

    cin.get();
    return 0;
}