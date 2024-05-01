#include <iostream>
#include <typeinfo>
using namespace std;

int bilangan;
// untuk mengatur output Fizzzbuzz/Fizz/Buzz/angkaderet
string Fizzbuzz(int deret) {
    string hasil;
    if (deret % 3 == 0 && deret % 5 == 0) {
        hasil = "Fizzbuzz";
    } else if (deret % 3 == 0) {
        hasil = "Fizz";
    } else if (deret % 5 == 0) {
        hasil = "Buzz";
    } else {
        hasil = to_string(deret);
        bilangan = deret;//untuk menyimpan nilai terakhir yang bukan kelipatan 3 atau 5
    }
    return hasil;
}
//untuk membuat deret bilangan
string deretbilangan(int angka) {
    string hasil;
    for (int i = 1; i <= angka; i++) {
        int deret = (i * (i + 1));
        hasil += Fizzbuzz(deret);
        if (i != angka) {
            hasil += ",";
        }
        
    }
    return hasil;
}

int main() {
    system("CLS");
    int angka;
    x:
    cout << "Input angka: ";
    cin >> angka;

    if (angka < 3 || angka > 100) {
        cout << "Input tidak valid, berikan nilai dengan rentang 3-100!";
        goto x;
    } 
    else {
        cout << endl << deretbilangan(angka) << endl;
        cout << "Tipe data " << bilangan << " adalah " << typeid(bilangan).name() ;
    }
    return 0;
}