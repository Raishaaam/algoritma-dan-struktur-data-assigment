Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 1 Tipe Data</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

Tipe data adalah konsep dasar dalam pemrograman yang menggambarkan jenis nilai yang dapat disimpan dalam memori dan operasi-operasi yang dapat dilakukan terhadap nilai tersebut. Setiap tipe data memiliki representasi yang berbeda di dalam komputer dan menentukan jenis operasi yang dapat dilakukan terhadap nilai-nilai yang disimpan dalamnya. Tipe data dapat dibagi menjadi tipe data primitif, tipe data abstrak, dan tipe data koleksi.

## Guided 

### 1. [Tipe Data Primitif]

C++
#include <iostream>
using namespace std;
// Main program
main()
{
    char op;
    float num1, num2;
    // It allows user enter operatoe i.e, +, -, *, /
    cin >> op;
    // It alllow user to enter the operands
    cin >> num1 >> num2;
    // switch statement begins
    switch  (op)
    
    {
    //  If user enter +
    case '+':
        cout << num1 + num2;
        break;
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
    // If user enter *
    case '*':
        cout << num1 * num2;
        break;
    // If user enter /
    case '/':
        cout << num1 / num2;
        break;
    // If the operator is other than ....
    // error message will display
    default:
        cout << "Error! operator is not correct";
    }
    return 0;
}

Program ini merupakan program untuk melakukan operasi hitung sederhana dengan tipe data primitif. Pengguna dapat memilih operasi perhitungan terlebih dahulu, lalu setelah itu menginput 2 angka untuk dioperasikan, setelah itu program akan menghitung sesuai dengan operasi perhitungan yang dipilih.


### 2. [Tipe Data Abstrak]

C++
#include <stdio.h>

// struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // Using struct
    struct Mahasiswa mhs1, mhs2;
    
    // Adding values to struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // Printing struct contents
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama:  %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}

Struct 'Mahasiswa' digunakan untuk mendefinisikan sebuah wadah untuk data seperti 'name', 'address', dan 'age'. Kemudian, dua variabel dari tipe 'Mahasiswa', yaitu 'mhs1' dan 'mhs2', dideklarasikan dan diisi dengan nilai-nilai yang sesuai kemudian dicetak menggunakan printf untuk menampilkan data dari setiap mahasiswa.




### 3. [Tipe Data Koleksi]

C++
#include <iostream>
using namespace std;
int main()
{
    //Deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array
    cout << "isi array pertama :" << nilai[0] << endl;
    cout << "isi array kedua :" << nilai[1] << endl;
    cout << "isi array ketiga :" << nilai[2] << endl;
    cout << "isi array keempat :" << nilai[3] << endl;
    cout << "isi array kelima :" << nilai[4] << endl;
    return 0;
}

Mendeklarasikan sebuah array dengan nama "nilai" yang berisi 5, mengatur nilai nilai didalam array yang kemudian akan dicetak setiap nilai array beserta indeksnya dengan fungsi "cout". Lalu terdapat fungsi "return" yang akan mengembalikan nilai menjadi 0 sebagai tanda bahwa program telah berakhir.

## Unguided 

### 1. [Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas.
Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari
materi tipe data primitif!]

C++
#include <iostream>
using namespace std;

int KelilingPersegi(int sisi) {
    return 4 * sisi;
}

float KelilingPersegi(float sisi) {
    return 4 * sisi;
}

int main() {
    int sisiInt; 
    float sisiFloat; 

    cout << "Hitung Persegi" << endl;
    cout << "Masukkan Sisi :" ; cin >> sisiInt;
    cout << "Keliling Persegi (int) :" << KelilingPersegi(sisiInt)  << endl;

    cout << "Masukkan Sisi :" ; cin >> sisiFloat;
    cout << "Keliling Persegi (float) :" << KelilingPersegi(sisiFloat) << endl;
    
    return 0;
}

#### Output:
> ![Screenshot 2024-03-11 152504](https://private-user-images.githubusercontent.com/161957283/311633354-2a54c032-8619-418e-8505-f47b593b4408.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxNDU4NDIsIm5iZiI6MTcxMDE0NTU0MiwicGF0aCI6Ii8xNjE5NTcyODMvMzExNjMzMzU0LTJhNTRjMDMyLTg2MTktNDE4ZS04NTA1LWY0N2I1OTNiNDQwOC5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwODI1NDJaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT01YTQ4Yzg3ZTlkMGYxODdkNTk0ZGUzYjRlM2M2MGM4MjE2MjVlNjc5OWFiOTljYWVkNjgwNjQzY2M2M2Q4MTMwJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.6naBkRacpm0KaHQhPEp8Mm4BCGv5ZlOAGs-Y0WoQgQI)

Penjelasan program:
Program ini merupakan tipe data primitif yang menghitung keliling persegi. Didalam program terdapat 2 fungsi yaitu float (untuk bilangan pecahan) dan juga int (untuk bilangan bulat), fungsi ini yang akan digunakan untuk menyimpan nilai dari panjang sisi persegi. Kemudian, program akan mencetak hasil perhitungan keliling persegi setelah memasukkan nilai sisi, menghitung keliling persegi menggunakan rumus sisi dikali 4, output yang dihasilkan terdapat 2 format tentunya yaitu dengan nilai sisi berupa bilangan bulat (int) dan juga dengan nilai sisi berupa bilangan pecahan (float).

Full Screenshot:
> ![Screenshot 2024-03-11 152636](https://private-user-images.githubusercontent.com/161957283/311633684-961bd4d2-9195-45da-b31c-2d3ee3f454e2.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxNDU5MjMsIm5iZiI6MTcxMDE0NTYyMywicGF0aCI6Ii8xNjE5NTcyODMvMzExNjMzNjg0LTk2MWJkNGQyLTkxOTUtNDVkYS1iMzFjLTJkM2VlM2Y0NTRlMi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwODI3MDNaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1iOTBlODQ0MTVhZGI4NGZjNTlkMjBlMmJiODNiOWExNjVmMjI4NDQwMGI4NmQyMGIyODFiYTAxMzk0MzU2NWYxJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.Cm-15kArsiJf3n4sDyialNP5w-nwaBtTFYh-t5lCMhw)

### 2. [Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya]

-Struct:
Struct atau structure merupan tipe data yang menyimpanan beberapa data dengan default public, Struktur bermanfaat untuk mengelompokan sejumlah data dengan tipe yang berlainan.

Contoh code:

C++
#include <iostream>
using namespace std;

struct biodata
{
    string name;
    int age;
};

int main() {
    biodata data;

    cout << "Memasukkan nama: ";
    cin >> data.name;
    cout << "Memasukkan angka: ";
    cin >> data.age;

    cout << "Nama: " << data.name << endl;
    cout << "Umur: " << data.age << endl;

    return 0;
}

#### Output:
> ![Screenshot 2024-03-11 152831](https://private-user-images.githubusercontent.com/161957283/311634301-8597428c-5fcc-49cd-8e90-b4688db4245a.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxNDYwNTYsIm5iZiI6MTcxMDE0NTc1NiwicGF0aCI6Ii8xNjE5NTcyODMvMzExNjM0MzAxLTg1OTc0MjhjLTVmY2MtNDljZC04ZTkwLWI0Njg4ZGI0MjQ1YS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwODI5MTZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1iNGMzZDcxZTc1NDY1NGFmNzEzNDE1ZTQ2NWZmOGRlZjZlZGZjZmFjNmNkNTRhOGI0MGZhMmRkZTFlZWNjZDQxJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.pjGeznWqoP5_W7DZM1zvBgl-crTN1-CvmLaAv58RO0g)

Penjelasan program:
Program ini merupakan program untuk mendeklarasikan dan menampilkan informasi seseorang. Program menyimpan struct biodata dengan name yang berbentuk string dan age yang yang merupakan integer. Lalu program akan menampilkan output tentang informasi yang telah dimasukkan oleh user.

Full Screenshot:
> ![Screenshot 2024-03-11 152843](https://private-user-images.githubusercontent.com/161957283/311634968-4d448903-48bc-4da0-976e-2ad5e8f618ce.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxNDYyNDMsIm5iZiI6MTcxMDE0NTk0MywicGF0aCI6Ii8xNjE5NTcyODMvMzExNjM0OTY4LTRkNDQ4OTAzLTQ4YmMtNGRhMC05NzZlLTJhZDVlOGY2MThjZS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwODMyMjNaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT03MTc0Y2I4NmRmNjdkMWMxOTkzOTU2OTM1YmJhNjQxYTdlNWI5NGYzNjM1YTc3N2QyNGQwODA3Mzk4NGFjZWJlJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.aAZbfSDODDIKr0opr66YZHATiw4mL3VLsM0Gy_NkvQ4) 

-Class:
Class merupakan Struktur data yang digunakan sebagai wadah untuk data yang sifatnya privat, tidak dapat langsung dimodifikasi dari luar. 

Contoh code:

C++
#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    string name;
    int age;
};

int main(){
    Mahasiswa mahasiswa1;
    mahasiswa1.name = "Raisha";
    mahasiswa1.age = 18;

    cout << "Name: " << mahasiswa1.name << endl;
    cout << "Age: " << mahasiswa1.age << endl;
    
    return 0;
}     

#### Output:
> ![Screenshot 2024-03-11 153451](https://private-user-images.githubusercontent.com/161957283/311635971-d9dd72be-f911-45b6-be04-ac500a512f65.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxNDY0NDcsIm5iZiI6MTcxMDE0NjE0NywicGF0aCI6Ii8xNjE5NTcyODMvMzExNjM1OTcxLWQ5ZGQ3MmJlLWY5MTEtNDViNi1iZTA0LWFjNTAwYTUxMmY2NS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwODM1NDdaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT05YWMxY2YwNWFkMzM4ZTE4NDk1OGYzMmM5N2M3OWQ0ZGRhMjY4ODRiMDJiM2Y3NGY5MDNiYTk5ZGU5OGZlMTlhJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.294ik5pjnwk8t5I37pzTFwZ4OieqSgP65m2fvjv6Snc)

Penjelasan program:
Program ini merupakan digunakan untuk membuat daftar nama dan usia seseorang yang disimpan dalam variabel mahasiswa1 yang merupakan salinan dari kelas "Mahasiswa" yang dapat diakses kesemua anggota yaitu variabel "name" dan juga "age". Karena class bersifat privat jadi variabel mahasiswa1 hanya dapat diakses didalam fungsi main.

Full Screenshot:
> ![Screenshot 2024-03-11 153556](https://private-user-images.githubusercontent.com/161957283/311636670-5afe00a6-4072-424f-9011-b6773cb07b98.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxNDY2MDYsIm5iZiI6MTcxMDE0NjMwNiwicGF0aCI6Ii8xNjE5NTcyODMvMzExNjM2NjcwLTVhZmUwMGE2LTQwNzItNDI0Zi05MDExLWI2NzczY2IwN2I5OC5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwODM4MjZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1mYzNjNTE0YWViNDFkNDJlNjc0MThlYTVmZDYwYjUwODYwZTczZTM0Nzg3NTYzMmZhMThlNmUzZmQ4ZmQ4NjM1JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.6XPj3Sgi8IkpWZFJv1HEQjuyZKhP9uEeZ92XRBwNM4A)

### 3. [Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari
array dengan map.
]

C++
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> book;

    book["Laut Bercerita"] = 90000;
    book["Pulang"] = 80000;
    book["Pergi"] = 75000;

    cout << "Laut Bercerita memiliki harga: " << book["Laut Bercerita"] << endl;
    cout << "Pulang memiliki harga: " << book["Pulang"] << endl;
    cout << "Pergi memiliki harga: " << book["Pergi"] << endl;

    string raisha;
    cout << "\nCek Buku: ";
    cin >> raisha;

    if (book.find(raisha) != book.end()) {
        cout << "Stok tersedia, silahkan tanya penjual." << endl;
    } else {
        cout << "Stok tidak tersedia, silahkan kembali besok." << endl;
    }

    return 0;
}

#### Output:
> ![Screenshot 2024-03-11 120430](https://private-user-images.githubusercontent.com/161957283/311630057-97fbff7e-3564-48e2-8f90-6d35891cfc19.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxNDUwOTYsIm5iZiI6MTcxMDE0NDc5NiwicGF0aCI6Ii8xNjE5NTcyODMvMzExNjMwMDU3LTk3ZmJmZjdlLTM1NjQtNDhlMi04ZjkwLTZkMzU4OTFjZmMxOS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwODEzMTZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT02ODZhNmQzOGFlNGY0NjcyZGRiNmQzMmMwMjk1N2Q0YjM5NDFjNDdlNjllOTkwOWVjYWM3NWQ1NjUxOTBmNjgxJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.QrtgtRY_KpKTsFXyaWedhD0DxN98y8jRGZqcu2LEzR4)

Penjelasan Program: 
Program ini adalah program yang digunakan untuk mengetahui variasi buku yang akan dijual. Terdapat value yang menyimpan dari tiap variasi buku yang didalamnya terdapat harga yang ditampilkan dalam bentuk integer dan string, program akan menampilkan harga dari variasi buku tersebut setelah pengguna meminta untuk cek apakah stok buku masih tersedia atau tidak. Jika barang memiliki stok yang tersedia makan menampilkan output "stok tersedia", apabila stok kosong maka program akan menampilkan output "stok tidak tersedia".

Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar tentang tipe data dan struktur data dalam pemrograman bahasa C+. Terdapat tipe data yang telah di pelajari yaitu tipe data primitif, tipe data abstrak, tipe data koleksi. Penjelasan tentang perbedaan tipe data tersebut lalu dibuat program sederhana yang sesuai sebagai implementasi dan juga pembelajaran. 

## Referensi
[1] Horowitz, E., Sahni, S., & Anderson-Freed, S. (tahun). Fundamentals of Data Structures in C++. Penerbit.
