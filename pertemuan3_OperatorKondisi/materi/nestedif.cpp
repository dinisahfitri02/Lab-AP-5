#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int umur;

    cout << "Berapa umur kamu ";
    cin >> umur;

    // if (umur <= 0){
    //     cout << "Kamu bukan manusia";
    // }
    // else {
    //     if (umur > 0 && umur <= 5){
    //       cout << "kamu masih balita";
    //     }
    //     else if (umur > 5 && umur < 18){
    //       cout << "kamu dalam masa remaja";
    //     }
    //     else if (umur >=18  && umur <45){
    //       cout << "kamu sudah dewasa";
    //     }
    //     else if(umur >=45  && umur < 70){
    //       cout << "kamu Lansia";
    //     }
    //     else{
    //       cout << "kamu berada di usia senja, panjang umur sehat terus!";
    //     }
    // }
    
    switch (umur)
    {
        case 0 ... 5:
        cout << "kamu masih balita";
        break;
        case 6 ... 17:
        cout << "kamu dalam masa remaja";
        break;
        case 18 ... 45:
        cout << "kamu dewasa";
        break;
        case 46 ... 70:
        cout << "kamu lansia";
        break;
        default :
        cout << "kamu  dalam usia senja, sehat selalu";
        break;
    }
    return 0;
}