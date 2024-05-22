#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int num;
    
    cout << "Masukkan deretan angka (akhiri dengan bukan angka): ";
    
    while (cin >> num) {
        numbers.push_back(num);
    }
    
    cout << "Output:";
    for (int n : numbers) {
        cout << " " << n;
    }
    cout << endl;
    
    cout << "Panjang Vektor: " << numbers.size() << endl;
    
    while (!numbers.empty()) {
        cout << numbers.front() << endl;
        numbers.erase(numbers.begin());
    }
    
    cout << "Panjang Vektor: " << numbers.size() << endl;
    
    return 0;
}