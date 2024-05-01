#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int tinggi;
  cout << "Input tinggi piramida: ";
  cin >> tinggi;

  for (int i = 0; i < tinggi; i++) {
    for (int j = tinggi; j > i+1; j--) {
      cout << " ";
    }
    for (int k = 0; k <= i; k++) {
      cout << i+1 << " ";
    }
    cout << endl;
  }
  
  return 0;
}