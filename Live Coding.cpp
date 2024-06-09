#include <iostream>

using namespace std;

int main() {
    int n = 12;
    int angka[n] = {12, 5, 5, 3, 8, 10, 11};
    int cari = 12;
    bool ketemu = false;
    int i;

    for (i = 0; i < n; i++) {
        if(angka[i] == cari) {
            ketemu = true;
            break;
        }
    }
    cout << "\t Mencari nilai sekuential\n" << endl;
    cout << "data: {12, 5, 5, 3, 8, 10, 11}" << endl;

    if (ketemu){
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}