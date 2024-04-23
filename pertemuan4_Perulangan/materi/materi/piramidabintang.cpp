#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int tinggi =5;

    for (int i=0;i<tinggi;i++){
        for (int j=0;j<tinggi-i;j++){
            cout << "+";
        }
        cout << endl;
    }
    
  
  /*
    for ( i=0 ; i < n ; i++){
       for ( j=0 ; j <=i ; j++){
         cout << "  ";
       }
       for ( k=i ; k <n ; k++){
         cout << k << " ";
       }
       cout << endl;
       
    } */
    
    /*for (i=2;i<n;i++){
        j=n % i;
        if (j ==0){
            cout <<"bukan ";
            break;
        }
    }
    cout << "prima";*/
    
    
    return 0;
}