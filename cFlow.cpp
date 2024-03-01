#include <iostream>

using namespace std;

int main(){
    //
    cout << "For Loop \n";
    for(int counter = 1; counter <= 9; counter++){
        if(counter == 5){
            continue;
            // break;
        }
    cout << "Halo" << counter << endl;
    }
    cout << " \n selesai \n \n";
    
    //
    cout << "while Loop  \n";
    int a = 0;
    while(a <= 9){
        a++; // a++ == a = a + 1
        if(a == 5){
            continue;
            //break;
        }
        cout << "halo " << a << endl;
    }

}