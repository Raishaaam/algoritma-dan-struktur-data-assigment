#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mencari indeks pertama dari suatu karakter dalam string
int findIndex(const string& sentence, char target) {
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence[i] == target) {
            return i;
        }
    }
    return -1
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    char huruf;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    int indeks = findIndex(kalimat, huruf);

    if (indeks != -1) {
        cout << "Huruf '" << huruf << "' ditemukan pada indeks ke-" << indeks << " dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}