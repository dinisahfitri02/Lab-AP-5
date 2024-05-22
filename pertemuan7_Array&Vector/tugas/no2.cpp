#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    system("CLS");
    int efisiensi;
    int arEfisien[3][3] = {}; 
    string nama[3] = {"Andy","Budi","Chelly"};
    string peran[3] = {"coder","algorithmist","tester"};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukkan angka efisiensi " << nama[i] << " sebagai " << peran[j] << " : ";
            cin >> efisiensi;
            arEfisien[i][j] = efisiensi;
        }
    }

    int efisiensi_terbesar[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arEfisien[i][j] > efisiensi_terbesar[i]) {
                efisiensi_terbesar[i] = arEfisien[i][j];
            }
        }
    }

    // Menghitung nilai efisiensi kerja total
    float total_efisiensi = 0.0;
    for (int i = 0; i < 3; i++) {
        total_efisiensi += pow(efisiensi_terbesar[i], 2);
    }

    cout << "nilai efisiensi kerja total : " << fixed << setprecision (1) << sqrt(total_efisiensi) << endl;

    return 0;
}