#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("CLS");
    float tinggi,berat,bmi;
    string keterangan;
    cout << "Program menghitung BMI (Berat Massa Indeks)" << endl << endl;
    cout << "Masukkan tinggi badan anda (dalam m): ";
    cin >> tinggi;
    cout << "Masukkan berat badan anda (dalam kg): ";
    cin >> berat;

    bmi = berat/(tinggi*tinggi);

    if (bmi <=0){
        cout << "sepertinya ukuran yang anda masukkan salah";
    }
    else {
            if (bmi > 0 && bmi <18.5){
          keterangan = "Berat badan kurang";
        }
        else if (bmi >=18.5 && bmi < 25){
          keterangan = "Berat badan normal";
        }
        else if (bmi >=25  && bmi <30){
          keterangan = "Berat badan berlebih";
        }
        else{
          keterangan = "Obesitas";
        }
    }

    cout << "BMI anda : " << fixed << setprecision(1) << bmi << endl;
    cout << "Kategori berat badan : " << keterangan << endl;
    
    return 0;
}