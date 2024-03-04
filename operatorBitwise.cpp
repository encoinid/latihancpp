#include <iostream>
#include <bitset>
#include <string>

using namespace std;

// Bitwise Operator
/*
    &   AND Bitwise AND -> bernilai true jika keduanya true
    |   OR  Bitwise OR  -> bernilai true jika salah satu atau keduanya true
    ^   XOR Bitwsie XOR -> bernilai true jika salah satu bernilai false
    ~   NOT             -> kebalikan
    << SHL Shift bits left
    >> SHR Shift bits right
*/

void printBinner(unsigned short val, string nama){
    cout << nama << " = " << bitset<8>(val) << endl;
}
int main(){
    unsigned short a = 20;
    unsigned short b = 7;
    unsigned short c;

    cout << "& = Bitwise AND " << endl;
    c = a & b;
    printBinner(a,"a");
    printBinner(b,"b");
    printBinner(c,"c");

    cout << "\n \n | = Bitwise OR " << endl;
    c = a | b;
    printBinner(a,"a");
    printBinner(b,"b");
    printBinner(c,"c");

    cout << "\n \n ^ = Bitwise XOR " << endl;
    c = a ^ b;
    printBinner(a,"a");
    printBinner(b,"b");
    printBinner(c,"c");

    cout << "\n \n ~ = Bitwise NOT " << endl;
    c = ~a;;
    printBinner(a,"a");
    printBinner(c,"c");

    cout << "\n \n << = Bitwise SHL " << endl;
    c = a << 1;;
    printBinner(a,"a");
    printBinner(c,"c");  
    
    cout << "\n \n >> = Bitwise SHR " << endl;
    c = a >> 1;;
    printBinner(a,"a");
    printBinner(c,"c");

    return 0;
}