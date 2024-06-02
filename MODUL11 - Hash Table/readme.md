Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 11 Hash Table</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

`Hash Table` merupakan  salah satu struktur data yang digunakan dalam penyimpanan data sementara[1]. Tujuan penggunaan `hash table` adalah mempercepat pencarian kembali dari banyak data yang disimpan[1]. `Hash table` menggunakan suatu teknik penyimpanan sehingga waktu yang dibutuhkan untuk penambahan data (insertions), penghapusan data (deletions), dan pencarian data (searching) relatif sama dibanding struktur data atau algoritma yang lain[1]. 

`Hash table` adalah sebuah cara untuk menyimpan suatu data pada memori ke dalam baris-baris dan kolom-kolom sehingga membentuk tabel yang dapat diakses dengan cepat[2]. Setiap sel yang merupakan pertemuan antara baris dan kolom di dalam `hash table` dimana data diarsipkan disebut dengan `slot`[2].  Sebuah `hash table` dapat dibuat dari dua bagian, yaitu sebuah larik atau array dan sebuah fungsi untuk memetakan, yang disebut dengan fungsi hash atau hash function[2]. Fungsi hash adalah pemetaan ke dalam larik sesuai dengan kunci kunci yang diberikan, dengan kata lain fungsi hash mendistribusikan data yang dimasukkan oleh pengguna ke dalam tabel atau larik yang telah disediakan[2]. Salah satu cara untuk menentukan kunci `hash table` adalah dengan menggunakan sistem modulus (sisa dari pembagian dua buah bilangan) dari nilai integer pada data[2].   
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/8281561c-69a4-456f-8f3c-bd6e06efe0c9)  
Selain contoh seperti di gambar diatas, terdapat pula sebuah metode tabel hash yang disebut dengan tabel akses langsung atau `direct access table`, dimana cari ini akan memetakan data dan mengarsipkannya pada memori dengan kunci yang berupa alamat memori, sehingga kita melakukan pencarian, metode ini akan mengakses langsung alamat memori dari data yang dicari[2].  
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/7b0c850f-3fe6-4958-917a-779d8fc3ffc1)   
Terdapat pula fungsi untuk `re-hashing` dapat dibuat baik dari fungsi yang baru ataupun reaplikasi dari fungsi aslinya. Selama fungsi yang diaplikasikan ke dalam kunci ada apa aturan yang sama, maka kunci yang terlihat akan dapat dialokasikan[2].
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/29c82e83-6df2-4f38-8fd4-593fea858aa9)     
Kelebihan teknik `re-hashing` adalah waktu yan g dibutuhkan untuk melakukan fungsi `re-hashing` jauh lebih cepat dibandingkan dengan pencarian alamat pada teknik `chaining`, Kelemahan teknik ini adalah jumlah maksimum dari elemen harus diketahui dan dapat terjadi duplikasi kunci yang lain saat menghindari suatu duplaksi kunci tertentu[2].

### Kelebihan
1. `Hash table` dapat dikembangkan untuk mencari untuk mencari pola-pola tertuntu dalam sebuah string atau kalimat, `hash table` berfungsi untuk memetakan urutan dari setiap karakter[2]. 
2. `Hash table` juga dapat mempersingkat waktu pencarian, karena bila ada satu karakter saja yang tidak cocok, maka pencarian langsung berpindah pada bagian selanjutnya, jadi tidak mencari secara sekuensial[2].  

### Kekurangan
1. `Hash table` memiliki kendala, yaitu collision, untuk itu diperlukan penanganan secara khusus untuk mengatasi kendala tersebut. Beberapa penanganan yang dapat dilakukan antara lain menggunakan `hash matrix`, `chaining`, `re-hashing`, `linear probing`, dan `quadratic probing`.

## Guided 

### 1.	Guided II
```C++
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }
    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Insertion
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Searching
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    // Deletion
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;
    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;
   
    // Deletion
    ht.remove(4);
   
    // Traversal
    ht.traverse();
   
    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/e9646dcb-d883-4021-956c-b278f9651876)

Program ini merupakan implementasi dari struktur data hash table yang dapat melakukan operasi insert, search, delete maupun traverse. Hash table juga memiliki ukuran dengan maksimum 10 dan menggunakan fungsi hash sederhana yang mengembalikan nilai `key modulus MAX_SIZE`. Pada fungsi `insert`, jika key sudah ada maka nilai value diupdate, jika tidak maka akan dibuat node baru dan disimpan pada index yang sesuai. Fungsi `get` akan mencari nilai value berdasarkan `key` dan mengembalikan -1 jika `key` tidak ditemukan. Fungsi `remove` akan menghapus node yang memiliki key yang sesuai. Lalu terdapat fungsi `traverse` akan menampilkan semua key dan juga value yang tersimpan pada hash table. Pada program dibagian utama, dapat melakukan insert beberapa key dan value, kemudian mencari nilai value berdasarkan key, menghapus key yang tidak ada, dan menampilkan semua isi pada hash table. 

Hasil output program ini adalah "Get key 1:10", "Get key 4: -1", dan traversal yang menampilkan "1: 10", "2: 20", "3: 30".

### 2. Guided II

~~~C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;

    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;

    employee_map.print();

    return 0;
}
~~~

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/0d6d1e12-c481-4bcd-bf4a-411f252d81c7)

Program ini merupakan implementasi dari sebuah hash map yang digunakan untuk menyimpan data nama dan nomor telepon. Hash map ini memiliki ukuran tabel 11 dan menggunakan fungsi hash sederhana dan menjumlahkan nilai ASCII dari setiap karakter pada nama. Dalam class `HashNode`, kita menyimpan nama dan nomor telepon sebagai atributnya. Pada class `HashMap`m kita memiliki fungsi insert, remove, searchByName dan print. Fungsi insert akan menambahlan nama dan nomor telepon ke dalam hash map, jika nama sudah ada maka akan diupdate. Fungsi `remove` juga akan menghapus nama dan nomor telepon dari hash map. Pada program yang utama, dapat melakukan insert beberapa data nama, mencari nomor telepon berdasarkan nama, menghapus nama dan menampilkan semua isi dari hash map.

Hasil output program ini adalah "Nomor Hp Mistah: 1234", "Phone Hp Pastah: 5678", "Nomer Hp Mistah setelah dihapus: ", dan traversal yang menampilkan isi dari hash map.

## Unguided
### 1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :                                                                                                                                              a.	Setiap mahasiswa memiliki NIM dan nilai.                                                                                                  b.	Program memiliki tampilan pilihan menu berisi poin C.                                                                                     c.	Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).


```C++
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_SIZE = 10;

struct Mahasiswa
{
    string nama;
    long long NIM;
    int nilai;
    Mahasiswa *next; 

    Mahasiswa(string nama, long long NIM, int nilai) : nama(nama), NIM(NIM), nilai(nilai), next(nullptr) {}
};

class HashTable
{
private:
    Mahasiswa **table; 
    int hash_func(long long key)
    {
        return key % MAX_SIZE;
    }

public:
    HashTable()
    {
        table = new Mahasiswa *[MAX_SIZE](); 
    }

    ~HashTable()
    {
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            Mahasiswa *current = table[i];
            while (current != nullptr)
            {
                Mahasiswa *temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    
    void insert(string nama, long long NIM, int nilai)
    {
        int index = hash_func(NIM);                                 
        Mahasiswa *new_mahasiswa = new Mahasiswa(nama, NIM, nilai); 
        new_mahasiswa->next = table[index];                         
        table[index] = new_mahasiswa;
    }

    void remove(long long NIM)
    {
        int index = hash_func(NIM);        
        Mahasiswa *current = table[index]; 
        Mahasiswa *prev = nullptr;         
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                if (prev == nullptr)
                {
                    table[index] = current->next; 
                }
                else
                {
                    prev->next = current->next; 
                }
                delete current; 
                cout << "Mahasiswa dengan NIM " << NIM << " telah dihapus." << endl;
                return;
            }
            prev = current;
            current = current->next;
        }
        cout << "Mahasiswa dengan NIM " << NIM << " tidak ditemukan." << endl;
    }

    Mahasiswa *cari_NIM(long long NIM)
    {
        int index = hash_func(NIM); 
        Mahasiswa *current = table[index]; 
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                return current; 
            }
            current = current->next;
        }
        return nullptr;
    }

    void cari_nilai(int awal, int akhir)
    {
        cout << "+---------------------+-----------------+---------------+" << endl;
        cout << "|       Nama          |       NIM       |     Nilai     |" << endl;
        cout << "+---------------------+-----------------+---------------+" << endl;
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            Mahasiswa *current = table[i]; 
            while (current != nullptr)
            {
              
                if (current->nilai >= awal && current->nilai <= akhir)
                {
                    cout << "| " << setw(19) << left << current->nama
                         << "| " << setw(15) << current->NIM
                         << "| " << setw(13) << current->nilai << " |" << endl;
                }
                current = current->next;
            }
        }
        cout << "+---------------------+-----------------+---------------+" << endl;
    }

    // fungsi untuk menampilkan semua data mahasiswa
    void traverse()
    {
        // mencetak header tabel
        cout << "+---------------------+-----------------+---------------+" << endl;
        cout << "|       Nama          |       NIM       |     Nilai     |" << endl;
        cout << "+---------------------+-----------------+---------------+" << endl;
        // traverse semua bucket pada tabel hash
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            Mahasiswa *current = table[i]; // mengambil node pertama di indeks yang tepat
            while (current != nullptr)
            {

                cout << "| " << setw(19) << left << current->nama
                     << "| " << setw(15) << current->NIM
                     << "| " << setw(13) << current->nilai << " |" << endl;
                current = current->next;
            }
        }
        cout << "+---------------------+-----------------+---------------+" << endl;
    }
};

int main()
{
    HashTable ht;

    int pilih, nilai, awal, akhir;
    string nama;
    long long NIM;

    do
    {
        cout << "\nMenu:" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Hapus Data Mahasiswa" << endl;
        cout << "3. Cari berdasarkan NIM" << endl;
        cout << "4. Cari berdasarkan Rentang Nilai" << endl;
        cout << "5. Tampilkan Semua Data" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            cout << "Masukkan nama : ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan NIM : ";
            cin >> NIM;
            cout << "Masukkan nilai : ";
            cin >> nilai;
            ht.insert(nama, NIM, nilai);
            cout << "Data berhasil ditambahkan" << endl;
            break;
        case 2:
            cout << "Masukkan NIM yang ingin dihapus : ";
            cin >> NIM;
            ht.remove(NIM);
            break;
        case 3:
            cout << "Masukkan NIM yang ingin dicari : ";
            cin >> NIM;
            {
                Mahasiswa *mahasiswa_ptr = ht.cari_NIM(NIM);
                if (mahasiswa_ptr)
                {
                    cout << "Ditemukan mahasiswa dengan NIM " << NIM << " bernama " << mahasiswa_ptr->nama << " dan memiliki nilai " << mahasiswa_ptr->nilai << endl;
                }
                else
                {
                    cout << "Mahasiswa dengan NIM " << NIM << " tidak ditemukan" << endl;
                }
            }
            break;
        case 4:
            cout << "Masukkan nilai awal : ";
            cin >> awal;
            cout << "Masukkan nilai akhir : ";
            cin >> akhir;
            ht.cari_nilai(awal, akhir);
            break;
        case 5:
            ht.traverse();
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilih != 6);

    return 0;
}
```

### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/e7409916-e5b2-4bd2-8d28-665e367ec18a)

Pada hasil kode program diatas merupakan implementasi dari sebuah struktur data hash table yang digunakan untuk menyimpan data mahasiswa. Kelas `Hash Table` digunakan untuk mengelola hash table, dengan fungsi-fungsi seperti `insert` untuk menambahkan data mahasiswa, `remove` berfungsi untuk menghapus data mahasiswa berdasarkan NIM, `cari_NIM` digunakan untuk mencari data mahasiswa berdasarkan NIM, lalu `cari_nilai` untuk mencari data mahasiswa berdasarkan rentang nilai, dan yang terakhir adalah `traverse` yang berfungsi untuk menampilkan semua data mahasiswa. Lalu terdapat fungsi `main` yang digunakan sebagai fungsi utama program yang digunakan untuk menguji coba kelas `HashTable`, dengan menu yang dapat dipilih oleh pengguna, seperti menambahkan data mahasiswa, menghapus data mahasiswa, mencari data mahasiswa,  mencari data mahasiswa berdasarkan NIM, mencari data mahasiswa berdasarkan rentang nilai, lalu menampilkan semua data mahasiswa, dan keluar.

Output yang dihasilkan oleh program adalah menampilkan data mahasiswa yang telah ditambahkan, serta hasil pencarian data mahasiswa berdasarkan NIM dan rentang nilai.

Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Laporan ini disusun untuk memberikan panduan komprehensif mengenai konsep dasar hash table, salah satu struktur data yang penting dalam ilmu komputer. Hash table digunakan secara luas karena efisiensinya dalam operasi pencarian, penyisipan, dan penghapusan data. Struktur ini sering digunakan dalam berbagai aplikasi, termasuk database, caching, dan implementasi set dan map. Dengan menyertakan contoh program C++ yang menggunakan hash table untuk memecahkan masalah penyimpanan dan pencarian data, laporan ini memungkinkan pengguna mempelajari cara kerja hash table dan penggunaannya dalam mengelola data. Secara keseluruhan, laporan ini diharapkan dapat membantu pembaca memahami konsep dasar hash table dan mengaplikasikannya untuk mengembangkan program yang lebih efisien. Pada intinya, laporan ini membantu memahami konsep dasar hash table dan aplikasinya dalam program yang lebih baik.

## Referensi
[1] Mulyana, A., et al., Cara Mudah Mempelajari Algoritma dan Struktur Data. Edisi Pertama. Yogyakarta : DIVA Press, 2021
    Available: https://repository.mercubuana.ac.id/80729/1/Cara%20Mudah%20Mempelajari%20Algoritma%20dan%20Struktur%20Data.pdf
[2] J. Prestiliano. Aplikasi Tabel Hash dalam Pengarsipan dan Pencarian Data. Fakultas Teknologi Informasi Universitas Kristen Satya Wacana, 2019.
    Available: (https://repository.uksw.edu/bitstream/123456789/1012/2/ART_Jasson%20Prestiliano_Aplikasi%20tabel%20hash_Full%20text.pdf).
