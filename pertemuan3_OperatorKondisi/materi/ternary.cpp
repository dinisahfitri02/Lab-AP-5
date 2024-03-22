#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    // int umur;
    // string hasil;

    // cout << "Umur kamu berapa";
    // cin >> umur;

    // hasil = (umur> 1000) ? "kamu bukan manusia" : "kamu mungkin manusia";
    // cout << hasil << endl;
    // return 0;


    int tinggi;
    string hasil;

    cout << "tinggi kamu berapa cm ? ";
    cin >> tinggi;

    hasil = (tinggi> 200) ? "kamu berbakat menjadi pemain basket" : "tinggimu kurang";
    cout << hasil << endl;
    return 0;
}