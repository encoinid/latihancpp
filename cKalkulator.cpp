#include <iostream>
using namespace std;

int main(){
    //tentukan tipe data dan nama variabel
    int a, b;
    char aritmatika;
        
    cout << "Ini Kalkulator \n" << endl;
    
    //masukan input dari user
    cout << "Input angka pertama: ";
    cin >> a;
    cout << "Pilih operator +, -, *, /: ";
    cin >> aritmatika;
    cout << "Input angka kedua: ";
    cin >> b;
    cout << "hasil perghitungan: ";
    
    //jika menggunakan if
    /*
    if(aritmatika == '+'){
        cout << a+b;
    }else if(aritmatika == '-'){
        cout << a-b;
    }else if(aritmatika == '*'){
        cout << a*b;
    }else if(aritmatika == '/'){
        cout << a/b;
    }else{
        cout << "operator salah";
    }
    */
    
    //jika menggunakan switchcase
    switch(aritmatika){
        case '+':
            cout << a+b;
            break;
        case '-':
            cout << a-b;
            break;
        case '*':
            cout << a*b;
            break;
        case '/':
            cout << a/b;
        break;
        default:
            cout << "operator salah";
    }
    
}