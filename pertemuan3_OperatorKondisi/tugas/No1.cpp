#include <iostream>
using namespace std;

int main() 
{
    system("CLS");
    int angka;
    string hasil;

    cout << "Masukkan sebuah bilangan ";
    cin >> angka;

    hasil = (angka % 2 == 1) ? "Ganjil" : "Genap";
    cout <<"Bilangan " << hasil << endl;
    
    return 0;
}