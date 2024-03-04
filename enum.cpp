#include <iostream>

using namespace std;

enum warna{hijau, coklat, merah, kuning, biru};
int main(){
    warna kain;

    kain = kuning;

    cout << kain << endl;


    cin.get();
    return 0;
}