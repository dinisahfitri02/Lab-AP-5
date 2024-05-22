#include <iostream>
using namespace std;

int indekspascal(int x, int y)//  untuk mengambil indeks segitiga pascal
{
    if ( y > x - y){
        y = x - y;
    }
    int hasil = 1;
    for (int i = 0; i < y; ++i){
        hasil *= (x - i);
        hasil /= (i + 1);
    }
    return hasil;
}

void segitigaPascal(int a)// untuk menampilkan segitiga pascal
{
    for (int baris = 0; baris < a; ++baris){
        for (int spasi = 0; spasi < a - baris - 1; ++spasi){
            cout << " ";
        }
        for (int kolom = 0; kolom <= baris; ++kolom){
            cout << indekspascal(baris, kolom) << " ";
        }
        cout << endl;
    }
}


int main()
{
    system("CLS");
    cout << "========== Segitiga Pascal ==========" << endl;
    int a,x,y;
    ts:
    cout << "Masukkan tinggi segitiga pascal (1-30): ";
    cin >> a;
    if (a < 1 || a > 30){
        cout << "Masukkan angka interval 1 hingga 30" << endl;
        goto ts;
    }
    segitigaPascal(a);//menampilkan segitiga pascal
    
    input :
    cout << "Masukkan dua buah bilangan x dan y (baris dan kolom)" << endl << "interval (x >=1, y <= 30 | y <=x ) : ";
    cin >> x >> y;

    if (x < 1 || x > 30 || y < 1 || y > 30 || y > x){
        cout << "input bilangan yang sesuai! (x >=1, y <= 30 | y <=x )" << endl;
       goto input;
    }

    cout << "Nilai pada indeks [" << x << "][" << y << "] = " << indekspascal(x - 1, y - 1) << endl;//output indeks

    system("pause");
    return 0;
}