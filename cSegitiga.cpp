#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Masukan tinggi segitiga: ";
    cin >> n;
    // Pola 1
    /*
        *
        **
        ***
        ****
        *****
    */
    cout << "Pola 1" << endl;
    for(int a = 1; a <= n; a++){
        for(int b = 1; b <= a; b++){
            cout << "*";
        } 
        cout << endl;
    }

    // Pola 2
    /*
        *****
        ****
        ***
        **
        *
    */
    cout << "Pola 2" << endl;
    for(int a = 1; a <= n; a++){
        for(int b = n; b >= a; b--){
            cout << "*";
        } 
        cout << endl;
    }

    // Pola 3
    /*
        *****
         ****
          ***
           **
            *
    */
    cout << "Pola 3" << endl;
    for(int a = 1; a <= n; a++){
        for(int c = 1; c < a; c++){
            cout << " ";
        }
        for(int b = n; b >= a; b--){
            cout << "*";
        }     
        cout << endl;
    }

    // Pola 4
    /*
            *
           **
          ***
         ****
        *****    
    */
    cout << "Pola 4" << endl;
    for(int a = 1; a <= n; a++){
        for(int c = n; c > a; c--){
            cout << " ";
        }
        for(int b = 1; b <= a; b++){
            cout << "*";
        }  
        cout << endl;
    }
    // Pola 5
    /*
            *
           ***
          *****
         *******
        *********    
    */
    cout << "Pola 5" << endl;
    for(int a = 1; a <= n; a++){
        for(int c = n; c > a; c--){
            cout << " ";
        }
        for(int b = 1; b <= (2*a-1); b++){
            cout << "*";
        }  
        cout << endl;
    }

    // Pola 6
    /*
        *****
         ****
          ***
           **
            *
    */
    cout << "Pola 6" << endl;
    for(int a = 1; a <= n; a++){
        for(int c = 1; c < a; c++){
            cout << " ";
        }
        for(int b = n; b >= (2*a-n); b--){
            cout << "*";
        }     
        cout << endl;
    }
}