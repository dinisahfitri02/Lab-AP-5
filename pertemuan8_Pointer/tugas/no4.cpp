#include <iostream>
using namespace std;

void tambah(int *a, int *b, int *hasil) {
    *hasil = *a + *b;
}

void kurang(int *a, int *b, int *hasil) {
    *hasil = *a - *b;
}

void kali(int *a, int *b, int *hasil) {
    *hasil = *a * *b;
}

void bagi(int *a, int *b,int *hasil) {
    if (*b != 0) {
        *hasil = *a / *b;
    } else {
        cout << "tidak terdefinisi" << endl;
        *hasil = 0;
    }
}

int main() {
    system("CLS");
    int pilihan,a, b, hasil;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Pilih operasi bilangan : " << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cin >> pilihan;
    
            
    switch (pilihan) {
        case 1:
            tambah(&a, &b, &hasil);
            cout << "hasil: " << hasil;
            break;
        case 2:
            kurang(&a, &b, &hasil);
            cout << "hasil: " << hasil;
            break;
        case 3:
            kali(&a, &b, &hasil);
            cout << "hasil: " << hasil;
            break;
        case 4:
            bagi(&a, &b, &hasil);
            cout << "hasil: " << hasil;
            break;
        default:
            cout << "Pilihan tidak valid!";
    }
return 0;
}