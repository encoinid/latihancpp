#include <iostream>

using namespace std;

// Prototype
void fungsi(int &b){
    b = 9;
    cout << "address b: " << &b << endl;
    cout << "nilai b: " << b << endl;
}
void kuadrat(int &valRefenrence){
    valRefenrence = valRefenrence*valRefenrence;
}

int main(){
    int a = 7;
    cout << "address a: " << &a << endl;
    cout << "nilai a: " << a << endl;

    fungsi(a);
    
    kuadrat(a);
    cout << "address a: " << &a << endl;
    cout << "nilai a: " << a << endl;

    cin.get();
    return 0;
}