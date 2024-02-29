#include <iostream>
#include <limits>

using namespace std;

int main(){
    int a = 9;
    long b = 1919191919;
    short c = 1;
    char d = 'z';
    
    cout << "Tipe Data INT" << endl;
    cout << "Tipe data Int, variabel dengan nilai " << a << endl;
    cout << "Tipe data int menggunakan memory sebesar: " << sizeof(a) << " byte" << endl;
    cout << "Maksimum nilai tipe data int jika tidak unsigned: " << numeric_limits<int>::max() << endl;
    cout << "Minimum nilai tipe data int jika tidak unsigned: " << numeric_limits<int>::min() << endl;
    
    cout << "Tipe Data LONG" << endl;
    cout << "Tipe data long, variabel dengan nilai " << b << endl;
    cout << "Tipe data long menggunakan memory sebesar: " << sizeof(b) << " byte" << endl;
    cout << "Maksimum nilai tipe data long jika tidak unsigned: " << numeric_limits<long>::max() << endl;
    cout << "Minimum nilai tipe data long jika tidak unsigned: " << numeric_limits<long>::min() << endl;
    
    cout << "Tipe Data short" << endl;
    cout << "Tipe data short, variabel dengan nilai " << c << endl;
    cout << "Tipe data short menggunakan memory sebesar: " << sizeof(c) << " byte" << endl;
    cout << "Maksimum nilai tipe data short jika tidak unsigned: " << numeric_limits<short>::max() << endl;
    cout << "Minimum nilai tipe data short jika tidak unsigned: " << numeric_limits<short>::min() << endl;
    
    cout << "Tipe Data char" << endl;
    cout << "Tipe data char, variabel dengan nilai " << d << endl;
    cout << "Tipe data chart menggunakan memory sebesar: " << sizeof(d) << " byte" << endl;
    return 0;
}