#include <iostream>

using namespace std;

//fungsi hitung luassegitiga
double hitungLuassegitiga(double alas = 3, double tinggi = 2){
    double luas;
    luas = alas*tinggi/2;
    return luas;
}
int main(){
    double alas;
    double tinggi;
    cout << "masukan alas: ";
    cin >> alas;
    cout << "masukan tinggi: ";
    cin >> tinggi;
    cout << "luas segitiga adalah " << hitungLuassegitiga(alas, tinggi);

    return 0;
}