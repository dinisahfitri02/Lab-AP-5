#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("CLS");

    string nama;
    int golongan,anak;
    float gaji_pokok,tambahan,pajak;
    
    cout << "Mrogram akan menghitung gaji bersih anda \n";
    cout << "Nama anda : ";
    getline (cin, nama);
    cout << "Golongan Anda (1/2/3) : ";
    cin >> golongan;
    cout << "Jumlah anak : ";
    cin >> anak;

    switch (golongan) {
        case 1:
        gaji_pokok = 5000000;
        break;
        case 2:
        gaji_pokok = 3000000;
        break;
        case 3:
        gaji_pokok = 2500000;
        break;
        default:
        cout << "Anda salah menginput golongan";
        return 0;
    }

    if (anak ==1 || anak==2){
        tambahan = anak * 500000;
    }
    else if (anak > 2){
        tambahan = (2*500000) + (anak-2) * 750000;
    }
    else {
        tambahan = 0;
    }
    pajak = (gaji_pokok+tambahan)*0.05;
    cout << endl <<"Karyawan atas nama "<< nama << ", gaji total anda sebesar Rp " << fixed << setprecision(2) <<gaji_pokok-pajak << endl;

    return 0;
}