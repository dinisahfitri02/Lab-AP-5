#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int angka;
    char ulang;

    x:
    cout << "Masukkan Angka: ";
    cin >> angka;

    while ( (angka < 1) || (angka >10000)){
        cout<< "Invalid: 1<= angka <= 10000";
        goto x;
    }
    
    cout << "H" << string(angka, 'o') << "r" << string(angka,'e') << string (angka, '!');

    cout <<endl << "Apakah anda ingin mengulangi? (Y/T)? ";
    cin >> ulang;

    if (ulang == 'Y' || ulang == 'y' ){
        goto x;
    }
    
    
    
    return 0;
}