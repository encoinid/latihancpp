#include <iostream>

using namespace std;

int main(){
    //Increment & Decrement

    int a = 5;
    int b = 7;

    // Increment
    // a = a + 1 == a++ == a+=1
    
    cout << "nilai awal a adalah " << a << endl;
    a += 1;
    cout << "a += 1 adalah " << a << endl;
    a++;
    cout << "a++ adalah " << a << endl;
    a = a + 1;
    cout << "a = a + 1 adalah " << a << endl;
    
    // Decrement
    // b = b - 1 == b-- == b-=1
    cout << "nilai awal b adalah " << b << endl;
    b -= 1;
    cout << "b -= 1 adalah " << b << endl;
    b--;
    cout << "b-- adalah " << b << endl;
    b = b - 1;
    cout << "b = b - 1 adalah " << b << endl;
}