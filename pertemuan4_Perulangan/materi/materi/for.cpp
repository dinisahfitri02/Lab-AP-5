
#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  string nama;

  cout << "Input nama anda: ";
  cin >> nama;
  
  for (auto c : nama) {
    c = tolower(c);
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e') {
      c = 'o';
    }
    cout << c; 
  }
  return 0;
}