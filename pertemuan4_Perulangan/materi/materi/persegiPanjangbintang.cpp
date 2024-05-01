#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int p,l;

    cout << "input panjang : ";
    cin >> p;
    cout << "input lebar : ";
    cin >> l;

    for (int i=0;i<l;i++){
        for (int j=0;j<p;j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}