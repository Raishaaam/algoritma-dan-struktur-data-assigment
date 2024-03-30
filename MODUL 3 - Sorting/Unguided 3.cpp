#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // Mendapatkan jumlah karakter dari user
  int n;
  cout << "Masukkan jumlah karakter: ";
  cin >> n;

  // Membuat array untuk menyimpan karakter
  char karakter[n];

  // Meminta user untuk memasukkan karakter satu per satu
  for (int i = 0; i < n; i++) {
    cout << "Karakter ke-" << i + 1 << ": ";
    cin >> karakter[i];
  }

  // Menampilkan urutan karakter sebelum sorting
  cout << "Urutan karakter sebelum sorting:" << endl;
  for (int i = 0; i < n; i++) {
    cout << karakter[i];
  }
  cout << endl;

  // Melakukan sorting karakter secara ascending
  sort(karakter, karakter + n);

  // Menampilkan urutan karakter setelah ascending sort
  cout << "Urutan karakter setelah ascending sort:" << endl;
  for (int i = 0; i < n; i++) {
    cout << karakter[i];
  }
  cout << endl;

  // Melakukan sorting karakter secara descending
  reverse(karakter, karakter + n);

  // Menampilkan urutan karakter setelah descending sort
  cout << "Urutan karakter setelah descending sort:" << endl;
  for (int i = 0; i < n; i++) {
    cout << karakter[i];
  }
  cout << endl;

  return 0;
}