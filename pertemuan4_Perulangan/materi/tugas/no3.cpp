#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int tahun,interval;

  x :
    cout << "Input tahun (1000-9000) : ";
    cin >> tahun;

  y : 
    cout << "Input interval : ";
    cin >> interval;

  while (tahun<1000 || tahun>9000){
    cout << "Input tahun yang sesuai " << endl;
    goto x;
  }

  while (interval<-1000 || interval>9999-tahun){
    cout << "Input interval yang sesuai " << endl;
    goto y;
  }

  if (interval < 0){
    for (int i=0;i>interval;i--){
    cout << tahun ;
    if (tahun % 4 == 0){
      cout << " Kabisat" << endl;
    }
    else {
      cout << " Bukan kabisat" << endl;
    }
    tahun -=1;
    }
  }
  else {
  for (int i=0;i<interval;i++){
    cout << tahun ;
    if (tahun % 4 == 0){
      cout << " Kabisat" << endl;
    }
    else {
      cout << " Bukan kabisat" << endl;
    }
    tahun +=1;
  }

  }
  
  return 0;
}