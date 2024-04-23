#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int bil,tengah,i,j,k,l,m;
    
    cout << "Input tinggi diamond (ganjil) : ";
    cin >> bil;
    while (bil % 2 == 0){
        cout << "inputan anda salah " << endl;
        cout << "Input tinggi diamond (ganjil) : ";
        cin >> bil;
    }
    tengah=(bil-1)/2;
for (i=1;i<=tengah;i++){
    for(j=tengah;j>=i;j--){
        cout <<" ";
    }
    for(k=1;k<=i;k++){
        cout <<"* ";
    }
    cout << endl;
}
for (i=1;i<=tengah;i++){
    cout << "*";
}
for (i=1;i<=tengah-1;i++){
    for(j=i;j>1;j--){
        cout <<" ";
    }
    for(k=i;k>1;k--){
        cout <<"* ";
    }
    cout << endl;
}
    
    
    
    return 0;
}