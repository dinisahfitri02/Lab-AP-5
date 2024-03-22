#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    char nilai;

    cout << "Berapa nilai kamu : ";
    cin >> nilai;

    if (nilai=='A'){
        cout << "Bagus,pertahankan";
    } else if (nilai=='B'){
        cout << "Baik";
    } else if (nilai=='C'){
        cout << "lumayan";
    } else if (nilai=='D'){
        cout << "kurang baik";
    } else if (nilai=='E'){
        cout << "belajar dengan benar";
    } else {
        cout << "masukkan nilai dengan benar";
    }
    return 0;
}