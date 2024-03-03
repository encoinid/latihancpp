#include <iostream>

using namespace std;

void printArray(int *ptrArray, int baris, int kolom){
    int index = 0;
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << endl;
    }
}
int main(){
    // array multidimensi
    // tipe_data nama_variabel[baris][kolom] = {isi}; jumlah data = baris x kolom
    /*
        int arrayMD[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}
    */
    int arrayMD[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArray(*arrayMD, 3, 3);
    cin.get();
    return 0;
}