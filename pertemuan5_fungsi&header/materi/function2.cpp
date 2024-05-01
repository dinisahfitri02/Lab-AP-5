#include <iostream>
using namespace std;

int pangkat (int angka){
    return angka * angka;
}

int main() {
    system("CLS");
    
    cout << pangkat(3) << endl;
    cout << pangkat(6) << endl;
    cout << pangkat(9) << endl;
    cout << pangkat(12) << endl;
    
    
    return 0;
}