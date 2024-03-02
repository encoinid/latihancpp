#include <iostream>

using namespace std;
// Void adalah sebuah tipe data tanpa nilai kembalian


// fungsi menghitung kuadrat
// reporter
int kuadrat(int x){
    int y;
    y = x*x;
    return y;
}

// worker
void tampilkan(int input){
    cout << input;
}

int main(){
    int input, hasil;
    cout << "masukan kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    return 0;
}