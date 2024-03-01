#include <iostream>

using namespace std;

int main(){
    /*
        for(inisialisasi; loop kondisi; increment){
            aksi;
        }
    */

   cout << "Loop 1 \n";
   for(int counter = 1; counter <= 9; counter++){
    cout << "Halo" << counter << endl;
   }
   cout << "selesai \n \n";

   cout << "Loop 2 \n";
   for(int counter = 1; counter <= 9; counter += 2){
    cout << "Halo" << counter << endl;
   }
   cout << "selesai";
   return 0;
}