Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 10 Rekursif</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

`Rekursif` adalah proses pengulangan sesuatu dengan cara kesamaan diri[1]. Metode rekursif memecahkan masalah dengan memanggil salinan dirinya sendiri untuk mengerjakan masalah yang lebih kecil[2]. Kode rekursif umumnya lebih pendek dan lebih mudah ditulis daripada kode berulang[2]. Umumnya, loop diubah menjadi fungsi rekursif ketika dikompilasi atau diinterpretasikan[2]. Rekursif paling berguna untuk tugas-tugas yang dapat didefinisikan dalam hal subtugas serupa[2]. Misalnya, masalah sortir, pencarian, dan traversal sering kali memiliki solusi rekursif sederhana[2].

Fungsi rekursif yaitu melakukan sebagian tugas dengan memanggil dirinya sendiri untuk melakukan subtugas[2]. Pada titik tertentu, fungsi tersebut dapat menemukan subtugas yang dijalankannya tanpa memanggil dirinya sendiri[2]. Dalam kasus ini, jika fungsinya tidak berulang, disebut kasus dasar. Yang pertama, dimana fungsi memanggil dirinya sendiri untuk melakukan subtugas, disebut sebagai kasus ekursif. Kita dapat menulis semua fungsi rekursif menggunakan format:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/3bbf4d65-5301-4d4e-8ba6-dd69480e9976)

Contoh ini, jika memanggil fungsi print dengan n=4, secara visual tugas memori:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/266f6cbf-aa69-46ac-81d5-71bd3b9da4dc)

Contoh menggunakan fungsi dari faktorial dengan n=4:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/22dd30f4-f273-4f78-932d-db7f7706952e)

### Contoh Algoritma Rekursi
1. Deret fibonacci, temuan faktorial.
2. Gabung sortir, sortir cepat.
3. Pencarian Biner.
4. Traversal pohon dan banyak masalah pohon: InOrder, PreOrder PostOrder Graph Traversals: DFS [Depth First Search] dan BFS [Breadth First Search].
5. Contoh Pemrograman Dinamis.
6. Algoritma Bagi dan Taklukkan.
7. Menara Hanoi.
8. Algoritma Backtracking.

### Kelemahan Rekursif
1. `Stack Overflow dan Konsumsi Memori`[3].
2. `Pertimbangan Kinerja`[3].
3. `Analisis Kompleksitas dan Teknik Optimasi`[3].

## Guided 1

### 1.	Rekursif Langsung (Direct Recursion)
```C++
#include <iostream>

using namespace std;

void countdown(int n) {
    if (n == 0) {
        return;
    }

    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursi Langsung: ";
    countdown(5);
    cout << endl;
    return 0;
}

```

### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/dadc353b-0da3-4b7c-b63a-926067a80b9e)

Program ini adalah implementasi fungsi rekursif untuk melakukan countdown dari sebuah bilangan bulat n. Terdapat fungsi `countdown` yang menerima sebuah bilangan bulat n sebagai argumen dan memeriksa apakah n sama dengan 0. Jika iya, fungsi tersebut akan mengembalikan nilai tanpa mencetak apa-apa. Jika tidak, fungsi tersebut akan mencetak nilai dari n dan memanggil dirinya sendiri secara rekursif dengan argumen n - 1. Terdapat `main` mencetak teks "Rekursif Langsung: " dan kemudian memanggil fungsi `countdown` dengan argumen 5. Setelah fungsi `countdown` kembali, fungsi `main` akan mencetak karakter newline untuk pindah ke baris yang baru.

Hasil dari output di atas akan dihasilkan karena fungsi `countdown` mencetak angka dari 5 ke 1, dengan setiap angka dipisahkan oleh spasi. Fungsi `main` mencetak teks "Rekursif Langsung:" sebelum memanggil fungsi `countdown`.

### 2. Rekursif Tidak Langsung (Indirect Recursion)

```C++
#include <iostream>

using namespace std;

void functionB(int n);

void functionA(int n) { //direct
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); //mengurangi
    }
}
 
void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); //membagi
    }
} 

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/a767c059-bc71-4ba9-b39b-72e8a4e2419f)

Program ini merupakan contoh rekursif tidak langsung, yaitu sebuah fungsi yang memanggil fungsi lain yang juga berbasis rekursif. Fungsi `functionA` merupakan fungsi utama yang dipanggil di dalam `main`, dan memanggil fungsi `functionB` secara rekursif. Fungsi `functionA` menerima sebuah parameter `n` dan mencetak nilai `n` ke layar, lalu memanggil fungsi `functionB` denga mengurangi nilai `n` sebesar 1. Sedangkan fungsi `functionB` juga menerima sebuah parameter `n` dan mencetak nilai `n` ke layar, lalu memanggil fungsi `functionA` dengan nilai `n` yang dibagi 2.

Hasil output dari kode program diatas adalah "5 2 3 1 2 1", yaitu hasil dari pemanggilan fungsi `functionA` dan `functionB` secara rekursif dengan dengan memulai dari nilai `n` yang diberikan di dalam `main`, yaitu 5. Fungsi `functionA` pertama kali mencetak nilai 5, lalu memanggil fungsi `functionB` dengan nilai 4. Fungsi `functionB` mencetak nilai 4, lalu memanggil fungsi `functionA` dengan nilai 2. Fungsi `functionA` mencetak nilai 2, lalu memanggil fungsi `functionB` dengan nilai 1. Fungsi `functionB` mencetak nilai 1, lalu memanggil fungsi `functionA` dengan nilai 0 yang tidak memenuhi kondisi rekursif, sehingga fungsi `functionA` berhenti.

## Unguided
### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

~~~C++
#include <iostream>
using namespace std;

int faktorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * faktorial(n - 1);
  }
}

int main() {
  int bilangan;

  cout << "Masukkan bilangan bulat positif: ";
  cin >> bilangan;

  cout << "Faktorial dari " << bilangan << " adalah: " << faktorial(bilangan) << endl;

  return 0;
}
~~~

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/dff26d16-bc8a-4647-9901-551fa6b9a076)

Program ini merupakan sebuah sebuah perhitungan nilai faktorial dari sebuah bilangan bulat positif menggunakan metode rekursif langsung. Pada program terdiri dari dua bagian, yaitu fungsi `faktorial` yang menghitung nilai faktorial dan juga fungsi `main` yang mengambil input dari pengguna dan menampilkan hasilnya. Fungsi `faktorial` menerima sebuah argumen integer `n` dan mengembalikan nilai faktorialnya dengan menggunakan rekursi, yaitu dengan memanggil dirinya dengan argumen `n-1` hingga mencapai kondisi basis `n=0`. Hasilnya kemudian dikalikan dengan `n` dan dikembalikan sebagai hasil akhir. Pada fungsi `main`, kemudian program akan meminta pengguna untuk memasukkan bilangan bulat positif, kemudian memanggil fungsi `faktorial` dengan input tersebut dan menampilkan hasilnya ke layar. 

Pada hasil output program diatas, pengguna memasukkan 5, program akan menampilkan "Faktorial dari 5 adalah: 120", karena 5! =  5 × 4 × 3 × 2 × 1 = 120.

### 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!

```C++
#include <iostream>
using namespace std;

int functionA(int n, int result = 1) {
  if (n == 0) {
    return result;
  } else {
    return functionA(n - 1, n * result);
  }
}

int functionB(int n) {
  return functionA(n);
}

int main() {
  int bilangan;

  cout << "Masukkan bilangan bulat positif: ";
  cin >> bilangan;

  cout << "Faktorial dari " << bilangan << " adalah: " << functionB(bilangan) << endl;

  return 0;
}
```

### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/468d33ea-45bf-42dd-a515-f95c6fe1ed14)

Pada hasil kode program diatas merupakan perhitungan nilai faktorial dari sebuah bilangan bulat menggunakan metode rekursif tidak langsung. Program ini terdapat dua fungsi, yaitu `functionA` dan `functionB`. Fungsi `functionA` menghitung nilai faktorial dengan menggunakan rekursif, dimana jika `n` sama dengan 0 maka fungsi akan mengembalikan nilai `result`, tetapi jika `n` tidak sama dengan 0 maka fungsi akan memanggil dirinya sendiri dengan `n-1` dan `n*result` sebagai argumen, Fungso `functionB` hanya memanggil fungsi `functionA` dengan argumen `n`. Pada bagian `main`, program akan meminta penggunakan untuk memasukkan sebuah bilangan bulat positif, kemudian akan menampilkan hasil faktorial dari bilangan tersebut menggunakan fungsi `functionB`,

Pada hasil output program diatas, pengguna memasukkan 5, program akan menampilkan "Faktorial dari 5 adalah: 120", karena 5! =  5 × 4 × 3 × 2 × 1 = 120.

Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar rekursi, termasuk cara mendeklarasikan, mengisi data, dan menampilkan data secara rekursif. Dengan menyertakan contoh program C++ yang menggunakan rekursi untuk memecahkan masalah, laporan ini memungkinkan pengguna mempelajari cara kerja rekursi dan penggunaannya dalam mengelola data. Secara keseluruhan, laporan ini diharapkan dapat membantu pembaca memahami konsep dasar rekursi dan mengaplikasikannya untuk mengembangkan program yang lebih baik. Pada intinya, laporan ini membantu memahami konsep dasar rekursi dan aplikasinya dalam program yang lebih baik.

## Referensi
[1] A. S. Kom. Anisya, "Modul Praktikum Struktur Data - Rekursif," Institut Teknologi Padang, Padang, Indonesia.
    Available: https://sisfo.itp.ac.id/bahanajar/BahanAjar/Anisya/Modul%202%20-%20Rekursi.pdf
[2] J. T. Santoso, "STRUKTUR DATA dan ALGORITMA (Bagian 1)," Universitas Sains & Teknologi Komputer (Universitas STEKOM), 2021.
    Available: https://digilib.stekom.ac.id/assets/dokumen/ebookfeb_79fedb4a8e12bce66ca9d67971af2563167f7d45_164187510 pdf
[3] S. Mattoo, "Recursion in Data Structure," Apr 16, 2024.
    Available:https://intellipaat.com/blog/recursion-in-data-structure/
