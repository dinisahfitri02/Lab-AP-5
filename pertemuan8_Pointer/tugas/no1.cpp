#include <iostream>
using namespace std;

int main() {
    system("cls");
    int i,angka,nilai;
    cout<<"Masukkan batas angka : ";
    cin>>angka;
    int j=0;
    int deret[angka/2];
    for (i=1; i<=angka; i++){
        if (i % 2==1 ){
            deret[j]=i;
            j+=1;
        }
    }

    for (i=0; i<angka/2; i++){
        cout<<" angka "<<deret[i]<<" menempati alamat memori = "<<&deret[i]<<endl;
    }
    return 0;
}