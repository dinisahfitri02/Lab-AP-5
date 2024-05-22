#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int a, b;
    int *ptr1, *ptr2;

    cout << "masukkan bilangan pertama : ";
    cin >> a;
    cout << "masukkan bilangan kedua: ";
    cin >> b;
    ptr1 = &a;
    ptr2 = &b;
    if (*ptr1 > *ptr2)
        cout << *ptr1 << " > " << *ptr2;
    else if (*ptr2 > *ptr1)
        cout << *ptr1 << " < " << *ptr2;
    else
        cout << *ptr1 << " = " << *ptr2;
    return 0;
}