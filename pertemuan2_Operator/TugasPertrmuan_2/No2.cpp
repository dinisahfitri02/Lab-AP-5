#include <iostream>
using namespace std;

int main() 
{
    system("cls");
    int a,b,c;
    cout << "Menghitung nilai akar-akar dari ax^2 + bx + c " << endl;
    cout << "Nilai a = ";
    cin >> a;
    cout << "Nilai b = ";
    cin >> b;
    cout << "Nilai c = ";
    cin >> c;
    double D = b*b-4*a*c; //menghitung nilai diskriminan
    
    if (D > 0)  //akar akar real jika diskriminan>0
    {
    double x1 = -b + D*D / (2*a); //nilai akar x1
    double x2 = -b - D*D / (2*a); //nilai akar x2
    cout << "akar akar persamaan kuadrat tersebut adalah x1= " << x1 <<" & x2= " << x2;
    }
    else if (D=0)// persamaan memiliki akar-akar kembar jika Diskriminan=0
    {
    double x =  -b / (2*a); //akar kembar
    cout << "persamaan tersebut memiliki akar-akar kembar x1 = x2 = " << x;
    }
    else //jika Diskriminan < 0
    {
    cout << "persamaan tersebut memiliki akar-akar tidak real";
    }

    return 0;
}