#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    system("cls");
    string Nama,NIM,Kom;
    float IPK;

    cout<< "Nama: ";
    getline (cin,Nama);
    cout<< "NIM: ";
    cin>> NIM;
    cout<< "Kom: ";
    cin>> Kom;
    cout<< "IPK: ";
    cin>> IPK;

    system("cls");
    
    cout<< "halo, nama anda adalah " << Nama << endl;
    cout<< "NIM anda "<<NIM<<" dari Kom "<< Kom << endl;
    cout<< fixed;
    cout<< setprecision(2);
    cout<< "IPK anda adalah " << IPK ;
    return 0;
}