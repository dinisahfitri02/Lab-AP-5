#include <iostream>
using namespace std;

int operasi(int num1, int num2){
    return num1*num2;
}
float operasi(int num1, int num2){
    return num1/num2;
}
int main() {
    system("CLS");
    cout << "hasil perkalian : " <<operasi(10, 5)<< endl;
    cout << "hasil perkalian : " <<operasi((10.2), (5.1))<< endl;
    
    
    
    return 0;
}