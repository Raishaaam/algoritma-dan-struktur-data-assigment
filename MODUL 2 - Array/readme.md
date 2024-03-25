Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 2 Tipe Data</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

Array adalah tipe terstruktur yang mempunyai komponen dalam  jumlah yang tetap dan setiap komponen mempunyai tipe data yang sama[4].  Array cocok untuk organisasi kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal[1]. Setiap anggota array dapat  diakses  melalui  suatu  indeks dari nol sampai n-1[2].

## Guided 

### 1. Array Satu Dimensi

Array 1  dimensi  atau yang  sering  disebut  dengan  vektor  adalah  suatu array yang value atau nilainya hanya ditunjukkan oleh satu indeks[2]. Array satu dimensi tidak lain adalah kumpulan elemen-elemen yang identik tersusun dalam satu baris, tetapi diisi juga dari elemen tersebut dan boleh berbeda. Dapat disebut juga dengan istilah vektor yang menggambarkan data dalam suatu urutan. Sebagai contoh, jika kita ingin mendeklarasikan sebuah vektor yang dapat menampung lima bilangan bulat, kita dapat menuliskannya sebagai "int A[5];" [1].

### 2. Array Dua Dimensi

Array dua dimensi yang sering digambarkan sebagai sebuah matriks memiliki beberapa   fungsi   seperti   penambahan,   pengurangan,   perkalian   dan penggabungan  matrik. . Array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama[2]. 

### 3. Array Multidimensi

Array multidimensi adalah larik yang berisi satu atau lebih larik. Array Multidimensi merupakan array yang serupa dengan array satu dimensi maupun array dua dimensi, namun array multidimensi dapat memiliki memori yang lebih besar. Biasanya array multidimensi digunakan untuk menyebut array dengan dimensi lebih dari dua atau array yang mempunyai lebih dari dua subskrip, seperti untuk menyebut array tiga dimensi, empat dimensi, lima dimensi dan seterusnya[6].

### Karakteristik Array
1. Mempunyai batasan dari pemesanan alokasi memory (Bersifat Statis)
Mempunyai Type Data Sama (Bersifat Homogen)[5].
2. Dapat Diakses Secara Acak[5].

### Deklarasi Array
1. Tipe data array.
2. Nama variabel array.
3. Indeks array.

### Keunggulan dan Kelemahan Array
Keunggulan:
1. Array sangat cocok untuk pengaksesan acak. Sembarang elemen di
array dapat diacu secara langsung tanpa melalui elemen-elemen lain[3].
2. Jika berada disuatu lokasi elemen,maka sangat mudah menelusuri ke
elemen-elemen tetangga, baik elemen pendahulu atau elemen penerus[3].
3. Jika elemen-elemen array adalah nilai-nilai independen dan seluruhnya haruster jaga, maka penggunaan penyimpanannya sangat efisien[3].

Kelemahan:
Array mempunyai fleksibilitas rendah, sehingga tidak cocok untuk berbagai aplikasi karena array mempunyai batasan sebagai berikut:
1. Array harus bertipe homogen. Kita tidak dapat mempunyai array
dimana satu elemen adalah karakter, elemen lain bilangan dan elemen lain adalah tipe-tipe lain[3].
2. Kebanyakan bahasa pemrograman mengimplementasikan array statik
yang sulit diubah ukurannya diwaktu eksekusi. Bila penambahan dan
pengurangan terjadi terus-menerus, maka representasi statis[3].
3. Tidak efisien dalam penggunaan memori[3].
4. Menyiakan banyak waktu komputasi[3].
5. Pada suatu aplikasi, representasi statis tidak dimungkinkan[3].


## Guided

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>

using namespace std;

// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```

### Output
![Screenshot 2024-03-25 095928](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/3070d4ea-b176-44dd-bb6f-bf720c55aaea)

Program ini mendeklarasikan array dengan dimensi "[2]x[3]x[3]". Kemudian, program ini akan menggunakan nested loop (loop yang berisi loop) untuk menginputkan elemen-elemen array. Loop pertama akan mengulangi 2 kali, dimana dimensi "x" bernilai [0] dan [1]. Lalu loop kedua akan mengulangi sebanyak 3 kali, dimensi "y" bernilai 0, 1, dan 2. Setelah itu, loop ketiga akan mengulangi 3 kali, dimensi "z" bernilai 0, 1, dan 2. 

Lalu program akan menampilkan kembali elemen-elemen array dengan tiga dimensi setelah semua elemen diinput.


### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;

int main()   
{

    // Deklarasi variabel
    int maks, a, i = 1, lokasi;

    // Input panjang array
    cout << "Masukkan panjang array : ";
    cin >> a;

    // Deklarasi array dengan panjang `a`
    int array[a];

    // Input nilai elemen array
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }

    // Inisialisasi variabel `maks` dengan nilai elemen array pertama
    maks = array[0];

    // Perulangan untuk mencari nilai maksimum
    for (i = 0; i < a; i++)
    {
        // Jika nilai elemen array lebih besar dari `maks`
        if (array[i] > maks)
        {
            // Update nilai `maks` dengan nilai elemen array
            maks = array[i];
            // Simpan lokasi elemen array dengan nilai maksimum
            lokasi = i;
        }
    }

    // Output nilai maksimum dan lokasinya
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```
### Output
![Screenshot 2024-03-25 100238](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/911267e8-2859-4e0b-a367-b7619c25255f)

Program ini meminta pengguna untuk memasukkan panjang array dan elemen-elemen array. Lalu program akan mencari "maks" untuk menyimpan nilai maksimum dengan "a" untuk menyimpan panjang array, "i" untuk counter perulangan dan lokasi untuk menyimpan lokasi elemen array dengan nilai maksimum.


## Unguided 

### 1. [Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!]

![Screenshot 2024-03-25 093147](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/915db262-3bb5-4832-b495-536795635879)

```C++
#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Masukkan jumlah array: ";
    cin >> a;
    int arr[a];

    cout << "Masukkan " << a << " angka\n";
    for (int i = 0; i < a; i++)
    {
        cout << "Array ke - " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Data Array : ";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << ", ";
        }
    }
}
```

#### Output:

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/3c33d024-f31b-4e6a-b1a5-e6356b305881)

Program diatas digunakan untuk memasukkan jumlah angka ke dalam array. Lalu user akan diminta untuk memasukkan setiap angka yang kemudian akan disimpan kedalam array. Program akan menampilkan semua data yang telah diinput dan akan menampilkan semua angka genap dan angka ganjil yang ada didalam array. Kemudian program akan menghasilkan output data array yang asli dan menampilkan dua nilai yang merupakan angka ganjil dan angka genap yang ada di dalam array tersebut.


### 2. [Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!]

~~~C++
#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan jumlah elemen x: ";
    cin >> x;
    cout << "Masukkan jumlah elemen y: ";
    cin >> y;
    cout << "Masukkan jumlah elemen z: ";
    cin >> z;
    
    int arr[x][y][z];

    cout << "Masukkan elemen untuk array tiga dimensi:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Elemen untuk indeks (" << i << "," << j << "," << k << "): ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "\nArray Tiga Dimensi:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "(" << i << "," << j << "," << k << "): " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
~~~

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/24bcb276-b1ad-46a0-8238-4191e6eb47c9)

Program diatas digunakan untuk membuat array 3 dimensi dan meminta user untuk memasukkan angka elemen array yang telah dideklarasikan. Program akan mengambil input jumlah elemen pada setiap dimensi array yaitu x, y, z. Setelah itu, program akan menghasilkan output elemen array beserta nilainya dan juga akan menambilkan format tabel 3 dimensi.

### 3. [Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user]

~~~C++
#include <iostream>
using namespace std;

int main()
{
    int n, i, maks, min, lokasi_maks, lokasi_min, total = 0;
    float rata_rata;
    int array[100];

    cout << "Masukkan panjang array: ";
    cin >> n;

    cout << "Masukkan " << n << " angka\n";
    for (i = 0; i < n; i++)
    {
        cout << "Array ke-" << i << ": ";
        cin >> array[i];
        total += array[i];
    }

    maks = min = array[0];
    lokasi_maks = lokasi_min = 0;

    for (i = 0; i < n; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi_maks = i;
        }
        else if (array[i] < min)
        {
            min = array[i];
            lokasi_min = i;
        }
    }

    rata_rata = (float)total / n;

    int pilih;
    do
    {
        cout << "\n===== Menu =====\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            cout << "Nilai maksimum " << maks << " berada di Array ke " << lokasi_maks << endl;
            break;
        case 2:
            cout << "Nilai minimum " << min << " berada di Array ke " << lokasi_min << endl;
            break;
        case 3:
            cout << "Nilai rata-rata " << rata_rata << endl;
            break;
        default:
            cout << "Keluar!" << endl;
        }
    } while (pilih != 4);

    return 0;
}
~~~

### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/a86af437-6de1-4544-8b61-68ed95082958)

Program diatas menampilkan menu yang digunakan user untuk mencari nilai maksimum, minimum dan juga rata-rata dari sebuah array. Contoh ketika user memasukkan 5 angka yaitu (1, 2, 3, 4, 5) kemudian program akan menampilkan menu dan memasukkan pilihan yang diinginkan untuk mencari nilai maksimum, minimum atau pun rata-rata. Sampai user memilih opsi 4 (Keluar) maka program akan selesai.

   Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar tentang array. Konsep-konsep dasar ini penting untuk dikuasai karena array merupakan struktur data fundamental dalam pemrograman yang digunakan untuk menyimpan kumpulan elemen dengan tipe data yang sama. Dengan memahami konsep dasar tentang array, pembaca akan dapat memahami cara menggunakan, mengakses, dan memanipulasi data dalam program secara efisien. Selain itu, pemahaman tentang array juga menjadi dasar bagi pemahaman konsep struktur data yang lebih kompleks dan algoritma yang melibatkan penggunaan array. 

## Referensi
[1]  M. A. Pratama, "Struktur Data Array Dua Dimensi pada Pemrograman C++."    
[2]  M. P. Putri et al., "Algoritma dan Struktur Data," September 28, 2022. 
    Available: https://repository.penerbitwidina.com/id/publications/557434/algoritma-dan-struktur-data   
[3]  M. A. Alfagiih, "Struktur Data," Universitas Mitra Indonesia, Sistem Informasi, 175100047.  
[4]  W. Tarigan, "Algoritma Pemrograman dan Struktur Data," November 3, 2022.  
[5] A. Setiawan, "Modul Struktur Data," Spirit Toward the Future, 2021.   
[6] Rus'an, J.A.P., “Program C++ : Array Multidimensi Menghitung Nilai Tertinggi, Perkalian Matriks, dan Rata-rata”, 30-Des-2022. 