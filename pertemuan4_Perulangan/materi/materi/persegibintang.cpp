#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int sisi;

  cout << "Input sisi persegi: ";
  cin >> sisi;

  for (int i = 0; i < sisi; i++) {
    for (int j = 0; j < sisi; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  
  return 0;
}