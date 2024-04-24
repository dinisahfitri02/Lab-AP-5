#include <iostream>
using namespace std;

int main() {
  system("CLS");

  string kalimat;
  char huruf,ulang;
  x:
  cout << "Masukkan kalimat : ";
  getline (cin, kalimat);
  cout << "Masukkan huruf yang ingin dihapus : ";
  cin >> huruf;

  int jumlah = 0;
  for ( char c : kalimat){
    if (c== tolower(huruf) || c== toupper(huruf)){
      jumlah +=1;
      continue;
    }
    cout << c;
  }
  cout << endl << "Karakter terhapus = " <<jumlah;
  
  cout <<endl << "Apakah anda ingin mengulangi? (Y/T)? ";
    cin >> ulang;

    if (ulang == 'Y' || ulang == 'y' ){
        goto x;
    }
  
  return 0;
}