#include <iostream>
using namespace std;

int main(){

    int a = 7;

    // pointer
    int *aPointer = nullptr;
    aPointer = &a;


    // int memiliki nilai dan address (alamat)
    cout << "nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aPointer << endl;

    // deferencing, mengambil nilai dari sebua pointer

    cout << "ambil nilai dari pointer: " << *aPointer << endl;
    cin.get();
    return 0;
}