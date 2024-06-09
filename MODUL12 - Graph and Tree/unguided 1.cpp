#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Graf {
    string *namaSimpul;
    int Raisha_2311110002;
    int **jarak;
    int jumlahSimpul;
};

void tampilkanGraf(Graf g) {
    cout << "  ";
    for (int i = 0; i < g.jumlahSimpul; i++) {
        cout << setw(6) << g.namaSimpul[i];
    }
    cout << endl;
    for (int i = 0; i < g.jumlahSimpul; i++) {
        cout << setw(4) << g.namaSimpul[i];
        for (int j = 0; j < g.jumlahSimpul; j++) {
            cout << setw(6) << g.jarak[i][j];
        }
        cout << endl;
    }
}

int main() {
    Graf g;

    cout << "Silakan masukan jumlah simpul: ";
    cin >> g.jumlahSimpul;
    cin.ignore();

    g.namaSimpul = new string[g.jumlahSimpul];
    g.jarak = new int *[g.jumlahSimpul];
    for (int i = 0; i < g.jumlahSimpul; i++) {
        g.jarak[i] = new int[g.jumlahSimpul]();
    }

    cout << "Silakan masukan nama simpul" << endl;
    for (int i = 0; i < g.jumlahSimpul; i++) {
        cout << "Simpul " << i + 1 << " : ";
        getline(cin, g.namaSimpul[i]);
    }

    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < g.jumlahSimpul; i++) {
        for (int j = 0; j < g.jumlahSimpul; j++) {
            cout << g.namaSimpul[i] << "--> " << g.namaSimpul[j] << " = ";
            cin >> g.jarak[i][j];
        }
    }

    cout << endl;
    tampilkanGraf(g);

    return 0;
}
