Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 6 Linked List </h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

`Linked List` adalah struktur data yang terdiri dari rantaian elemen sejenis yang saling berhubungan[1]. Setiap elemen memiliki pendahuluan dan penerusnya (kecuali elemen terakhir)[1]. `Linked List` disusun semirip mungkin dengan array namun masih terdapat perbedaan yang besar bahwa ukuran (size)[5]. `Linked List` dinamis tidak statis[5]. Pengelolaan memori secara dinamis artinya tidak perlu mengalokasi memori lebih awal secara tetap (fixed) dengan cara dinamis dapat melakukan[3]:
1. alokasi dan[3],
2. alokasi memori[3].

Artinya adalah bahwa kita dapat melakukan operasi menambah elemen serta mengurangi elemen secara runtime[5]. `List` atau `Linked List` dapat berupa list siswa, list harga barang, list pelanggan dan lain sebagainya[5]. `Linked List` juga dapat diartikan sebagai structure atau komponen yang berangakai elemen saling berkait dimana tiap elemen dihubungkan ke elemen yang lain melalui pointer[4]. Pointer adalah alamat elemen[4]. `Linked List` merupakan kumpulan komponen yang saling berkaitan satu dengan yang lain melalui pointer[4]. Masing-masing komponen sering disebut dengan simpul atau verteks[4]. Linked List juga dapat diartikan sebagai structure atau komponen yang berangakai elemen saling terhubung ke elemen lainya melalui tipe variable pointer, komponen ini disebut simpul atau node, dan terbagi dua bagian[4]. Bagian pertama adalah isi atau data yang disimpan oleh node[4]. Bagian kedua disebut pointer berisi alamat node berikutnya dan sebelumnya[4]. Pengelohan data yang dilakukan berupa menyimpan data dan pengolahan lain dari sekelompok data yang telah terorganisir dalam sebuah urutan tertentu.

### Jenis Linked List
Ada beberapa cara, yaitu:
1. Single Linked List[4].
2. Double Linked List[4].

### Beberapa definisi
Terdapat beberapa definisi yaitu:
1. List l adalah list kosong, jika First(L) = Nil.
2. Elemen terakhir dikenali, dengan salah satu cara yaitu karena Next(Last)= Nil.     
Nil adalah pengganti Null. Perubahan ini dituliskan dengan #define Nil Null.

## Guided

### 1.  Double Linked List.

```C++
#include <iostream>
using namespace std;

///PROGRAM DOUBLE LINKED LIST
class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/fa26abf6-c727-4f4c-b0df-b98130d72e96)

Program ini merupakan implementasi dari Double Linked List yang merupakan sebuah struktur data yang memungkinkan untuk menyimpan data dan menghapus, mengupdate, dan menampilkan data dalam bentuk node yang saling terhubung, serta memiliki fitur untuk menghapus data dan keluar dari program, dengan output yang menampilkan menu pilihan dan hasil operasi yang dilakukan pada DLL. DLL adalah sebuah struktur data yang memungkinkan kita untuk menyimpan dan mengelola data dalam bentuk node yang saling terhubung.

Terdapat `node` merupakan sebuah class yang mempresentasikan sebuah node dalam DLL dan setiap nodenya memiliki tiga anggota yaitu: `data` untuk menyimpan nilai integer, `prev` untuk menyimpan alamat node sebelumnya dan `next` untuk menyimpan alamat node berikutnya. Lalu di dalam program terdapat `DoublyLinkedList` digunakan untuk sebuah class yang memrepresentasikan sebuah DLL yang memiliki dua anggota yaitu: `head` berfungsi untuk menyimpan alamat node pertama, dan `tail` untuk menyimpan alamat node terakhir. Lalu terdapat penggunaan loop didalam program `while` untuk menampilkan menu kepada pengguna.

Output program ini akan menampilkan sebuah menu pilihan kepada user, seperti menambahkan data, menghapus data, mengupdate data, menghapus semua data, menampilkan data dan keluar dari program. Ketika user memilih salah satu menu, program akan melakukan operasi yang sesuai dan menampilkan hasilnya.
 
### 2.  Single Linked List Non-Circular.

```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    return 0;
}
```
### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/463bec1b-e2f3-4301-b989-187275b9bfdd)

Program ini adalah implementasi Single Linked List Non-Circular yang merupakan jenis struktur data yang terdiri dari node-node yang saling terhubung melalui pointer, dengan satu arah saja dan tanpa ada membentuk lingkaran. Program ini berfungsi untuk menambah, menghapus, dan juga mengubah data pada node di depan, tengah, dan juga belakang, serta dapat menampilkan dan menghapus semua data pada linked list.

Terdapat beberapa fungsi yang terdapat didalam program yaitu: `init()` yang berfungsi untuk menginisialisasi untuk mengatur head dan tail menjadi NULL. `isEmpty()` yang berfungsi untuk mengecek apakah linked list kosong atau tidak. `insertTengah(int data, int posisi)` yang berfungsi untuk menambahkan node baru di posisi tengah linked list. `hapusDepan()` yang berfungsi untuk menghapus node pertama pada list. `ubahTengah(int data, int posisi)` berfungsi untuk mengubah data pada node di posisi tengah linked list. `cleasrList()` yang berfungsi untuk menghapus semua node di linked list. Lalu terdapat fungsi `tampil()` yang digunakan untuk menampilkan data pada setiap code di linked list.

Output dari program ini adalah menampilkan hasil dari setiap operasi yang dilakukan pada linked list, yaitu menambahkan dan menghapus data pada node depan, tengah, belakang, serta mengubah data pada node tertentu, serta menampilkan dan menghapus semua data pada linked list.

### 3.  Single Linked List Non-Circular.

```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST CIRCULAR

// Deklarasi Struct Node
struct Node {
    string data;
    Node *next;
};

Node *head, *tail, *baru, *bantu, *hapus;

void init() {
    head = NULL;
    tail = head;
}

// Pengecekan
int isEmpty() {
    if(head == NULL)
       return 1; // true
    else
       return 0; // false     
}

// Buat Node Baru
void buatNode(string data) {
    baru = new Node;
    baru->data = data;
    baru->next = NULL;
}

// Hitung List
int hitungList() {
    bantu = head;
    int jumlah = 0;

    while (bantu != NULL) {
        jumlah++;
        bantu = bantu->next;
    }

    return jumlah;
}

// Tambah Depan
void insertDepan(string data) {
    // Buat Node baru
    buatNode(data);

    if (isEmpty() == 1) {
        head = baru;
        tail = head;
        baru->next = head;
    } else {
        while (tail->next != head) {
            tail = tail->next;
        }

        baru->next = head;
        head = baru;
        tail->next = head;
    }
}

// Tambah Belakang
void insertBelakang(string data) {
    // Buat Node Baru
    buatNode(data);

    if (isEmpty() == 1) {
        head = baru;
        tail = head;
        baru->next = head;
    } else {
        while (tail->next != head) {
            tail = tail->next;
        }

        tail->next = baru;
        baru->next = head;
    }
}

// Tambah Tengah
void insertTengah(string data, int posisi) {
    if (isEmpty() == 1) {
        head = baru;
        tail = head;
        baru->next = head;
    } else {
        baru->data = data;

        // transversing
        int nomor = 1;
        bantu = head;

        while (nomor < posisi -1) {
            bantu = bantu->next;
            nomor++;
        }

        bantu->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Depan
void HapusDepan() {
    if (isEmpty() == 0) {
        hapus = head;
        tail = head;
        
        if (hapus->next == head) {
            head = NULL;
            tail = NULL;
            delete hapus;
        } else {
            while (tail->next != hapus) {
                tail = tail->next;
            }

            head = head->next;
            tail->next = head;
            hapus->next = NULL;
            delete hapus;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Belakang
void hapusBelakang() {
    if (isEmpty() == 0) {
        hapus = head;
        tail = head;

        if (hapus->next == head) {
            head = NULL;
            tail = NULL;
            delete hapus;
        } else {
            while (hapus->next != head) {
                hapus = hapus->next;
            }

            while (tail->next != hapus) {
                tail = tail->next;
            }
            
            tail->next = head;
            hapus->next = NULL;
            delete hapus;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Tengah
void hapusTengah(int posisi) {
    if (isEmpty() == 0) {
        // transversing
        int nomor = 1;
        bantu = head;
        
        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor++;
        }

        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus List
void clearList() {
    if (head != NULL) {
        hapus = head->next;

        while (hapus != head) {
            bantu = hapus->next;
            delete hapus;
            hapus = bantu;
        }
        delete head;
        head = NULL;
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampilan List
void tampil() {
    if (isEmpty() == 0) {
        tail = head;

        do {
            cout << tail->data << ends;
            tail = tail->next;
        } while (tail != head);

        cout << endl;
    } else {
        cout << "List masik kosong!" << endl;
    }
}

int main() {
    init();
    insertDepan("Ayam");
    tampil();
    insertDepan("Bebek");
    tampil();
    insertBelakang("Cicak");
    tampil();
    insertBelakang("Domba");
    tampil();
    hapusBelakang();
    tampil();
    HapusDepan();
    tampil();
    insertTengah("Sapi", 2);
    tampil();
    hapusTengah(2);
    tampil();
    return 0;
}
```
### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/c301a1ca-5eca-4409-9b06-104a59b53029)

Program ini merupakan implementasi Single Linked List Circular yang dapat menambahkan data di depan, belakang, dan tengah, serta dapat menghapus data dari depan, belakang, dan tengah, serta dapat juga menghapus dat dari depan, belakang, dan tengah, serta dapat menampilkan dan menghapus semua data pada linked list.

Terdapat beberapa fungsi yang digunakan untuk memanipulasi linked list, yaitu: `init()` yaitu fungsi inisialisasi linked list dengan membuat head dan tail menjadi NULL. `isEmpty` berfungsi untuk mengecek apakah linked list kosong atau tidak. Terdapat fungsi `buatNode(string data)` digunakan untuk membuat node baru dengan member data dan next. Fungsi `hitungList()` digunakan untuk menghitung jumlah node pada linked list. `clearList()` merupakan fungsi untuk menghapus semua node pada linked list. `tampil()` berfungsi untuk menampilkan data pada setiap node pada linked list.

Output dari program ini akan menampilkan hasil dari setiap operasi yang dilakukan pada linked list, yaitu menambahkan data "Ayam" dan "Bebek" didepan, menambahkan data "Cicak" dan "Domba" di belakang, menghapus data "Domba" di belakang, menghapus data "Ayam" di depan, menambahkan data "Sapi" pada posisi ke-2, dan menghapus data "Sapi" pada posisi ke-2.

## Unguided 

### 1. [Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan  NIM mahasiswa, berikut contoh tampilan output dari nomor 1: !]

```C++
#include <iostream>
using namespace std;

// Definisi Node
struct Node {
    string nama;
    string nim;
    Node* next;
};

// Inisialisasi Head
Node* head = NULL;

// Fungsi untuk menambahkan data di depan
void tambahDepan() {
    string nama, nim;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan Nama: ";
    cin.ignore(); // Membersihkan buffer agar getline() berfungsi dengan baik
    getline(cin, nama);

    Node* newNode = new Node();
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = head;
    head = newNode;
    cout << "Data berhasil ditambahkan" << endl;
}

// Fungsi untuk menampilkan data
void tampilkanData() {
    cout << "==================================" << endl;
    cout << "         DATA MAHASISWA           " << endl;
    cout << "==================================" << endl;
    cout << "NIM\t\tNama" << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->nim << "\t\t" << temp->nama << endl;
        temp = temp->next;
    }
    cout << endl;
}

// Fungsi utama
int main() {
    int operasi;

    do {
        cout << "==================================" << endl;
        cout << "   PROGRAM MANAJEMEN MAHASISWA   " << endl;
        cout << "==================================" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "==================================" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                tambahDepan();
                break;
            case 2:
                tampilkanData();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid." << endl;
        }
    } while (operasi != 0);

    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/3fbae4b1-a0e0-4e0e-a111-c76844ad7194)

Program ini merupakan sebuah program manajemen mahasiswa yang menggunakan linked list. Program ini memiliki dua fungsi utama yaitu, menambahkan data mahasiswa dan menampilkan data mahasiswa. Terdapat fungsi `tambahDepan()` digunakan untuk menambahkan data mahasiswa didepan linked list. Program akan meminta pengguna untuk memasukkan NIM dan nama mahasiswa. Setelah itu, data tersebut akan disimpan dalam sebuah node baru yang akan ditambahkan ke linked list. Kemudian fungsi `tampilkanData` digunakan untuk menampilkan data mahasiswa yang ada dalam linked list. Lalu program akan menampilkan NIM dan nama mahasiswa dari setiap node dalam linked list. 

Output dari program menampilkan menu untuk melakukan operasi pada program manajemen mahasiswa. Terdpat tiga operasi yang dapat dilakukan yaitu: tambah data, tampilkan data, keluar.

Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar Linked List yang merupakan struktur data yang terdiri dari node-node yang saling berhubungan melalui pointer. Dalam linked list, setiap node memiliki data dan pointer ke node berikutnya. Linked list dapat digunakan untuk menampung data yang memiliki hubungan antara satu sama lain, seperti daftar nama dan nim mahasiswa, daftar transaksi, dan lain-lain.
Dalam laporan ini, terdapat fungsi-fungsi untuk mengelola linked list, seperti menambahkan data di depan, menambahkan data di belakang, mengubah data di depan, mengubah data di belakang, menghapus data di depan, menghapus data di belakang, dan menghapus seluruh linked list. Fungsi-fungsi ini membantu dalam mengelola data yang disimpan dalam linked list dan memungkinkan pengguna untuk menambahkan, mengubah, dan menghapus data dengan mudah.

Dengan demikian, laporan ini dapat menjadi acuan yang berguna bagi pengembang perangkat lunak yang ingin memahami konsep dasar linked list dan mengelola data yang disimpan dalam linked list.

## Referensi
[1] A. Mulyana dkk., "Pembelajaran Mudah Algoritma dan Struktur Data," dalam Prosiding IEEE, vol. 1, no. 1, pp. 1-10, Okt. 2021.  
    Available: https://repository.mercubuana.ac.id/80729/1/Cara%20Mudah%20Mempelajari%20Algoritma%20dan%20Struktur%20Data.pdf    
[2] W. Tarigan, "Algoritma Pemrograman dan Struktur Data," November 3, 2022.    
    Available: https://repository.penerbiteureka.com/id/publications/558553/algoritma-pemrograman-dan-struktur-data  
[3] H. Soetanto, "Struktur Data: Dasar-Dasar Pemrograman," Universitas Budi Luhur.   
    Available: https://dirdosen.budiluhur.ac.id/0314056902/pak/buku/strukturdata%20Perpusr%202022.pdf  
[4] N. Nurhasanah, Y. Kurniawan, dan S. Sholihin, "Praktikum Struktur Data I," Universitas Pamulang, Program Studi Teknik Informatika S-1.  
    Available: https://repository.unpam.ac.id/10030/1/TPL0222_PRATIKUM%20STRUKTUR%20DATA.pdf  
[5] C. T. Setyobudhi, "Praktikum Struktur Data I," Mega Press Nusantara, Aug. 31, 2023.  
    Available:https://www.google.co.id/books/edition/BUKU_AJAR_PEMROGRAMAN_STRUKTUR_DATA/LBLlEAAAQBAJ?hl=en&gbpv=0
