#include <iostream>
#include <cmath>
using namespace std;

int main() {
  system("CLS");
  
  int batas, jumlah = 0;

  cout << "Input batas perulangan : ";
  cin >> batas;

  //blok kode untuk memvalidasi inputan agar user tidak men-ginput bilangan negatif
  while (batas < 0){
    cout << "Inputan invalid, silahkan input bilangan positif\n";
    cout << "Input batas perulangan : ";
    cin >> batas;
  }

  //blok kode untuk menghitung jumlah bilangan
  for (int i = 1; i <= batas; i++){
    if (i % 2 == 0){
      jumlah += pow(i, 2);
    }
  }

  //blok kode untuk menampilkan output
  cout << jumlah;
  return 0;
}