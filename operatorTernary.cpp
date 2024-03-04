#include <iostream>
#include <string>
using namespace std;

// Ternary operator = ?
// kondisi ? hasil1 : hasil2
int main(){
    int a, b;
    string hasil1, hasil2, output;

    hasil1 = "jhon";
    hasil2 = "watson";
    
    a = 7;


    cin >> b;

    output = (a < b) ? hasil1 : hasil2 ;

    cout << output << endl;
    
    return 0;
}