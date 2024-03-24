#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> book;

    book["Laut Bercerita"] = 90000;
    book["Pulang"] = 80000;
    book["Pergi"] = 75000;

    cout << "Laut Bercerita memiliki harga: " << book["Laut Bercerita"] << endl;
    cout << "Pulang memiliki harga: " << book["Pulang"] << endl;
    cout << "Pergi memiliki harga: " << book["Pergi"] << endl;

    string raisha;
    cout << "\nCek Buku: ";
    cin >> raisha;

    if (book.find(raisha) != book.end()) {
        cout << "Stok tersedia, silahkan tanya penjual." << endl;
    } else {
        cout << "Stok tidak tersedia, silahkan kembali besok." << endl;
    }

    return 0;
}



