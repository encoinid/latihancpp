#include <iostream>

using namespace std;

int main(){
    /*
        do{
            aksi;
        }while(syarat/kondisi);
    */
   int a = 1;
   do{
    cout << "Halo " << a << endl;
    a++;
   }while(a < 10);

   return 0;
}