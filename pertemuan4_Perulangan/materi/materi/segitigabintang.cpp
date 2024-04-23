#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int tinggi;
    cout << "masukkan tinggi : ";
    cin >> tinggi;

    for (int i=0;i<tinggi;i++){
        for (int j=tinggi;j>0;j--){
            
            cout << i;

        }
        cout << endl;
    }
    
    
    
    return 0;
}