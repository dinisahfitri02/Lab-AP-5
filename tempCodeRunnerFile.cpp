#include <iostream>
#include <cmath> // Library untuk fungsi pow
using namespace std;

int main() {
    system("CLS");
    int efisiensi;
    int arEfisien[3][3] = {}; // Menginisialisasi semua elemen array dengan 0
    string nama[3] = {"Andy","Budi","Chelly"};
    string peran[3] = {"coder","algorithmist","tester"};
    bool peran_digunakan[3] = {false}; // Melacak apakah suatu peran sudah digunakan

    // Memasukkan nilai efisiensi untuk setiap orang dan peran
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (!peran_digunakan[j]) { // Memeriksa apakah peran sudah digunakan
                cout << "Masukkan angka efisiensi " << nama[i] << " sebagai " << peran[j] << " : ";
                cin >> efisiensi;
                arEfisien[i][j] = efisiensi;
                peran_digunakan[j] = true; // Menandai peran sebagai sudah digunakan
            }
        }
        // Reset peran_digunakan setelah satu nama selesai
        fill_n(peran_digunakan, 3, false);
    }

    // Menghitung nilai efisiensi kerja terbesar untuk masing-masing orang
    int efisiensi_terbesar[3] = {0}; // Inisialisasi dengan nilai 0
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arEfisien[i][j] > efisiensi_terbesar[i]) {
                efisiensi_terbesar[i] = arEfisien[i][j];
            }
        }
    }

    // Menghitung nilai efisiensi kerja total
    double total_efisiensi = 0.0;
    for (int i = 0; i < 3; i++) {
        total_efisiensi += pow(efisiensi_terbesar[i], 2); // Menambahkan kuadrat dari nilai efisiensi terbesar
    }
    total_efisiensi = sqrt(total_efisiensi); // Menghitung akar kuadrat

    cout << "Nilai efisiensi kerja total: " << total_efisiensi << endl;

    return 0;
}