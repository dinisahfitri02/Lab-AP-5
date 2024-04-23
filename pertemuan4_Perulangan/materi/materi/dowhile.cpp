#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int i,j,k,n;

    cout << "Tinggi : ";
    cin >> n;

    for (i=n;i>0;i--){
        for (j=i-1;j>0;j--){
            cout << " ";
        }
        for (k=i;k>=j;k--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}