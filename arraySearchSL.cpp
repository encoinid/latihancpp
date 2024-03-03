#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 13;

void printArray(array <int, arraySize> &angka){
    cout << "Array: ";
    for(int &a : angka){
        cout << a << " ";
    } 
    cout << endl;
}

int main(){
    array <int, arraySize> angka = {1,5,4,12,8,3,9,11,2,4,7,13,10};
    printArray(angka);

    int angkaCari;
    bool ketemu;

    cout << "mencari angka dari array diatas: ";
    cin >> angkaCari;
    // sort telebih dahulu
    // search menggunakan binari_search
    sort(angka.begin(), angka.end());
    ketemu = binary_search(angka.begin(), angka.end(), angkaCari);

    if(ketemu == 1){
        cout << "angka yang kamu cari ada";
    }else{
        cout << "gak ada angka " << angkaCari << " diatas";
    }
    
    cin.get();
    return 0;
}