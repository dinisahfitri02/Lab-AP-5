#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int bil;
    cout << "input bilangan :";
    cin >> bil;

    if (bil % 2 ==0){
        cout <<" angka " << bil << " adalah bilangan genap"<<endl;
    }
    else {
        cout <<" angka " << bil << " adalah bilangan ganjil"<<endl;
    }
     if (bil % 3 ==0){
        cout <<" angka " << bil << " habis dibagi 3"<<endl;
    }
    else {
        cout <<" angka " << bil << " tidak habis dibagi 3 "<<endl;
    }
     if (bil % 5 ==0){
        cout <<" angka " << bil << " habis dibagi 5"<<endl;
    }
    else {
        cout <<" angka " << bil << " tidak habis dibagi 5"<<endl;
    }
     if (bil % 7 ==0){
        cout <<" angka " << bil << " habis dibagi 7"<<endl;
    }
    else {
        cout <<" angka " << bil << " tidak habis dibagi 7"<<endl;
    }
    return 0;
}