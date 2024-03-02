#include <iostream>

using namespace std;

// Rekursif -> fungsi yang mengulang dirinya sendiri

// contoh fungsi rekursif terbatas
int pangkatIterasi(int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;      
    }
    return hasil;
}

int pangkatRekursif(int a, int b){
    if(b <= 1){
        cout << "\n akhir dari rekursif \n";
        return a;
    }else{
        cout << "\n rekursif";
        return a * pangkatRekursif(a, (b-1));
    }
}
int main(){
    int a, b;
    cout << "angka: ";
    cin >> a;
    cout << "pangkat: ";
    cin >> b;
    cout << "hasil iterasi: " << pangkatIterasi(a, b) << endl;

    cout << "hasil rekursif: " << pangkatRekursif(a, b);
    
    
    cin.get(); // agar program tidak langsung menutup
    return 0;

}