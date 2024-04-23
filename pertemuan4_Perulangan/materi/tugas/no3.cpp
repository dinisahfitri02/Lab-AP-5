#include <iostream>
#include <cctype> //memanggil function tolower
using namespace std;

int main() {
  system("CLS");
  
  int counter = 0;
  string kalimat, lowerCaseKalimat;
  char huruf;

  cout << "Masukkan kalimat :";
  getline(cin, kalimat);
  cout << "Masukkan huruf yang ingin dihapus dari kalimat :";
  cin >> huruf;
  
  //blok kode untuk me-lower-case inputan user
  for (char c : kalimat){
    lowerCaseKalimat += tolower(c);
  }
  huruf = tolower(huruf); 

  //blok kode untuk menghapus karakter dari kalimat dan untuk menghidung jumlah karakter yang terhapus 
  for (int i = 0; i < lowerCaseKalimat.length(); i++){
    if (lowerCaseKalimat[i] == huruf){
      lowerCaseKalimat.erase(i, 1);
      i--; /*i-- digunakan untuk mundur 1 index ke belakang untuk memastikan bahwa 
      karakter yang berdampingan terhapus, misal AAA/UUU/DD/99 dsb.*/
      counter++;
    }
  }

  //blok kode untuk menampilkan output
  cout << lowerCaseKalimat << endl;
  cout << "Karakter terhapus : " << counter;
  return 0;
}