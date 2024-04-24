#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int bil;
    char ulang;

    x:
    cout << "Masukkan nilai kuadrat yang ingin dijumlahkan : ";
    cin >> bil;

    int jumlah = 0;
    for (int i = 2; i <= bil; i += 2) {
        jumlah += i * i;
    }

    cout << "Jumlah kuadrat hingga " << bil << " adalah: " << jumlah << endl;

    cout << "\nApakah anda ingin mencoba lagi? (Y/T)? ";
    cin >> ulang;

    if (ulang == 'Y' || ulang == 'y'){
        goto x;
    }
    

    
    
    
    return 0;
}