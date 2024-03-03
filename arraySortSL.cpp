#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 13;

void printArray(array <int, arraySize> &angka){
    cout << "Array: ";
    for(int &a : angka){
        cout << a << " ";
    } 
    cout << endl;
}

void printArray(array <char, arraySize> &angka){
    cout << "Array: ";
    for(char &a : angka){
        cout << a << " ";
    } 
    cout << endl;
}



int main(){
    array <int, arraySize> angka = {1,5,4,12,8,3,9,11,2,4,7,13,10};
    array <char, arraySize> huruf = {'a','g','f','d','c','v','b','n','s','a','f','w','r'};
    printArray(angka);
    printArray(huruf);

    cout <<"\nSetelah disortir" << endl;
    sort(angka.begin(), angka.end());
    printArray(angka);

    sort(huruf.begin(), huruf.end());
    printArray(huruf);
    cin.get();
    return 0;
}