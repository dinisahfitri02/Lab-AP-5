#include <iostream>
using namespace std;

int main() {
    system("CLS");

      int bil,j,i;
    cout << "Masukkan bilangan : ";
    cin >> bil;   
while (bil < 2){
    cout << "masukkan bilangan lebih dari 1" << endl;
    cout << "Masukkan bilangan : ";
    cin >> bil; 
    }
    cout << bil <<" adalah bilangan";
    for ( i=2;i<bil;i++){
       if (bil % i ==0){
          cout << " bukan ";
          break;
       }
    }
    cout << "prima";
    
    return 0;
}