#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int angka;

ulang:
  cout << "Masukkan angka: ";
  cin >> angka;

  if (angka < 1 || angka > 10) { goto ulang; }
  
  return 0;
}