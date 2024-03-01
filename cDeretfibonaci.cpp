#include <iostream>

using namespace std;
//deret fibonaci 1, 2, 3, 5, 8, 13, 21....
// f_n = f_n1 + f_n2
int main(){
    int n;
    int f_n;
    int f_n1;
    int f_n2;

    cout << "Program Deret Fibonaci" << endl;
    cout << "Masukan Nilai ke-n: " ;
    cin >> n;

    f_n1 = 0;
    f_n2 = 1;
    f_n = f_n1 + f_n2;
    for(int a = 1; a < n; a++){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;

        cout << f_n << endl;
    }
    return 0;

}