#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk memeriksa apakah sebuah karakter merupakan huruf vokal
bool isVowel(char ch) {
    ch = tolower(ch); // Ubah huruf menjadi huruf kecil untuk memudahkan perbandingan
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

// Fungsi untuk menghitung jumlah huruf vokal dalam sebuah kalimat
int countVowels(const string& sentence) {
    int count = 0;
    for (char ch : sentence) {
        if (isVowel(ch)) {
            count++;
        }
    }
    return count;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    int jumlahVokal = countVowels(kalimat);

    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlahVokal << endl;

    return 0;
}
