#include <iostream>
using namespace std;

int main() {
    system("CLS");
    string kalimat;

    x:
    cout << "Masukkan kalimat terinfeksi: ";
    getline(cin, kalimat);
    if (kalimat.length() >100){
        cout << "Kalimat terlalu panjang. silahkan ulangi input "<< endl;
        goto x;
    }

    int panjang = kalimat.length();
    string kiri, kanan;

    if (panjang % 2 == 0) {
        // Jika panjang string genap
        int tengah = panjang / 2;
        kiri = kalimat.substr(0, tengah);
        kanan = kalimat.substr(tengah);
    } else {
        // Jika panjang string ganjil
        int tengah = (panjang - 1) / 2;
        kiri = kalimat.substr(0, tengah+1);
        kanan = kalimat.substr(tengah);
    }

    for (int i = 0; i < kiri.length() / 2; i++) {
        swap(kiri[i], kiri[kiri.length() - i - 1]);
    }
    for (int i = 0; i < kanan.length() / 2; i++) {
        swap(kanan[i], kanan[kanan.length() - i - 1]);
    }

    cout << "String perbaikan: " << kiri+kanan << endl;

    return 0;
}