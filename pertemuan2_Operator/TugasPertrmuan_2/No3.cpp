#include <iostream>
#include <iomanip>
#define phi 3.14
using namespace std;


int main() 
{
    char pilihan;
    string bangun;
    double r,t,s,a,b,c,ts,tp,luas,volume;
    
    system("cls");
    cout << "Program akan menghitung luas dan volume" << endl;
    cout << "1. Kerucut" << endl << "2. Limas Segitiga" << endl << "3. Bola" << endl << "4. Prisma Segitiga" << endl;
    cout << "Bangun mana yang ingin anda hitung(1/2/3/4)? ";
    cin >> pilihan;  //mengimput bagun pilihan user 
    switch (pilihan) 
    {
        case '1':
        cout << "Masukkan ukuran dalam cm" << endl;
        bangun= "kerucut";
        cout << "Jari-jari : "; cin >> r;
        cout << "Tinggi : "; cin >> t;
        cout << "Garis pelukis : "; cin >> s;
        luas = phi*r*(r+s);
        volume = 1/3*phi*r*r*t;
        break;

        case '2':
        bangun= "Limas Segitiga"; 
        cout << "Masukkan ukuran dalam cm" << endl;
        cout << "alas : "; cin >> a;
        cout << "Tinggi segitiga: "; cin >> ts;
        cout << "Tinggi limas : "; cin >> t;
        luas = 4 * 0.5 * a * t;
        volume = 1/6*a*t*ts;
        break;

        case '3':
        bangun= "Bola";
        cout << "Masukkan ukuran dalam cm" << endl;
        cout << "Jari-jari : "; cin >> r;
        luas = 4 * phi * r * r;
        volume = 4/3*phi * r*r*r;
        break;

        case '4':
        bangun= "Prisma Segitiga"; 
        cout << "Masukkan ukuran dalam cm" << endl;
        cout << "Sisi a segitiga: "; cin >> a;
        cout << "Sisi b segitiga: "; cin >> b;
        cout << "Sisi c segitiga: "; cin >> c;
        cout << "Tinggi segitiga : "; cin >> t;
        cout << "Tinggi Prisma : "; cin >> tp;
        luas = (2*0.5*a*t)+(a*tp)+(b*tp)+(c*tp);
        volume = 0.5*a*t*tp;
        break;

        default:
        cout << "Inputan salah" << endl;
        return 0;

    }


    cout << "Luas permukaan " << bangun << " tersebut = " << fixed << setprecision(2) << luas << " cm^2." << endl;
    cout << "Volume " << bangun << " tersebut = " << fixed << setprecision(2) << volume << " cm^3."; 

    return 0;
}