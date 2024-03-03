#include <iostream>
#include <array>
using namespace std;

const int baris = 3;
const int kolom = 3;


void printArray(array < array < int, kolom > , baris > &nilaiArray){
    for(array <int, kolom> vectorBaris : nilaiArray){
        for(int nilaiKolom : vectorBaris){
            cout << nilaiKolom << " ";
        }
        cout << endl;
    }
}
int main(){
    // array multidimensi menggunakan standar library
   
    array <array <int, kolom>,baris> arrayMD = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printArray(arrayMD);
    cin.get();
    return 0;
}