#include <iostream>
using namespace std;

int main() {
    system("CLS");

    string kalimat;

    cout << "masukkan kalimat ";
    getline (cin,kalimat);
    
    for ( char c : kalimat  ){
        cout << c << endl;
    }
    return 0;
}