Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 4 Stack</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

Stack adalah sekumpulan elemen-elemen data yang disimpan dalam satu laju linear[1]. Kumpulan elemen-elemen data hanya boleh diakses pada satu lokasi saja yaitu pada posisi atap (Top). Tumpukan disebut juga `Push Down Stack` yaitu penambahan elemen baru (Push) dan penghapusan elemen dari tumpukkan (Pop)[1]. Stack memungkinkan akses hanya ke satu item data: item terkahir yang dimasukkan[2]. Secara   sederhana,   tumpukan   dapat   diartikan   sebagai suatu kumpulan data yang seolah-olah ada data yang diletakkan di atas data yang lain[3]. 

Stack atau tumpukan adalah kumpulan elemen yang hanya dapat di tambah atau dihapus dari satu ujung (gerbang) yang sama[4]. Hal ini menunjukan bahwa seolah-olah suatu elemen diletakan di atas elemen yang lain[4]. Yang memberi gambaran bahwa Stack mempunyai sifat `LIFO(Last In First Out)` yang berarti bahwa elemen yang terakhir masuk akan pertama keluar[4]. Stack dapat diartikan juga yaitu suatu struktur data linear, tehknik struktur data ini dimana data yang dimasukan paling akhir adalah data yang paling awal di keluarkan[4]. Stack memiliki tipe data yang berifat abstrak namun seringkali bahkan 
sangat umum penggunaan stack dalam suatu pembuatan pemrograman[4].

### Proses Stack.
Ada beberapa cara proses stack, yaitu:
1. Awal (inisialisasi)[4].
2. Pop (hapus mengambil keluar)[4].
3. Push (input, simpan, masuk)[4].

### Operasi dan Fungsi Stack.
1.  Push (memasukan) operasi ini digunakan menambah elemen di dalam stack, jika stack tidak penuh.
2.  Pop (keluar) operasi ini digunakan mengambil sekaligus menghapus elemen di dalam stack. Jika stack tidak kosong.
3. IsEmpty adalah suatu fungsi cek stack sudah dalam keadaan kosong.
4. IsFul adalah suatu fungsi cek stack sudah dalam keadaan penuh.
5. Display adalah fungsi menampilkan input program stack.

### Operasi-operasi dasar dalam stack
Sebuah stack setidaknya memiliki lima buah operasi-operasi dasar, yakni:
1. Prosedur createEmpty.
2. Prosedur Push.
3. Prosedur Pop.
4. Fungsi IsEmpty.
5. Fungsi IsFull.


## Guided

### 1.  Sourcecode.

```C++
#include <iostream>
using namespace std;

const int maksimal = 5;
string arrayBuku[maksimal];
int top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top++] = data;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[--top] = "";
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else if (posisi <= top) {
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[top - posisi] << endl;
    } else {
        cout << "Posisi melebihi data yang ada" << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi <= top) {
        arrayBuku[top - posisi] = data;
    } else {
        cout << "Posisi melebihi data yang ada" << endl;
    }
}

void destroyArraybuku() {
    while (!isEmpty()) {
        popArrayBuku();
    }
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();

    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;

    cetakArrayBuku();

    return 0;
}
```

### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/00d241bd-16a7-4b45-b4a9-b312e4ecb3ef)

Program ini adalah implementasi stack yang menggunakan array, yang dapat menambahkan, menghapus, melihat, dan juga mengubah data, serta mencetak semua data yang terdapat pada stack, dengan output yang menampilkan beberapa operasi seperti menambahkan 5 buku, mencetak semua buku, mengecek apakah stack penuh atau kosong, melihat buku pada posisi ke-2, menghapus buku teratas, mengubah buku pada posisi ke-2, dan menghapus semua buku. 

Terdapat `const int maksimal = 5;` yang digunakan untuk mendefinisikan konstanta maksimal ukuran pada stack. Terdapat `string arrayBuku[maksimal];` yang digunakan untuk mendefinisikan array string bernama arrayBuku dengan ukuran maksimal. Pada program terdapat kode `int top = 0;` yang digunakan untuk mendefinisikan variabel top dengan nilai awal 0. Top digunakan untuk menunjukkan posisi elemen teratas di stack. `bool isFull()` berfungsi untuk memeriksa apakah stack penuh atau tidak sedangkan `bool isEmpty()` digunakan untuk memeriksa apakah stack kosong atau tidak. Lalu terdapat `void pushArrayBuku(string data)` berfungsi untuk menambahkan data ke dalam stack, sedangkan `void popArrayBuku()` berfungsi untuk menghapus data teratas dalam stack. Lalu terdapat `void peekArrayBuku(int posisi)`berfungsi untuk melihat data pada posisi tertentu di stack tanpa menghapusnya. Lalu `int countStack()` berfungsi untuk mengembalikan jumlah elemen yang terdapat pada stack.


## Unguided 

### 1. [Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.]

```C++
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& sentence) {
    std::stack<char> charStack;
    std::string str = sentence;

    // Hapus spasi dan ubah semua huruf menjadi huruf kecil
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Simpan karakter-karakter ke stack
    for (char c : str) {
        charStack.push(c);
    }

    // Bandingkan karakter-karakter di stack dengan karakter-karakter asli
    while (!charStack.empty()) {
        if (charStack.top() != str.back()) {
            return false;
        }
        charStack.pop();
        str.pop_back();
    }

    return true;
}

int main() {
    std::string kalimat;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    // Cek apakah kalimat adalah palindrom
if (isPalindrome(kalimat)) {
    std::cout << "Kalimat tersebut bukan palindrom" << std::endl;
} else {
    std::cout << "Kalimat tersebut adalah palindrom" << std::endl;
}
return 0;
}
```

#### Output:
![Screenshot 2024-05-06 060356](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/af1cb817-f8cc-4db9-b4ea-6415863b42ef)

Program ini merupakan implementasi stack yang digunakan untuk memeriksa apakah sebuah kalimat yang diinput merupakan kalimat palindrom atau bukan. Palindrom adalah kalimat yang sama dari kiri ke kanan dan sebaliknya. 

Terdapat fungsi `isPalingdrome` yang berfungsi untuk menerima sebuah kalimat sebagai input dan mengembalikan nilai `true` jika kalimat tersebut merupakan palindrom, dan tidak jika bernilai `false`. Terdapat `str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());` yang digunakan untuk menghapus semua spasi pada kalimat. Lalu `std::transform(str.begin(), str.end(), str.begin(), ::tolower);` digunakan untuk mengubah semua huruf pada kalimat menjadi huruf kecil.


### 2. [Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat!]

~~~C++
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to reverse a sentence using a stack
void reverseSentence(string sentence) {
    stack<char> characters;
    for (char c : sentence) {
        characters.push(c);
    }

    while (!characters.empty()) {
        cout << characters.top();
        characters.pop();
    }
    cout << endl;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Kalimat: " << kalimat << endl;

    cout << "Kalimat terbalik: ";
    reverseSentence(kalimat);

    return 0;
}
~~~

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/47283b32-750e-42ec-9f19-3de75b4fc767)

Program ini merupakan implementasi stack yang digunakan membalikkan urutan karakter dari sebuah kalimat yang diinput oleh user.

Didalam program terdapat fungsi `void reverseSetence(string sentence)` yang digunakan untuk membalikkan urutan karakter dari kalimat yang dimasukkan. Lalu terdapat `stack<char> characters;` yang digunakan untuk membuat stack dengan tipe data char. Kemudian `for (char c : sentence) { characters.push(c); }` perulangan for ini digunakan untuk menambahkan setiap karakter dari kalimat di dalam stack. `while (!characters.empty()) { cout << characters.top(); characters.pop(); }` pada perulangan while digunakan untuk mengeluarkan setiap karakter  dari stack dan menampilkan ke terminal.

Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar stack yang merupakan  salah satu konsep fundamental dalam ilmu komputer dan pemrograman. Stack, atau tumpukan, merupakan struktur data yang mengikuti prinsip LIFO (Last In, First Out), artinya elemen terakhir yang dimasukkan ke dalam stack akan menjadi elemen pertama yang keluar. Konsep dasar stack penting karena digunakan dalam berbagai aplikasi, seperti pemanggilan fungsi dalam bahasa pemrograman, evaluasi ekspresi matematika, manajemen memori, dan lain sebagainya. Terdapat dua operasi utama pada stack, yaitu push dan pop. Operasi push digunakan untuk menambahkan elemen ke dalam stack, sedangkan operasi pop digunakan untuk menghapus elemen paling atas dari stack. Dengan memahami konsep dasar stack, pengembang dapat memanfaatkannya dalam berbagai konteks pemrograman untuk meningkatkan efisiensi dan kinerja aplikasi yang dibuat.


## Referensi
[1] J. Nasir, M. Melladia, R. Saputra, Y. Yusliyenni, S. Safaria, D. E. Putra, G. Efendi, A. Zahmi, and Y. L. Setiawan, "Buku e-book: [Algoritma dan Struktur Data dengan Pemograman Pascal dan Phyton]," CV. Gita Lentera, Januari 31, 2024.  
    Available: https://www.google.co.id/books/edition/Algoritma_dan_Struktur_Data_dengan_Pemog/bYnxEAAAQBAJ?hl=en&gbpv=0  
[2] A. Zein and E. S. Eriana, "Algoritma dan Struktur Data," Universitas Pamulang Sistem Informasi S-1, Jl. Surya Kencana No. 1, Pamulang, Gd. A, Ruang 212, Universitas Pamulang, Tangerang Selatan, Banten, 2022.    
    Available: https://repository.unpam.ac.id/10199/1/KB1101_ALGORITMA%20%20DAN%20STRUKTUR%20DATA.pdf  
[3] W. Tarigan, "Algoritma Pemrograman dan Struktur Data," Eureka Media Aksara, November 3, 2022.  
    Available: https://repository.penerbiteureka.com/id/publications/558553/algoritma-pemrograman-dan-struktur-data  
[4] N. Nurhasanah, Y. Kurniawan, and S. Sholihin, "Praktikum Struktur Data," Unpam Press, 9 August 2021.   
    Available: https://repository.unpam.ac.id/10030/1/TPL0222_PRATIKUM%20STRUKTUR%20DATA.pdf  
[5] M. B. Chaniago and C. K. Sastradipraja, "Buku Ajar Algoritma dan Struktur Data," Kaizen Media Publishing, December 30, 2022.   
    Available: https://www.google.co.id/books/edition/Buku_Ajar_Algoritma_dan_Struktur_Data/3PKxEAAAQBAJ?hl=en&gbpv=0