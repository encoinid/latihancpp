#include <iostream>

using namespace std;

// overloading == menimpa

// fungsi standar
int luasKotak(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}

// fungsi overloading 
int luasKotak(int sisi){
    int luas = sisi * sisi;
    return luas;
}

int main(){
    cout << "luas kotak 2x3 = " << luasKotak(2, 3) << endl;
    cout << "luas kotak 2x2 = " << luasKotak(2);

    cin.get();
    return 0;

}