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
> ![Screenshot 2024-03-11 092515](https://private-user-images.githubusercontent.com/161957283/311569438-65a48a79-9b88-4b25-97fb-a7aea7dd6167.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxMjQ0NDYsIm5iZiI6MTcxMDEyNDE0NiwicGF0aCI6Ii8xNjE5NTcyODMvMzExNTY5NDM4LTY1YTQ4YTc5LTliODgtNGIyNS05N2ZiLWE3YWVhN2RkNjE2Ny5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwMjI5MDZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1jMDkwN2Q2M2EyMzE5ZTcwMDdhZmE2Y2FiNGY0NzkyZDNkZTM2N2Q5OTQ2NzAyODIxOTUzZTEyM2VkZDQ4OGRiJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.0D531rzxABZr77qwzmzrqlJhFq-GEwd44ESvaxAy-xc)

Penjelasan program:
Program ini merupakan tipe data primitif yang menghitung keliling persegi. Didalam program terdapat 2 fungsi yaitu float (untuk bilangan pecahan) dan juga int (untuk bilangan bulat), fungsi ini yang akan digunakan untuk menyimpan nilai dari panjang sisi persegi. Kemudian, program akan mencetak hasil perhitungan keliling persegi setelah memasukkan nilai sisi, menghitung keliling persegi menggunakan rumus sisi dikali 4, output yang dihasilkan terdapat 2 format tentunya yaitu dengan nilai sisi berupa bilangan bulat (int) dan juga dengan nilai sisi berupa bilangan pecahan (float).

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
> ![Screenshot 2024-03-11 102644](https://private-user-images.githubusercontent.com/161957283/311577814-7a1b3e29-e254-4a96-aacc-439b7a6d3d2e.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxMjc5NDksIm5iZiI6MTcxMDEyNzY0OSwicGF0aCI6Ii8xNjE5NTcyODMvMzExNTc3ODE0LTdhMWIzZTI5LWUyNTQtNGE5Ni1hYWNjLTQzOWI3YTZkM2QyZS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwMzI3MjlaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1iZTBlODczNWM1M2NhYzRiZTRiNjVlYWI5ZjRiOGUyNzUxY2I5NWY5YTI1MmM0OGVlY2ZkYmE2MDVkYTgyNDRmJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.YoeOK_9JgJvscZ6mVGN4QZs6PTyvqDHE30JdMCXPwZQ)

Penjelasan program:
Program ini merupakan program untuk mendeklarasikan dan menampilkan informasi seseorang. Program menyimpan struct biodata dengan name yang berbentuk string dan age yang yang merupakan integer. Lalu program akan menampilkan output tentang informasi yang telah dimasukkan oleh user.

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
> ![Screenshot 2024-03-11 111525](https://private-user-images.githubusercontent.com/161957283/311584563-9890496e-441f-4682-89c2-0437356e5da2.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxMzA4NzIsIm5iZiI6MTcxMDEzMDU3MiwicGF0aCI6Ii8xNjE5NTcyODMvMzExNTg0NTYzLTk4OTA0OTZlLTQ0MWYtNDY4Mi04OWMyLTA0MzczNTZlNWRhMi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwNDE2MTJaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1mNTk5ZWVkMDA3NDE2ZDllYzhiZGRlZjNjZTY4YTZiNjE5ZTk2YjA5MGMyOTAxMjg4YjI4NzQyN2JkNjE0MjU1JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.4-CdhBeV4Fna0Zh1mBcW7ZV3KzQuFyZwfG0jdEXLELw)

Penjelasan program:
Program ini merupakan digunakan untuk membuat daftar nama dan usia seseorang yang disimpan dalam variabel mahasiswa1 yang merupakan salinan dari kelas "Mahasiswa" yang dapat diakses kesemua anggota yaitu variabel "name" dan juga "age". Karena class bersifat privat jadi variabel mahasiswa1 hanya dapat diakses didalam fungsi main.

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
> ![Screenshot 2024-03-11 120430](https://private-user-images.githubusercontent.com/161957283/311591612-c9705095-82c7-46d5-8585-ed8a96843f68.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTAxMzQwODYsIm5iZiI6MTcxMDEzMzc4NiwicGF0aCI6Ii8xNjE5NTcyODMvMzExNTkxNjEyLWM5NzA1MDk1LTgyYzctNDZkNS04NTg1LWVkOGE5Njg0M2Y2OC5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwMzExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDMxMVQwNTA5NDZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT01ODRiMDlkZWMyMTJjYzJlNTllMjQzNDIxOGEyZTY4NmIxZGIzNGJjYTc0MTcxN2M3Yjk1N2EyNGRlNmIxOGQ2JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.6882QSQz3j-hGeMXqNGVqvUQnoNr6n96t37l_NIcaGE)

Penjelasan Program: 
Program ini adalah program yang digunakan untuk mengetahui variasi buku yang akan dijual. Terdapat value yang menyimpan dari tiap variasi buku yang didalamnya terdapat harga yang ditampilkan dalam bentuk integer dan string, program akan menampilkan harga dari variasi buku tersebut setelah pengguna meminta untuk cek apakah stok buku masih tersedia atau tidak. Jika barang memiliki stok yang tersedia makan menampilkan output "stok tersedia", apabila stok kosong maka program akan menampilkan output "stok tidak tersedia".

Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar tentang tipe data dan struktur data dalam pemrograman bahasa C+. Terdapat tipe data yang telah di pelajari yaitu tipe data primitif, tipe data abstrak, tipe data koleksi. Penjelasan tentang perbedaan tipe data tersebut lalu dibuat program sederhana yang sesuai sebagai implementasi dan juga pembelajaran. 

## Referensi
[1] Horowitz, E., Sahni, S., & Anderson-Freed, S. (tahun). Fundamentals of Data Structures in C++. Penerbit.
