#include <iostream>

using namespace std;

// fungsi menghitung kuadrat
int kuadrat(int x){
    int y;
    y = x*x;
    return y;
}

int main(){
    int input, hasil;
    cout << "masukan kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    cout << "kuadrat dari " << input << " adalah " << hasil;

    return 0;
}