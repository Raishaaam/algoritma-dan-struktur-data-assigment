#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct Buku {
  string judulBuku;
  string pengarang;
  string penerbit;
  int tebalHalaman;
  int hargaBuku;
};

int main() {
  // Menentukan jumlah buku yang ingin disimpan
  int jumlahBuku;
  cout << "Berapa banyak buku yang ingin Anda masukkan? ";
  cin >> jumlahBuku;

  // Deklarasi array struct buku
  Buku daftarBuku[jumlahBuku];

  // Mengisi data buku dengan interaksi pengguna
  for (int i = 0; i < jumlahBuku; i++) {
    cout << "\n\tData Buku ke-" << i + 1 << endl;
    cout << "\tJudul Buku: ";
    cin.ignore(); // Mengabaikan newline character
    getline(cin, daftarBuku[i].judulBuku);

    cout << "\tPengarang: ";
    getline(cin, daftarBuku[i].pengarang);

    cout << "\tPenerbit: ";
    getline(cin, daftarBuku[i].penerbit);

    cout << "\tTebal Halaman: ";
    cin >> daftarBuku[i].tebalHalaman;

    cout << "\tHarga Buku: Rp ";
    cin >> daftarBuku[i].hargaBuku;
  }

  // Menampilkan daftar buku
  cout << "\n\tDaftar Buku" << endl;
  for (int i = 0; i < jumlahBuku; i++) {
    cout << "\n\tBuku ke-" << i + 1 << endl;
    cout << "\tJudul Buku: " << daftarBuku[i].judulBuku << endl;
    cout << "\tPengarang: " << daftarBuku[i].pengarang << endl;
    cout << "\tPenerbit: " << daftarBuku[i].penerbit << endl;
    cout << "\tTebal Halaman: " << daftarBuku[i].tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku: Rp " << daftarBuku[i].hargaBuku << endl;
  }

  return 0;
}
