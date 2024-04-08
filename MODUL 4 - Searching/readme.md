Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 4 Searching</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

Secara umum search diartikan mencari data dengan cara menelusuri tempat penyimpanan data tersebut[1]. Tempat Penyimpanan data berupa array dalam memori, bisa juga berada dalam satu file pada `eksternal storage`[1]. Searching juga sering disebut `table look-up` atau `storage  and  retrieval  information`, adalah suatu proses untuk  mengumpulkan sejumlah informasi didalam pengingat computer dan kemudian mencari kembali informasi yang diperlukan  secepat mungkin[2]. Searching(pencarian) pada   struktur data mengacu pada proses algoritmik untuk memeriksa, menemukan, mengambil posisi elemen tertentu (target) dari kumpulan elemen di dalam struktur data. Kumpulan elemen  dapat  berupa `array, list, linked  list, tree,  dan  lain  sebagainya`.

### Jenis Searching
Ada beberapa cara search, yaitu:
1. Sequential Search[4].
2. Binary Search[4].

## Macam-macam Searching
### Sequential Search
Sequential Search (pencarian beruntun) adalah metode pencarian yang paling mudah. Pencarian beruntun adalah proses membandingkan setiap elemen array satu per satu secara beruntun yang dimulai dari elemen pertama hingga elemen yang dicari ditemukan atau hingga elemen terakhir dari array. Pencarian beruntun dapat dilakukan terhadap elemen array yang belum terurut atau terhadap elemen array yang terurut. Perbedaan dari keduanya terletak pada efisiensi operasi pembandingan yang dilakukan[1].

### Metode Sequential Search
Pencarian dimulai dari record-1, diteruskan ke record berikutnya yaitu record ke-2, ke-3 …. dst, sampai diperoleh isi record sama dengan informasi yang dicari. Oleh karena itu file pada Linear search tidak mutlak harus urut[1].
1. Bila N = jumlah record dalam file[1].  
        X = informasi yang akan dicari dalam file[1].   
        K = nama file  [1].  
        K[N+1] = X digunakan sebagai sentinel elemen[1].

### Binary Search
Pencarian Biner adalah algoritma pencarian yang digunakan untuk mencari elemen dari array yang diurutkan. Ini tidak dapat digunakan untuk mencari dari array yang tidakort. Pencarian biner adalah algoritma yang efisien dan lebih baik daripada pencarian linier dalam hal kompleksitas waktu[5]. 

Kompleksitas waktu pencarian linier adalah O (n). Sedangkan kompleksitas waktu pencarian biner adalah O (log n). Oleh karena itu, pencarian biner adalah algoritma yang efisien dan lebih cepat mencari tetapi hanya dapat digunakan untuk mencari dari array yang diurutkan[5].

Binary Search bekerja dengan menggunakan pendekatan `devide  and conquer` pada data array yang sudah terurut (sorted), artinya Binary Search diawali dengan mengurutkan (sorting) array terlebih dahulu sebelum melakukan proses pencarian (Goodrich et  al, 2014)[3].

### Metode Binary Search
1. jika X < K[M] : informasi yang dicari ada dibagian bawah dari lokasi middle[4].
2. jika X = K[M] : record tengah tersebut adalah record yang dicari[4].
3. jika X > K[M] : informasi yang dicari ada di bagian atas dari lokasi tengah (middle)[4].


## Guided

### 1.  Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data..

```C++
#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;

    // algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if(data[i] == cari) {
            ketemu = true;
            break;
        }
    }
    cout << "\t Program Sequential Search Sederhana\n" << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu){
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
    
}
```

### Output
![Screenshot 2024-04-07 213827](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/02af7e95-16f9-43ef-aa32-fa090d444468)

Program ini merupakan implementasi dari sebuah algoritma Squential yang digunakan untuk mencari nilai angka 10 dalam array data yang berukuran 10 dalam nilai n yang berisi 10 buah angka. Algoritma ini membandingkan setiap elemen dalam array data dengan angka yang dicari hingga angka ditemukan. Jika angka ditemukan, program akan menampilkan indeks keberapa dari angka yang ditemukan, jika tidak ditemukan maka akan menampilkan output "angka 10 tidak ditemukan pada data".

Terdapat fungsi `int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}` yang mendefinisikan sebuah larik dengan nama `data` dengan panjang `n` (10 elemen), yang diisi dengan nilai-nilai yang diberikan dalam kurung kurawal. Pada `int cari=10;` yang mendefinisikan variabel `cari` yang bertipe integer dan diberikan nilai 10. Nilai ini adalah nilai yang akan dicari dalam larik `data`. Pada fungsi `bool ketemu = false` yang mendefinisikan variabel boolen `ketemu` dengan nilai awal `false`. Variabel ini digunakan untuk menandai apakah sebuah nilai yang dicari telah ditemukan dalam larik `data`. Kemudian fungsi `for (i = 0; i< n; i++){...}` melakukan iterasi dari `i = 0` hingga `n-1` untuk melakukan pencarian `cari`dalam larik `data`. Setelah itu fungsi `if(data[i] == cari) {...}:` yang akan memeriksa apakah elemen lari yang terdapat pada `data` pada indeks ke-`i` sama dengan nilai `cari`, jika iya `ketemu` diubah menjadi `true`, dan perulangan akan berhenti.

 
### 2.  Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search.

```C++
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int cari;

void selection_sort(int data[], int length) {
    int temp, min, i, j; 
    for(i = 0; i < length; i++) {
        min = i;
        for (j = i + 1; j < length; j++) {
            if(data[j] < data[min]) {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void binarysearch(int data[], int length) {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = length - 1;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(data[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if(b_flag == 1)
        cout << "\n Data ditemukan pada index ke- " << tengah << endl;
    else
        cout << "\n Data tidak ditemukan\n";
}

int main() {
    int data[7] = {1, 8, 2, 5, 4, 9, 7};
    int length = sizeof(data) / sizeof(data[0]);

    cout << "\t BINARY SEARCH " << endl;
    cout << "\n Data : ";
    // Tampilkan data awal
    for(int x = 0; x < length; x++)
        cout << setw(3) << data[x];
    cout << endl;

    cout << "\n Masukkan data yang ingin anda cari : ";
    cin >> cari;

    cout << "\n Data diurutkan : ";
    // Urutkan data dengan selection sort
    selection_sort(data, length);

    // Tampilkan data setelah diurutkan 
    for(int x = 0; x < length; x++)
        cout << setw(3) << data[x];
    cout << endl;

    binarysearch(data, length);
    _getche();
    return EXIT_SUCCESS;
}
```
### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/37e2c732-84d2-40fa-b807-146696c9fd74)

Program ini merupakan implementasi dari sebuah algoritma searching data dengan menggunakan metode binary search. Dalam program ini terdapat library yang digunakan yaitu `<iostream>` `<conio.h>` dan `<iomanip>` yang digunakan untuk mengontrol sebuah output maupun input teks dan juga format output numerik, sedangkan library `<conio.h>` digunakan untuk mengontrol input maupun output teks. Terdapat variabel `cari` yang digunakan untuk menyimpan data yang akan dicari. Kemudian pada program terdapat fungsi `binarysearch` yang dilakukan untuk mencari data dengan cara membagi data menjadi dua bagian hingga data yang dicari ditemukan atau tidak. Jika data yang dicari ditemukan, maka akan ditampilkan indeks dari data tersebut, jika tidak, maka akan ditampilkan pesan bahwa data tidak ditemukan. Dalam kode juga terdapat fungsi `main` yang didefinisikan array dengan `data` 7 elemen dan hitung panjangnya. Dengan fungsi `int length = sizeof(data) / sizeof(data[0]);` akan mendeklarasikan variabel `length` yang berisi sejumlah elemn yang ada pada array `data`. Kemudian fungsi `return EXIT_SUCCESS` merupakan pernyataan output yang mengembalikan nilai `EXIT_SUCCESS` ke sistem operasi untuk menandakan bahwa program diakhiri dengan sukses.



## Unguided 

### 1. [Buatlah sebuah program untuk mencari sebuah huruf pada sebuahkalimat yang sudah di input dengan menggunakan Binary Search!]

```C++
#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mencari indeks pertama dari suatu karakter dalam string
int findIndex(const string& sentence, char target) {
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence[i] == target) {
            return i;
        }
    }
    return -1; // Jika tidak ditemukan
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    char huruf;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    int indeks = findIndex(kalimat, huruf);

    if (indeks != -1) {
        cout << "Huruf '" << huruf << "' ditemukan pada indeks ke-" << indeks << " dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/abfcb582-bc0b-4584-8ba6-183a87ca6b98)

Program ini merupakan implementasi pencarian indeks pertama dari suatu karakter dalam sebuah string yang dimasukkan oleh pengguna. Dalam program ini terdapat libraray `#include <iostream>` dan `#include <string>` yang digunakan untuk mengimpor libarary yang diperlukan program. Pada `main` function, program akan meminta untuk memasukkan kalimat dan angka yang ingin dicari. Lalu, program akan memanggil fungsi `findIndex` dengan mengirimkan kalimat dan huruf yang ingin dicari sebagai argumen. Output dari fungsi tersebut akan disimpan dalam variabel `indeks`. Jika `indeks` tidak sama dengan -1, maka program akan menampilkan pesan bahwa huruf telah ditemukan pada indeks ke-`indeks` dalam kalimat tersebut. Jika tidak, maka program akan menampilkan pesan bahwa huruf tidak ditemukan didalam kalimat.


### 2. [Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!]

~~~C++
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
~~~

#### Output:
![Screenshot 2024-04-08 092733](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/d6a282f0-5bb6-46fe-8066-f50eea43b3aa)

Program ini merupakan program yang digunakan untuk menghitung sebuah jumlah huduf vokal yang terdapat pada kalimat. Terdapat fungsi `bool isVowel(char ch)` yang digunakan untuk memeriksa apakah sebuah char merupakan huruf vokal, dengan mengubah huruf menjadi kecil dengan menggunakan fungsi tolower dan kemudian membandingkannya pada setiap huruf vokal. Jika karakter tersebut merupakan huruf vokal, maka fungsi ini akan mengembalikan nilai true, begitu juga sebaliknya, jika tidak akan mengembalikan nilai false. Dalam fungsi `int countVowels(const string& setence)` merupakan fungsi yang digunakan untuk menghitung jumlah huruf vokal yang ada apa sebuah kalimat. Fungsi ini akan menggunakan fungsi isVowel untuk memeriksa setiap karakter didalam kalimat. Jika karakter tersebuat merupakan vokal, maka variabel count akan bertambah 1. Setelah perulangan selesai, fungsi ini akan mengembalikan nilai count. Pada fungsi `cout <<"Jumlah huruf vokal dalam kalimat tersebut adalah: "<< jumlahVokal << endl;` merupakan akhir dari sebuah program yang akan menampilkan output jumlah huruf vokal yang terdapat didalam kalimat tersebut.



### 3. [ Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!]

~~~C++
#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menghitung jumlah kemunculan angka 4 dalam data menggunakan sequential search
int countFours(const vector<int>& data) {
    int count = 0;
    for (int num : data) {
        if (num == 4) {
            count++;
        }
    }
    return count;
}

int main() {
    // Data
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};

    // Hitung jumlah angka 4 dalam data
    int jumlahEmpat = countFours(data);

    cout << "Jumlah angka 4 dalam data adalah: " << jumlahEmpat << endl;

    return 0;
}

~~~

### Output
![Screenshot 2024-04-08 094809](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/f08e686b-ffda-4252-9d4e-4e3bc7cb0725)

Program ini merupakan program yang digunakan untuk menghitung sejumlah agka 4 yang ada di dalam sebuah data menggunakan algoritma Sequential Search. Dalam program terdapat fungsi `int main()` yang digunakan untuk fungsi utama dalam sebuah program untuk mengeksekusi dan mendefinisikan sebuah vector data yang berisi beberapa angka. Setelah itu, program akan memanggil fungsi `countFours` dengan mengirimkan data sebagai sebuah argumen. Dari hasil fungsi `countFours` akan disimpan dalam variabel jumlahEmpat. Lalu fungsi `cout << "Jumlah angka 4 dalam data adalah: ">>` yang akan menampilkan jumlah dari angka 4 yang muncul pada data tersebut. 

Sequential Search merupakan algoritma search yang paling sederhana dan mudah untuk dipahami. Dengan membandingkan setiap elemen yang terdapat pada data dengan nilai yang dicari sebagai cara kerja dari sebuah sequential. Jika nilai yang dicari ditemukan, maka akan ditambahkan 1 pada variabel cout. Setelah selesai melakukan sebuah looping, fungsi akan mengembalikan nilai dari variabel count.



   Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar searching yang merupakan yang merupakan salah satu konsep dari dasar ilmu pada komputer dan pemrograman. Searching atau pencarian adalah proses untuk menemukan sebuah elemen tertentu dalam kumpulan data atau struktur data. Konsep dasar searching ini penting karena sering digunakan dalam berbagai aplikasi, mulai dari basis data, pengolahan gambar, kecerdasan buatan, hingga pemrograman web. Pada dasarnya, ada dua pendekatan utama dalam searching, yaitu linear search (pencarian sekuensial) dan binary search (pencarian biner). Linear search bekerja dengan memeriksa setiap elemen dalam kumpulan data secara berurutan hingga menemukan elemen yang dicari atau mencapai akhir dari kumpulan data. Meskipun sederhana, linear search mungkin tidak efisien untuk kumpulan data yang besar. Di sisi lain, binary search bekerja dengan membagi kumpulan data menjadi dua bagian dan membandingkan elemen tengah dengan elemen yang dicari. Jika elemen tengah sama dengan elemen yang dicari, maka pencarian selesai. Jika tidak, pencarian dilanjutkan di salah satu bagian kumpulan data tergantung pada hasil perbandingan. Binary search efisien untuk kumpulan data yang sudah diurutkan.


## Referensi
[1] N. Yudi Kurniawan, "Struktur Data," Universitas Pamulang, 2023.  
    Available: https://repository.unpam.ac.id/10030/1/TPL0222_PRATIKUM%20STRUKTUR%20DATA.pdf   
[2] W. Tarigan, "Algoritma Pemrograman dan Struktur Data," November 3, 2022.    
    Available: https://repository.penerbiteureka.com/id/publications/558553/algoritma-pemrograman-dan-struktur-data  
[3] M. P. Putri, G. Barovih, R. A. Azdy, Y. Yuniansyah, A. Saputra, et al., "Algoritma dan Struktur Data," September 28, 2022.  
    Available: https://repository.penerbitwidina.com/id/publications/557434/algoritma-dan-struktur-data    
[4] H. Soetanto, "Struktur Data: Dasar-dasar Pemrograman."    
    Available: https://dirdosen.budiluhur.ac.id/0314056902/pak/buku/strukturdata%20Perpusr%202022.pdf  
[5] A. Zein dan E. S. Eriana, "Algoritma dan Struktur Data," Universitas Pamulang, Sistem Informasi S-1.  
    Available: https://repository.unpam.ac.id/10199/1/KB1101_ALGORITMA%20%20DAN%20STRUKTUR%20DATA.pdf
