#include <iostream>

using namespace std;

int main() {
    system("CLS");
    char str[] = "K O M P U T E R"; 
    char *ptr = str; 
    ptr +=8;
    cout << "Huruf kelima dari string " << str << " adalah: " << *ptr << endl;

    return 0;
}