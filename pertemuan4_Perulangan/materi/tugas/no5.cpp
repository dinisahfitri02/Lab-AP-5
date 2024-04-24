
#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int bil;
    bool prima;
    char ulang;
    
    x:
    cout << "Masukkan bilangan yang ingin diperiksa: ";
    cin >> bil;

    while ( bil < 1){
        cout << "bilangan harus >= 1" << endl;
        goto a;
    }

    for ( int i = 2; i <= bil / 2; i++){
        if (bil % i == 0){
            prima = false;
        } else {
            prima = true;
        }
    }

    if (prima){
        cout << bil << " adalah bilangan prima" << endl;
    } else {
        cout << bil << " bukan bilangan prima" << endl;
    }

    cout << "Apakah anda ingin mengulangi? (Y/T)? ";
    cin >> ulang;

    if (ulang == 'Y' || ulang =='y'){
        goto x;
    }
    
    return 0;
}
