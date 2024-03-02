#include <iostream>

using namespace std;

// Prototype
void fungsi(int *b);
void kuadrat(int *);

int main(){
    int a = 7;
    cout << "address a: " << &a << endl;
    cout << "nilai a: " << a << endl;

    //fungsi(&a);

    kuadrat(&a);
    cout << "nilai a: " << a << endl;

    cin.get();
    return 0;
}

void fungsi(int *b){
    cout << "address b: " << b << endl;
    cout << "nilai b: " << *b << endl;
}
void kuadrat(int *valpointer){
    cout << &valpointer;
    *valpointer = *valpointer * *valpointer;
}