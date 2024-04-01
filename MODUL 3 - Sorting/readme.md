Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 3 Sorting</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

Sorting adalah proses pengurutan data yang sebelumnya disusun secara acak sehingga menjadi tersusun secara teratur menurut suatu aturan tertentu[1]. Secara umum bisa didefinisikan sebagai proses untuk menyusun kembali himpunan obyek yang menggunakan aturan tertentu[2]. 

### Jenis Sorting
Pada dasarnya ada dua macam urutan yang biasa digunakan dalam suatu proses sorting:
1. Urutan naik `ascending`, mengurutkan dari data yang mempunyai nilai paling kecil sampai paling besar[5].
2. Urut turun `descending`, mengurutkan dari data yang mempunyai nilai paling besar sampai paling kecil[5].

## Macam-macam Algoritma Sorting
### Bubble Sort
Bubble Sort adalah algoritma pengurutan dimana untuk mengurutkan item daftar dalam urutan naik dengan membandingkan dua nilai yang berdekatan. Jika nilai pertama lebih tinggi dari nilai kedua, nilai pertama mengambil posisi 
nilai kedua, sedangkan nilai kedua mengambil posisi nilai pertama. Jika nilai 
pertama lebih rendah dari nilai kedua, maka tidak ada swapping yang 
dilakukan. Proses ini diulang sampai semua nilai dalam daftar telah 
dibandingkan dan ditukar jika perlu. Setiap iterasi biasanya disebut pass. 
Jumlah pass dalam jenis gelembung sama dengan jumlah elemen dalam daftar 
minus satu[1].

### Keuntungan dan Kekurangan Bubble Sort.
Keuntungan:
1. Sangat mudah untuk memahami[1].
2. Berkinerja sangat baik ketika daftar sudah atau hampir diurutkan[1].
3. Tidak memerlukan memori yang luas[1].
4. Sangat mudah untuk menulis kode untuk algoritma[1].
5. Persyaratan ruang minimal dibandingkan dengan algoritma penyortiran lainnya[1].

Kelemahan:
1. Tidak berkerja dengan baik saat menyortir daftar besar. Dibutuhkan terlalu banyak waktu dan sumber daya[1].
2. Ini sebagian besar digunakan untuk tujuan akademik dan bukan aplikasi dunia nyata[1].
3. Jumlah langkah yang diperlukan untuk mengurutkan daftar adalah urutan n^2[1].

### Metode Pengurutan Bubble Sort.
1. Pengecekan dimulai dari data ke – 1 sampai dengan data ke – n[4].
2. Bandingkan data ke – n dengan data sebelumnya (n – 1), jika lebih kecil 
maka tukar bilangan tersebut dengan data yang didepannya (sebelumnya)[4]. 
satu persatu (n – 1, n – 2, n – 3, … , dan seterusnya)
3. Lakukan langkah ke – 2 sampai didapatkan urutan yang optimal[4].


### Insertion Sort
Insertion Sort merupakan algoritma yang efisien untuk mengurutkan angka yang mempunyai jumlah elemen sedikit[1]. Insertion Sort adalah mengurutkan dengan memasukkan elemen array pada posisi yang benar[3]. Metode 
penyisipan (Insertion sort) bertujuan untuk menjadikan bagian sisi kiri array 
terurutkan sampai dengan seluruh array berhasil diurutkan. Metode ini 
mengurutkan bilangan-bilangan yang telah dibaca; dan berikutnya secara 
berulang akan menyisipkan bilangan-bilangan dalam array yang belum terbaca 
ke sisi kiri array yang telah terurut[1].

### Metode Pengurutan Insertion Sort.
1. Pengecekan dimulai dari data ke – 1 sampai dengan data ke – n[4].
2. Pengurutan dilakukan dengan cara membandingkan data ke – I (dimana I 
dimulai dari data ke -2 sampai dengan data yang terakhir)[4].
3. Bandingkan data ke – I tersebut dengan datav sebelumnya (I – 1), jika lebih kecil maka data tersebut dapat disisipkan ke data awal 9depan) sesuai 
dengan posisi yang seharusnya[4].
4. Lakukan langkah ke – 2 dan 3 untuk bilangan selanjutnya (I = I +1) sampai 
didapatkan urutan yang optimal[4].

### Selection Sort
Selection Sort sering juga disebut dengan metode maksimum atau minimum. Metode maksimum karena didasarkan pada pemilihan data atau elemen maksimum sebagai dasar pengurutan. Konsepnya dengan memilih elemen maksimum kemudian mempertukarkan elemen maksimum tersebut dengan elemen paling akhir untuk urutan ascending dan elemen pertama untuk descending.Algoritma selection sort disebut juga dengan metode minimum karena didasarkan pada 
pemilihan elemen minimum sebagai dasar pengurutan[6]. 

### Metode Pengurutan Selection Sort.
1. Pengecekan dimulai dari data ke –1 sampai dengan data ke – n[4]. 
2. Tentukan bilangan dengan index terkecil dari data bilangan tersebut[4].
3. Tukar bilangan dengan index terkecil tersebut dengan bilangan pertama 
(I = 1) dari data bilangan tersebut[4].
4. Lakukan langkah 2 dan 3 untuk bilangan berikut (I = I + 1), sampai 
didapatkan urutan yang optimal[4].


## Guided

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort.

```C++
#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length) {
    bool not_sorted = true; 
    int j=0;
    double tmp;

    while (not_sorted) {
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i + 1] = tmp; //mindahin variabel
                not_sorted = true;
            }// end of if
        }// end of for loop
    }//end of while loop
}// end of bubble_sort

void print_array(double a[], int length) { //void itu fangsyen ga pake return
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99,99};

    cout << "Urutkan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutkan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```

### Output
![Screenshot 2024-03-30 142709](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/6adc4f67-536f-43d3-8e6b-2654cf2dde0d)

Program ini merupakan program untuk mengurutkan deret angka menggunakan bubble sort. Pada hasil outputnya dapat dilihat bahwa deret angka yang awalnya tidak berurutan menjadi deret angka yang terurut. Terdapat fungsi `bubble_sort` yang digunakan untuk menerima dua parameter, yaitu sebuah array of double `arr` dan sebuah integer `length` yang menyatakan panjang dari array tersebut. Variabel `not_sorted` yang merupakan bertype boolean dengan inisialisasi dengan nilai `true`, digunakan untuk menandakan apakah deret masih angka terurut atau sudah terurut. Lalu `j` bertipe integer dan inisialisasi dengan nilai `0` yang digunakan sebagai indeks untuk perulangan dalam fungsi. 

Kemudian setelah for selesai variabel `not_sorted` akan diubah menjadi true maka perulangan while akan dilakukan lagi. Setelah itu fungsi `print_array` yang digunakan untuk mencetak deret angka.

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort.

```C++
//Algoritma Insertion Sort
#include <iostream>

using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; 1 < length; i++) {
        j = i;

        while (j > 0 && arr[j - i] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
        }//end of while loop
    }//end of for loop
}

void print_array(char a[], int length) {

    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}
```
### Output
![Screenshot 2024-03-30 151854](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/f457d68d-c989-4c1e-a320-e02fdba4f48b)

Program ini merupakan program sebuah program yang digunakan untuk mengurutkan deret karakter menggunakan metode insertion sort yang berfungsi untuk mengurutkan karakter yang awalnya acak menjadi terurut secara ascending. 

Terdapat fungsi `insertion_sort`dan juga `print_array` untuk melakukan pengurutan dan juga menampilkan array. Lalu fungsi `main` digunakan untuk menginisialisasi array dengan karakter yang kemudian mencetak array sebelum dan sesudah pengurutan, serta memanggil fungsi `insertion_sort` untuk mengurutkan array.


## Unguided 

### 1. [Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!]

```C++
#include <stdio.h>
using namespace std;

// Fungsi selection sort mengurutkan array float dari besar ke kecil
void selection_sort(float arr[], int n) {
  for (int i = 0; i < n-1; i++) {
    int maxIndex = i;
    for (int j = i+1; j < n; j++) {
      if (arr[j] > arr[maxIndex]) {
        maxIndex = j;
      }
    }
    if (maxIndex != i) {
      float temp = arr[i];
      arr[i] = arr[maxIndex];
      arr[maxIndex] = temp;
    }
  }
}

void cetak_array(float a[], int length) {
  for(int i=0; i<length; i++) {
    printf("%.1f    ", a[i]);
  }
  printf("\n");
}

int main() {
  // Array IPS mahasiswa
  float arr[] = {3.8, 2.9, 3.3, 4.0, 2.4};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("IPS mahasiswa sebelum diurutkan: ");
  cetak_array(arr, n);
  selection_sort(arr, n);
  printf("IPS mahasiswa setelah diurutkan: ");
  cetak_array(arr, n);
  return 0;
}
```

#### Output:
![Screenshot 2024-03-30 164252](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/c716d443-c49f-4e46-8dfa-200a6c026ade)

Program ini digunakan untuk mengurutkan mahasiswa IPS dari kelas S1 IF 2016 G dengan menggunakan Algoritma Selection Sort. Di dalam kode program ini terdapat fungsi `selection_sort` yang digunakan untuk menukarkan elemen array dilakukan dengan menggunakan variabel `temp` sebagai tempat sementara, dan perbandingan `maxIndex` dengan `i` dilakukan untuk memastikan bahwa elemen yang telah ditemukan sebagai nilai maksimum tidak perlu dipindahkan. Kemudian fungsi `cetak_array` merupakan format output dari elemen array yang juga diubah dengan menambahkan `%If` pada printf untuk mengatur format outputnya menjadi desimal.

### Analisis Kompleksitas Waktu dan Ruang
Fungsi `selection_sort` memiliki kompleksitas waktu yaitu O(n2), yang dimana n adalah jumlah elemen dalam array. Terdapat dua loop yaitu loop luar yang berjalan n - 1 kali, dan pada loop dalam yang berjalan n - 1, n - 2, n - 3. Jumlah iterasi total adalah n(n-1)/2 yang ada pada notasi Big O dapat disederhanakan menjadi O(n^2).
Fungsi `cetak_array` menggunakan ruang konstan, tetapai hanya melakukan pencetakan dan tidak menyimpan data tambahan. Kompleksitas ruangnya O(1) sedangkah kompleksitas waktunya O(n). 

### 2. [Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo,dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!]

~~~C++
#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string nama[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(nama[j] > nama[j+1]) {
                swap(nama[j], nama[j+1]);
            }
        }
    }
}

int main() {
    string nama[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(nama)/sizeof(nama[0]);

    bubbleSort(nama, n);

    cout << "Nama warga Pak RT setelah diurutkan: ";
    for(int i = 0; i < n; i++) {
        cout << nama[i] << " ";
    }
    cout << endl;

    return 0;
}
~~~

#### Output:
![Screenshot 2024-03-30 171002](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/d2f03468-6f1e-4173-8e1e-198d6c3d6f1d)

Program ini digunakan untuk mengurutkan variabel dari 10 nama warga menggunakan bubble sort. Terdapat fungsi `bubblesort` yang digunakan untuk mengurutkan array string `nama`. Pada fungsi ini digunakan untuk membandingkan dua elemen yang berdekatan, dan memperlihatkan yang lebih besar atau kecil ke posisi yang benar. Terdapat fungsi `main` yang di dalamnya, terdapat array string `nama`  yang berisi nama-nama warga Pak RT. Fungsi `n` digunakan untuk menyimpan panjang array dalam variabel. Fungsi `bubblesort` dipanggil dengan parameter `nama` dan `n`. 

Program ini, juga menggunakan library `string` untuk mengelola string. Dengan fungsi `swap` yang digunakan untuk memperlihatkan dua elemen yang perlu ditukar.

### Analisis Kompleksitas Waktu dan Ruang
Fungsi `bubblesort` memiliki komplesitas waktu yang buruk yaitu O(n^2), yang dimana n merupakan jumlah elemen pada array. Hal ini karena terdapat dua loop yaitu loop luar yang berjalan n - 1 kali. Dengan jumlah iterasi total adalah n(n-1)/2 yang terdapay pada Big O dapat disederhanakan menjadi O(n^2).

### 3. [Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!]

![Screenshot 2024-03-30 173608](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/72a7a53b-828c-40be-ab5c-420ee6721695)

~~~C++
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
~~~

### Output
![Screenshot 2024-03-30 182518](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/91485f14-ee43-434c-bc6b-74b09ce926c5)

Program ini digunakan untuk mensorting karakter secara ascending dan descanding. Terdapat library `algorihtm` yang digunakan untuk fungsi sorting `sort()` dan `reserve()`. Terdapat fungsi `int n;` yang mendeklarasikan variabel `n` bertipe integer untuk menyimpan jumlah karakter dan fungsi `cout << "Masukkan jumlah karakter: ";` digunakan untuk menampilkan pesan kepada user untuk memasukkan jumlah karakter. Lalu fungsi `char karakter[n]` digunakan untuk mendeklarasikan array `karakter` dengan tipe data `char` (karakter) dan ukuran `n`. Perulangan `for` dengan loop sebanyak `n` kali untuk iterasi setiap karakter. Terdapat `cout << "Karakter ke-" << ": ";` digunakan untuk menampilkan pesan kepada user untuk memasukkan karakter ke-i+1. Kemudian `cin >> karakter[i]` digunakan untuk membaca input karakter dari user dan menyimpannya pada elemen ke-i array `karakter`. Lalu fungsi `sort(karakter, karakter + n);` menggunakan fungsi `sort()` dari nampespace `algorithm` untuk mengurutkan elemen array `karakter` secara ascending. Lalu yang terakhir adalah fungsi `return 0` yang menandakan program selesai dengan sukses.

### Analisis Kompleksitas Waktu dan Ruang
Pada kode ini menggunakan algoritma sort dari STL yang memiliki waktu O(n log n), yang dimana n adalah jumlah karakter yang dimasukkan. Kompleksitas waktu yang didominasi oleh sorting yaitu O (n log n) dengan komplesitaksi ruang yang membutuhkan ruang O(n) untuk karakter array tersebut.



   Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar sorting yang merupakan langkah penting dalam pengembangan keterampilan pemrograman dan pemrosesan data. Sorting merupakan proses pengaturan data dalam urutan tertentu, dalam berbagai pencarian data, analisis statistik dan pengoptimalkan algoritma. Dalam praktikum ini dapat mempelajari berbagai macam sorting seperti bubble sorting, insertion sort, selection sort, serta dapat memahami kelebihan dan kekurangan masing masing. Dengan memahami konsep dasar sorting diharapkan dapat mengembangkan keterampilan dalam mengelola dan memanipulasi data secara efisien. Kesimpulannya, laporan praktikum ini memberikan landasan yang dalam pada pemahaman dalam menguasai konsep sorting, yang merupakan aspek penting dalam pengembangan dibidang pemrograman.

## Referensi
[1]  Zein dan E. S. Eriana, "Algoritma dan Struktur Data," Universitas Pamulang Sistem Informasi S-1.
Available :
https://repository.unpam.ac.id/10199/1/       KB1101_ALGORITMA%20%20DAN%20STRUKTUR%20DATA.pdf   
[2] W. Tarigan, "Algoritma Pemrograman dan Struktur Data," November 3, 2022.
Available :
https://repository.penerbiteureka.com/id/publications/558553/algoritma-pemrograman-dan-struktur-data   
[3] Nurhasanah, Y. Kurniawan, dan Sholihin, "Praktikum Struktur Data," Universitas Pamulang Teknik Informatika S-1. 
Available :
https://repository.unpam.ac.id/10030/1/TPL0222_PRATIKUM%20STRUKTUR%20DATA.pdf
[4]A. Setiawan, "STRUKTUR DATA," Spirit Toward the Future, 2021. Available : 
https://www.agung73.com/wp-content/uploads/2021/02/Modul-Struktur-Data-R1.pdf  
[5]Triase, ST, M. Kom, "STRUKTUR DATA," Fakultas Sains dan Teknologi, Universitas Islam Negeri Sumatera Utara, Medan, 2020. 
Available : 
http://repository.uinsu.ac.id/9717/2/Diktat%20Struktur%20Data.pdf
