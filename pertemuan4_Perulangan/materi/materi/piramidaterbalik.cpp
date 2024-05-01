#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int tinggi;
  cout << "Input tinggi piramida: ";
  cin >> tinggi;

  for (int i = tinggi; i > 0; i--) {
    for (int j = 0; j < tinggi - i; j++) {
        cout << " ";
    }
    for (int k = 0; k < i; k++) {
        cout << "* ";
    }
    cout << endl;
  }
  
  return 0;
}