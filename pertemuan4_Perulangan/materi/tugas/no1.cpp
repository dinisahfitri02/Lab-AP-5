#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int n;

  cout << "masukkan bilangan : ";
  cin >> n;

  int jumlah = 1; //inisiasi nilai suku pertama
  for (int i=1;i<=n;i++){
    cout << jumlah << "   ";
    if (i % 2 == 1) { 
      jumlah += 5;// nilai untuk suku genap
    }
    else { 
      jumlah +=3; //nilai untuk suku ganjil
    }
  }

  
  
  
  return 0;
}