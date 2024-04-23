#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int n;

  cout << "Input batas baris dari deret:";
  cin >> n;

  //blok kode untuk memvalidasi inputan agar user tidak meng-input angka yang lebih kecil dari 1,
  //karena suku dalam deret dimulai dari 1 dan tidak ada suku yang negatif
  while (n <= 0){
    cout << "Inputan invalid, silahkan input bilangan lebih besar dar 0:\n";
    cout << "Input batas baris dari deret:";
    cin >> n;
  }

  //blok kode untuk menampilkan tiap-tiap suku dari deret
  int num = 1;
  for (int i = 1; i <= n; i++) {
    cout << num << " ";
    if (i % 2 == 1) {
      num += 5;
    } else {
      num += 3;
    }
  }
  return 0;
}