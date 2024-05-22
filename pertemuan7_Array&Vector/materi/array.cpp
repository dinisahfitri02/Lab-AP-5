#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int nilai [5] ={1,2,3,4,5};

    //atau dengan diberi nilai satu persatu
    // nilai [0] = 1;
    // nilai [1] = 2;
    // nilai [2] = 3;
    // nilai [3] = 4;
    // nilai [4] = 5;
    
    for (int i = 0; i<5;i++){
        cout << "Alamat nilai [ "  << i << " ] = " << &nilai[i] << " -> " << nilai [i] << endl;
    }
    
    // cara ganti nilai array dengan pointer
    int *ptr = nilai;
    *(ptr+2) =6;
    cout << endl;

    //atau dengan mengganti indeksnya langsung
    // nilai[2] = 6;

    for (int i = 0; i<5;i++){
        cout << "Alamat nilai [ "  << i << " ] = " << &nilai[i] << " -> " << nilai [i] << endl;
    }

    cout << "Ukuran Array " << sizeof(nilai) << " byte" << endl;
    cout << "jumlah member array= " << sizeof(nilai)/sizeof(int) << endl;
    
    return 0;
}