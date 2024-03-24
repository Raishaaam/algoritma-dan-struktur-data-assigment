#include <iostream>
using namespace std;

int KelilingPersegi(int sisi) {
    return 4 * sisi;
}

float KelilingPersegi(float sisi) {
    return 4 * sisi;
}

int main() {
    int sisiInt; 
    float sisiFloat; 

    cout << "Hitung Persegi" << endl;
    cout << "Masukkan Sisi :" ; cin >> sisiInt;
    cout << "Keliling Persegi (int) :" << KelilingPersegi(sisiInt)  << endl;

    cout << "Masukkan Sisi :" ; cin >> sisiFloat;
    cout << "Keliling Persegi (float) :" << KelilingPersegi(sisiFloat) << endl;
    
    return 0;
} 