#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct Buku {
  string judulBuku[5];
  string pengarang[5];
  string penerbit[5];
  int tebalHalaman[5];
  int hargaBuku[5];
};

int main() {
  // Mendeklarasikan variabel buku dengan tipe Buku
  Buku buku;

  // Mengisi data ke dalam array di dalam variabel buku
  buku.judulBuku[0] = "Hello Cello";
  buku.judulBuku[1] = "Hilmy Milan";
  buku.judulBuku[2] = "Hello (Again), Cello";
  buku.judulBuku[3] = "Pulang";
  buku.judulBuku[4] = "Pergi";

  buku.pengarang[0] = "Nadia Ristivani";
  buku.pengarang[1] = "Nadia Ristivani";
  buku.pengarang[2] = "Nadia Ristivani";
  buku.pengarang[3] = "Tere Liye";
  buku.pengarang[4] = "Tere Liye";

  buku.penerbit[0] = "Bukune";
  buku.penerbit[1] = "Bukune";
  buku.penerbit[2] = "Bukune";
  buku.penerbit[3] = "Republika Penerbit";
  buku.penerbit[4] = "Republika Penerbit";

  buku.tebalHalaman[0] = 280;
  buku.tebalHalaman[1] = 297;
  buku.tebalHalaman[2] = 250;
  buku.tebalHalaman[3] = 404;
  buku.tebalHalaman[4] = 455;

  buku.hargaBuku[0] = 99000;
  buku.hargaBuku[1] = 85000;
  buku.hargaBuku[2] = 93500;
  buku.hargaBuku[3] = 89000;
  buku.hargaBuku[4] = 84150;

  // Menampilkan informasi buku
  cout << "\tDaftar Buku" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "\n\tBuku ke-" << i + 1 << endl;
    cout << "\tJudul Buku: " << buku.judulBuku[i] << endl;
    cout << "\tPengarang: " << buku.pengarang[i] << endl;
    cout << "\tPenerbit: " << buku.penerbit[i] << endl;
    cout << "\tTebal Halaman: " << buku.tebalHalaman[i] << " halaman" << endl;
    cout << "\tHarga Buku: Rp " << buku.hargaBuku[i] << endl;
  }

  return 0;
}