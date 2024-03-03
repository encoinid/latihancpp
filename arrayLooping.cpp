#include <iostream>

using namespace std;

int main(){
    // looping untuk array c++ 11 keatas
    /*
        for(deklarasi varibel : array){
            statement
        }
    */

   int arrayNilai[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int nilai : arrayNilai){
        cout << "address " << &nilai << " dan nilainya " << nilai << endl;
        nilai = 11; // tidak mengubah array
    }
    cout << endl;

    // memanipulasi array menggunakan reference
    for(int &nilaiRef : arrayNilai){
        nilaiRef *= 2;
    }

     for(int &nilaiRef : arrayNilai){
        cout << "address " << &nilaiRef << " dan nilainya " << nilaiRef << endl;

    }


    cin.get();
    return 0;
}