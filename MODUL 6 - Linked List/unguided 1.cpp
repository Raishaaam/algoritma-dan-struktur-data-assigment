#include <iostream>
using namespace std;

// Definisi Node
struct Node {
    string nama;
    string nim;
    Node* next;
};

// Inisialisasi Head
Node* head = NULL;

// Fungsi untuk menambahkan data di depan
void tambahDepan() {
    string nama, nim;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan Nama: ";
    cin.ignore(); // Membersihkan buffer agar getline() berfungsi dengan baik
    getline(cin, nama);

    Node* newNode = new Node();
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = head;
    head = newNode;
    cout << "Data berhasil ditambahkan" << endl;
}

// Fungsi untuk menampilkan data
void tampilkanData() {
    cout << "==================================" << endl;
    cout << "         DATA MAHASISWA           " << endl;
    cout << "==================================" << endl;
    cout << "NIM\t\tNama" << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->nim << "\t\t" << temp->nama << endl;
        temp = temp->next;
    }
    cout << endl;
}

// Fungsi utama
int main() {
    int operasi;

    do {
        cout << "==================================" << endl;
        cout << "   PROGRAM MANAJEMEN MAHASISWA   " << endl;
        cout << "==================================" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "==================================" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                tambahDepan();
                break;
            case 2:
                tampilkanData();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid." << endl;
        }
    } while (operasi != 0);

    return 0;
}
