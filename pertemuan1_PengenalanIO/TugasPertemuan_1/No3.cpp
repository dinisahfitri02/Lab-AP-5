#include <iostream>

using namespace std;

int main() 
{
    system("cls");
    double Meter, Kilometer;

    cout << "Masukkan jarak dalam meter: ";
    cin >> Meter;
    Kilometer = Meter*0.001;
    cout << "Jarak dalam kilometer: " << Kilometer << " km" << endl;
}