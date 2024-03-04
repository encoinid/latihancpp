#include <iostream>

using namespace std;


struct aktor{
    string nama;
    int tahunLahir;
    char jenisKelamin;
   
};
struct film {
    string judul;
    string genre;
    int tahunRilis;
    // struct aktor
    aktor pemeran1;
    aktor pemeran2;
};



int main(){

    aktor aktor1, aktor2;
    film film1, film2;

    // buat aktor1
    aktor1.nama = "Jhon Sky";
    aktor1.tahunLahir = 1999;
    aktor1.jenisKelamin = 'L';

    // buat aktor2
    aktor2.nama = "Selena Earth";
    aktor2.tahunLahir = 1997;
    aktor2.jenisKelamin = 'P';

    // buat film 1
    film1.judul = "Akhir Dunia";
    film1.genre = "Sains-fiksi";
    film1.tahunRilis = 2024;
    film1.pemeran1 = aktor1;
    film1.pemeran2 = aktor2;

        // buat film 2
    film2.judul = "Final War";
    film2.genre = "Fantasy";
    film2.tahunRilis = 2028;
    film2.pemeran1 = aktor1;

    cout << "Film 1" << endl;
    cout << film1.judul << endl;
    cout << film1.genre << endl;
    cout << film1.tahunRilis << endl;
    cout << film1.pemeran1.nama << endl;
    cout << film1.pemeran2.nama << endl;

      cout << "Film 2" << endl;
    cout << film2.judul << endl;
    cout << film2.genre << endl;
    cout << film2.tahunRilis << endl;
    cout << film2.pemeran1.nama << endl;



    cin.get();
    return 0;
}
