#include <iostream>
#include <string>

using namespace std;

int main() 
{
    system("cls");

    // getline menyimpan string termasuk setelah diberi spasi, untuk string yang lebih dari satu kata/kalimat.
    string nama_getline;
    cout << "Masukkan nama anda: ";
    getline(cin, nama_getline);
    cout << "Nama anda: " << nama_getline << endl;

    // Menggunakan cin Mengabaikan semua karakter setelah spasi, untuk string satu kata.
    string nama_cin;
    cout << "Masukkan nama anda : ";
    cin >> nama_cin;
    cout << "Nama anda : " << nama_cin << endl;

}