#include <iostream>
using namespace std;

int sumNumber (int& num1, int& num2){
    num1 =15;
    num2 =25;
    return num1 + num2;

}
int main() {
    system("CLS");
    
    int num1=10, num2 =20;
    cout << "hasil = " << sumNumber(num1, num2)<< endl;

    cout << "nilai num1 = " << num1 << endl;
    cout << "nilai num2 = " << num2 << endl;
    
    
    return 0;
}