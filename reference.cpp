#include <iostream>
using namespace std;

int main(){

    int a = 7;
    cout << "nilai dari a: " << a << endl;
    cout << "alamat dari a: " << &a << endl;

    // Reference
    int &b = a;
    cout << "nilai dari b: " << b << endl;
    cout << "alamat dari b: " << &b << endl;

    b = 9;
    cout << "nilai dari b: " << b << endl;
    cout << "nilai dari a: " << a << endl;

    b = 13;
    cout << "nilai dari b: " << b << endl;
    cout << "nilai dari a: " << a << endl;


    cin.get();
    return 0;
}