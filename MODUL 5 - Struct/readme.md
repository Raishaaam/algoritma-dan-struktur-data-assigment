Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 5 String</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

Struct adalah koleksi dari variabel yang dinyatakan dengan sebuah nama, dengan sifat setiap variabel dapat memiliki tipe yang berlainan[1]. Suatu struct adalah pengelompokkan dari variabel-variabel yang berada dalam satu nama yang sama[2]. Suatu struct dapat terdiri dari kumpulan variabel-variabel yang berbeda tipenya dalam satu nama 
tetapi berkaitan[2]. Salah satu tipe data terstruktur (structure data type) bentukannya terdiri dari beberapa elemen yang disebut `field`[3]. Setiap `field` menggambarkan informasi tertentu dan tipe `field` sudah dikenal baik itu tipe data dasar atau tipe data bentukan lainnya[3]. 

Struct data adalah sebuah skema organisasi yang diterapkan pada data sehingga data dapat diinterprestasikan dan sehingga operasi-operasi spesifik dapat dilaksanakan pada data tersebut[4]. Struct bermanfaat untuk mengelompokkan sejumlah data dengan tipe yang berlainan[5]. Masing –masing tipe elemen struktur dapat berlainan[5]. Adapun variabel struktur menyatakan bahwa variabel struktur yang dideklarasikan bisa lebih dari satu dan dipisahkan dengan tanda titik koma[5].

### Deklarasi Struct 
1. struct nama_tipe_struktur 
2. {  tipe field-1;
3. tipe field-2;
4. tipe field-n;
5. } variabel_struktur1, ..., variabel struktur-n;

## Guided

### 1.  Buatlah sebuah struktur dengan nama buku yang berisi judul_buku,pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku;
    string pengarang;
    string penerbit;
    int tebalHalaman;
    int hargaBuku;
};

int main() {
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku = "The Alpha Girl's Guide";
    favorit.pengarang = "Henry Manampiring";
    favorit.penerbit = "Gagas Media";
    favorit.tebalHalaman = 253;
    favorit.hargaBuku = 79000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit.judulBuku << endl;
    cout << "\tPengarang : " << favorit.pengarang << endl;
    cout << "\tPenerbit : " << favorit.penerbit << endl;
    cout << "\tTebal Halaman: " << favorit.tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit.hargaBuku << endl;
 
    return 0;
}
```

### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/6ea4b25f-080a-45c1-96e3-a36f16e732b8)

Program ini mengimplementasikan struct data bernama `buku` untuk menyimpan informasi tentang sebuah buku. Pada struct ini memiliki beberapa variabel, yaitu `judulBuku`, `pengarang`, `penerbit`, `tebalHalaman`, dan juga `hargaBuku`. Pada fungsi `main()` terdapat variabel `favorit` dideklarasikan sebagai tipe struct `buku` dan diisi dengan data informasi tentang buku favorit. Informasi ini kemudian akan ditampilkan menggunakan perintah `cout`.

Output pada program ini menampilkan informasi tentang buku favorit pengguna yaitu mencakup judul, pengarang, penerbit, tebal halaman, dan harga buku.
 
### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.

```C++
include <iostream>
using namespace std;

struct hewan {
    string namaHewan;
    string jenisKelamin;
    string caraBerkembangbiak;
    string alatPernafasan;
    string tempatHidup;
    bool Karnivora;
};

struct hewanDarat {
    int jumlahKaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    string bentukSirip;
    string bentukPertahananDiri;
};

int main() {
    hewanDarat kelinci; // Menggunakan tipe data hewanDarat untuk kelinci
    kelinci.jumlahKaki = 4;
    kelinci.menyusui = true;
    kelinci.suara = "Citcit";

    hewanLaut ikan; // Menggunakan tipe data hewanLaut untuk ikan
    ikan.bentukSirip = "Sirip ekor";
    ikan.bentukPertahananDiri = "Sisik";

    hewan serigala; // Tetap menggunakan tipe data hewan untuk serigala
    serigala.namaHewan = "Serigala";
    serigala.jenisKelamin = "Jantan";
    serigala.caraBerkembangbiak = "Melahirkan";
    serigala.alatPernafasan = "Paru-paru";
    serigala.tempatHidup = "Hutan terbuka";
    serigala.Karnivora = true;

    cout << "\t\tHewan" << endl;
    cout << "\t" << serigala.namaHewan << endl;
    cout << "\tJenis kelamin : " << serigala.jenisKelamin << endl;
    cout << "\tCara berkembangbiak : " << serigala.caraBerkembangbiak << endl;
    cout << "\tAlat pernafasan : " << serigala.alatPernafasan << endl;
    cout << "\tTempat hidup : " << serigala.tempatHidup << endl;
    cout << "\tKarnivora : " << (serigala.Karnivora ? "Yes" : "No") << endl << endl;

    cout << "\t\tHewan Darat" << endl;
    cout << "\tKelinci" << endl;
    cout << "\tJumlah kaki : " << kelinci.jumlahKaki << endl;
    cout << "\tMenyusui : " << (kelinci.menyusui ? "Yes" : "No") << endl;
    cout << "\tSuara : " << kelinci.suara << endl << endl;

    cout << "\t\tHewan Laut" << endl;
    cout << "\tIkan" << endl;
    cout << "\tBentuk sirip : " << ikan.bentukSirip << endl;
    cout << "\tBentuk pertahanan diri: " << ikan.bentukPertahananDiri << endl;

    return 0;
}
```
### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/acdaa401-1f39-4f20-88d3-1f7ed6ed4f2c)

Program ini merupakan contoh dari sebuah penggunaan struck data dalam C++. Dalam program terdapat tiga struct data, yaitu `hewan`, `hewanDarat`, dan `hewanLaut`. Pada struct `hewan` terdapat beberapa anggota, seperti `namaHewan`, `jenisKelamin`, `caraBerkembangbiak`, `alatPernapasan`, `tempatHidup`, dan `Karnivora`. Struktur `hewanDarat` dan `hewanLaut` memiliki beberapa anggota yang berbeda-beda. Pada fungsi `main()` terdapat tiga variabel deklarasi dengan tiga data struktur yang berbeda. Pada variabel `kelinci` dideklarasikan dengan tipe data `hewanDarat`, variabel `ikan` dideklarasikan dengan tipe data `hewanLaut`, dan variabel `serigala` dideklarasikan dengan tipe data adalah `hewan`.

Output dari program ini akan menampilkan sebuah informasi tentang serigala, kelinci, dan juga ikan yang termasuk kedalam golongan hewan, hewan darat atapun hewan laut. Dalam hal ini akan meliputi informasi seperti jenis kelamin, cara berkembangbiaknya, alat pernapasan, tempat hidup jumlah kaki dan lain sebagainya.



## Unguided 

### 1. [Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.!]

```C++
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
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/8043f37f-8393-474a-a30e-7fe1d4de6bd5)

Program ini merupakan mengimplementasikan struct data bernama `buku` untuk menyimpan informasi tentang sebuah buku. Dalam struct ini memiliki beberapa variabel yaitu, `judulBuku`, `pengarang`, `penerbit`, `tebalHalaman`, dan juga `hargaBuku`. Pada fungsi `main()` terdapat variabel favorit yang dideklarasikan sebagai tipe `buku` dan diisi dengan data informasi tentang buku favorit. Pada iniformasi ini lah yang akan ditampilkan pada output program menggunakan perintah `cout`. 

Output dari program ini akan menampilkan list tentang lima buku. yang termasuk dalam kelompok `Buku`. Ini akan mencakup informasi seperti judul buku, pengarang, penerbit, tebal halaman, dan juga harga buku. Informasi tersebut akan dicetak menggunakan perulangan `for` dengan panjang lima.

### 2. [Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?]

~~~C++
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
~~~

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/decccace-6e38-4020-9eba-ad38758d92c5)

Program ini merupakan sebuah program C++ yang meminta pengguna untuk memasukkan jumlah buku yang ingin disimpan. Program membutuhkan library `iostream` dan mendefinisikan sebuah struct `Buku` dengan beberapa anggota, yaitu `judulBuku`, `pengarang`, `penerbit`, `tebalHalaman`, dan `hargaBuku`. Dalam fungsi `main()` program akan meminta pengguna untuk memasukkan jumlah buku yang ingin disimpan. Setelah itu, program akan membuat array dari struct `Buku` dengan panjang yang sesuai dengan jumlah buku yang dimasukkan. Setelah itu, program akan meminta pengguna untuk mengisi beberapa data setiap buku, yaitu judul, pengarang, penerbit, tebal halaman, dan juga harga buku. Data kemudian akan disimpan dalam array struct `daftarBuku`. 

Setelah semua data telah dimasukkan, program akan menampilkan daftar buku yang telah dimasukkan. Daftar buku tersebut akan berisi informasi tentang judul, pengarang, penerbit, tebal halaman, dan harga buku.


Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar searching. Pada laporan ini menjelaskan definisi struct, dengan cara mendeklarasikannya, cara mengisi data ke dalam struct, dan juga cara menampilkan data dari struct. Laporan ini juga memberikan contoh dari program C++ yang menggunakan struct untuk menyimpan informasi tentang buku. Dalam hal ini pengguna  dapat menggunakan program ini untuk mempelajari cara kerja struct dan bagaimana mereka dapat digunakan untuk mengelola data dengan lebih efektif. Secara keseluruhan, laporan ini diharapkan dapat membantu pembaca untuk memahami konsep dasar struct dan bagaimana mereka dapat digunakan untuk mengembangkan program yang lebih baik. 

## Referensi
[1] A. S. RMS, "Struktur Data dan Algoritma dengan C++," CV. AA. RIZKY, 2019.  
    Available:https://www.google.co.id/books/edition/STRUKTUR_DATA_DAN_ALGORITMA_DENGAN_C++/GP_ADwAAQBAJ?hl=id&gbpv=1&dq=inauthor:+Anita+Sindar+RMS,+ST.,+M.TI&pg=PR7&printsec=frontcover   
[2] U. Ta, "Pemograman C++ Bab 14 Struct.pdf," Academia.edu.  
    Available: file:///C:/Users/acerN/Downloads/Pemograman_C_Bab_14_Struct_pdf.pdf  
[3] R. I. Oktavian, "MODUL PRAKTIKUM STRUKTUR DATA BAHASA PEMROGRAMAN C++ [PEMBAHASAN]," Universitas Lambung Mangkurat, Academia.edu.  
    Available:https://www.academia.edu/35490729/MODUL_PRAKTIKUM_STRUKTUR_DATA_BAHASA_PEMROGRAMAN_C_PEMBAHASAN_   
[4] Modul Praktikum Algoritma dan Struktur Data, "Percobaan 4: Penggunaan pointer untuk bilangan fibonacci," Modul Praktikum Algoritma dan Struktur Data, FT – Jurusan TE – S1 PTI & S1 TI, 2015.  
    Available: https://elektro.um.ac.id/wp-content/uploads/2016/09/Modul-1-Struct-Aray-Pointer-2015.pdf   
[5] Y. R. Nasution, "MODUL STRUKTUR DATA PEMROGRAMAN C++," Book, February 2020.  
    Available: /Users/acerN/Downloads/ModulPemrogramanC.pdf
