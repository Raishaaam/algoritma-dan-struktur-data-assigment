Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 8 Queue</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori

`Queue` atau Antrian merupakan kumpulan elemen dengan penyisipan dan penghapusan elemen yang dilakukan dari sisi/gerbang yang berbeda[1]. Dalam ilmu komputer, antrian/queue adalah struktur data yang agak berbeda seperti tumpukkan, kecuali bahwa dalam antrian, item pertama yang dimasukkan adalah yang pertama dihapus `First-In-First-Out, Fifo` sementara dalam tumpukan, seperti yang telah terlihat, item terakhir dimasukkan adalah yang pertama akan dihapus `LIFO`[2]. Dengan kata lain, urutan keluar elemen akan sama dengan urutan masuknya[3]. Dari defini antrian (queue), dapat dilihat bahwa terdapat dua operasi kunci adalah tambah dan hapus. Dapat disebut sebagai `aad` operasi `addQueue` dan operasi `delete` yaitu `deleteQueue`[4]. Karena elemen tidak dapat dihapus dari antrian kosong atau ditambahkan ke antrian penuh, kita memerlukan dua operasi lagi untuk berhasil mengimplementasikan operasi `addQueue` dan `deleteQueue`: `isEmptyQueue`(memeriksa apakah antrian kosong) dan `isFullQueue` (memeriksa apakah antrian sudah penuh)[4]. Membutuhkan operasi, `inisialisasiQueue` untuk menginisialisasi antrian ke keadaan kosong[4]. Selain itu, untuk mengambil elemen pertama dan terakhir dari antrian, kami menyertakan operasi depan dan belakang seperti yang dijelaskan dalam daftar berikut[4].

### Beberapa operasi antrian
1. `initializeQueue` Menginisialisasi antrian ke keadaan kosong.
2. `isEmptyQueue` Menentukan apakah antrian kosong. Jika antri
kosong, ini mengembalikan nilai true; jika tidak, itu mengembalikan nilai salah.
3. `isFullQueue` Menentukan apakah antrian penuh. Jika antriannya
full, ini mengembalikan nilai true; jika tidak, itu mengembalikan nilai 
salah.
4. `front` Mengembalikan bagian depan, yaitu elemen pertama antrean.
5. `back` Mengembalikan elemen terakhir dari antrian. Sebelum operasi ini, antrian harus ada dan tidak boleh kosong.
6. `addQueue` Menambahkan elemen baru ke belakang antrian. Sebelum 
operasi ini, antrian harus ada dan tidak boleh penuh.
7. `deleteQueue` Menghapus elemen depan dari antrian. Sebelum
operasi ini, antrian harus ada dan tidak boleh kosong.

### Karakteristik Penting Queue
1. Element antrian yaitu item-item data yang terdapat di elemen antrian[2].
2. Front (element terdepan di antrian)[2].
3. Rear (element terakhir di antrian)[2.]
4. Jumlah elemen pada antrian (Count)[2].
5. Status antrian[2].

### Queue terdapat 2 macam:
1. Linier[5].
2. Sirkuler[5].

## Guided 1

```C++
#include <iostream>

using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;

string queueTeller[5];

bool isFull() {
    if (back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian Penuh" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```

### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/1150f820-aa73-463f-ae50-7d4e7e240fab)

Program ini adalah implementasi antrian (queue) dengan menggunakan variabel `queueTeller` yang merupakan array of string yang digunakan sebagai antrian. Terdapat variabel `front` dan `back`digunakan sebagai indeks untuk mengontrol elemen yang akan dimasukkan atau dihapus dari antrian. Terdapat fungsi `isFull()` dan `isEmpty()` digunakan untuk memeriksa apakah antrian penuh atau kosong. Fungsi `enqueueAntria()` digunakan untuk menambahkan elemen ke dalam antrian, sedangkan fungsi `dequeueAntrian()` digunakan untuk menghapus elemen darim antrian. Fungsi `countQueue()` digunakan untuk mengembalikan jumlah elemen yang terdapat dalam antrian, sedangkan fungsi `clearQueue()` digunakan untuk membersihkan semua elemen yang terdapat dalam antrian. Fungsi `viewQueue` digunakan untuk menampilkan semua elemen yang ada didalam antrian.

Hasil output program akan menunjukkan data antrian teller setelah dilakukannya operasi. Pertama, terdapat dua nama "Andi" dan "Maya" akan dimasukkan ke dalam antrian. Lalu, akan muncul tampilan jumlah antrian dan data antrian teller. Setelah itu, pada elemen pertama dari antrian akan dihapus dan akan muncul ditampilkan kembali data antrian teller dan jumlah antriannya. Yang terakhir, semua elemen yang terdapat dalam antrian akan dihapus dan akan ditampilkan kembali data antrian teller dan jumlah antriannya.


## Unguided 

### 1. [Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list]

```C++
// C++ implementation of a queue using a linked list

#include <iostream>

struct QueueNode {
    std::string data;
    QueueNode* next;
};

class Queue {
private:
    QueueNode* front;
    QueueNode* back;
    int size;

public:
    Queue() : front(nullptr), back(nullptr), size(0) {}

    ~Queue() {
        while (front != nullptr) {
            QueueNode* temp = front;
            front = front->next;
            delete temp;
        }
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == 5; // adjust this to a more dynamic limit if needed
    }

    void enqueue(std::string data) {
        if (isFull()) {
            std::cout << "Antrian Penuh" << std::endl;
            return;
        }

        QueueNode* newNode = new QueueNode();
        newNode->data = data;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = newNode;
            back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Antrian kosong" << std::endl;
            return;
        }

        QueueNode* temp = front;
        front = front->next;
        delete temp;
        size--;

        if (isEmpty()) {
            back = nullptr;
        }
    }

    int count() {
        return size;
    }

    void clear() {
        while (front != nullptr) {
            QueueNode* temp = front;
            front = front->next;
            delete temp;
        }
        back = nullptr;
        size = 0;
    }

    void view() {
        std::cout << "Data antrian teller: " << std::endl;
        QueueNode* temp = front;
        int i = 1;
        while (temp != nullptr) {
            std::cout << i << ". " << temp->data << std::endl;
            temp = temp->next;
            i++;
        }
    }
};

int main() {
    Queue queue;

    queue.enqueue("Andi");
    queue.enqueue("Maya");
    queue.view();
    std::cout << "Jumlah antrian = " << queue.count() << std::endl;
    queue.dequeue();
    queue.view();
    std::cout << "Jumlah antrian = " << queue.count() << std::endl;
    queue.clear();
    queue.view();
    std::cout << "Jumlah antrian = " << queue.count() << std::endl;
    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/2c2467a6-4368-4777-9c44-8aa23756ece1)

Program ini merupakan implementasi queue menggunakan linked list. Queue merupakan struktur data yang mengatur data dalam urutan first-in-first-out (FIFO), yang artinya data yang masuk terlebih dahulu adalah data yang keluar lebih dulu. Pada kelas Queue memiliki pointer `front` dan `back` yang menunjukkan node pertama dan terakhir pada antrian. Setiap node pada antrian berisi data string dan pointer ke node selanjutnya. Antrian memiliki metode untuk menambahkan (enqueue) dan mengambil (dequeue) elemen, serta untuk memeriksa apakah antrian penuh atau kosong, dengan menampikan antrian, menghitung jumlah elemen dan membersihkan antrian dari semua elemen.

Pada fungsi `main`, dibuat objek dari kelas `Queue` dan ditambahkan dua elemen ke antrian, yaitu "Andi" dan "Maya". Antrian akan ditampilkan dengan jumlah elemen antrian yang dicetak. Kemudian, elemen-elemen tersebut akan dihapus dari antrian, dan antrian akan ditampikan kembali, lalu jumlah elemen pada antrian akan dicetak. Setelah itu, seluruh elemen dalam antrian akan dibersihkan, dan antrian akan ditampilkan sekali lagi, diikuti dengan pencetakan jumlah elemen dalam antrian setelah dibersihkan. 

Hasil output dari program ini akan menunjukkan bahwa awalnya ntrian mengandung dua elemen yaitu, "Andi" dan "Maya", dan setelah itu menghapus satu elemen, antrian hanya mengandung satu elemen, "Maya". Terakhir, setelah membersihkan antrian, ia tidak memiliki elemen sama sekali.

### 2. [Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa]

~~~C++
#include <iostream>
#include <string>

struct Node {
    std::string nama;
    std::string nim;
    Node* next;
};

class Antrian {
private:
    Node* front;
    Node* rear;
    int size;

public:
    Antrian() : front(nullptr), rear(nullptr), size(0) {}

    ~Antrian() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == 5;
    }

    void enqueue(std::string nama, std::string nim) {
        if (isFull()) {
            std::cout << "Antrian Penuh" << std::endl;
            return;
        }

        Node* newNode = new Node();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Antrian kosong" << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
        size--;

        if (isEmpty()) {
            rear = nullptr;
        }
    }

    int count() {
        return size;
    }

    void clear() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr;
        size = 0;
    }

    void view() {
        std::cout << "Data antrian mahasiswa: " << std::endl;
        Node* temp = front;
        int i = 1;
        while (temp != nullptr) {
            std::cout << i << ". Nama: " << temp->nama << ", NIM: " << temp->nim << std::endl;
            temp = temp->next;
            i++;
        }
    }
};

int main() {
    Antrian antrian;

    antrian.enqueue("Raisha", "2311110002");
    antrian.enqueue("Raisha", "2311110002");
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    antrian.dequeue();
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    antrian.clear();
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    return 0;
}
~~~

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/5fcef388-c18f-4f54-bf6d-b97f32cb8b2e)

Program ini merupakan implementasi dari queue menggunakan linked list list dengan atribut nama dan NIM mahasiswa. Kelas `Antrian` memiliki pointer `front` dan `rear` yang menunjukkan node pertama dan juga terakhir pada antrian. Setiap nde pada amtrian berisi data string nama dan NIM mahasiswa dan pointer ke node selanjutnya. Antrian memiliki metode untuk menambahkan (enqueue) dan mengambil (dequeue) elemeb, serta untuk memeriksa apakah antrian kosong atau penuh, menampilkan antrian, menghitung jumlah elemen, dan membersihkan antrian dari semua elemen.

Pada fungsi `main`, dibuat objek dari kelas `Antrian` dan ditambahkan dua elemen ke antrian, yaitu "Raisha" dan "2311110002". Antrian akan menampilkan dengan jumlah elemen antrian yang dicetak. Setelah itu, elemen dihapus dari antrian dan antrian akan ditampilkan kembali, lalu dicetak jumlah elemen pada antrian. Selanjutnya, antrian akan dibersihkan dari semua elemen, dan antrian ditampilkan lagi, lalu dicetak jumlah elemen pada antrian.

Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Pada laporan ini disusun untuk menjadi acuan untuk memahami konsep dasar Queue. Laporan ini menjelaskan definisi Queue, termasuk cara mendeklarasikan dan mengisi data ke dalam Queue, serta cara menampilkan data dari Queue. Selain itu, laporan ini memberikan contoh dari program C++ yang menggunakan Queue untuk menyimpan informasi tentang buku. Dengan menggunakan program ini, pengguna dapat mempelajari cara kerja Queue dan bagaimana mereka dapat digunakan untuk mengelola data secara lebih efektif. Secara keseluruhan, laporan ini diharapkan dapat membantu pembaca untuk memahami konsep dasar Queue dan bagaimana mereka dapat digunakan untuk mengembangkan program yang lebih baik.

## Referensi
[1] Erkamim Erkamim, Iim Abdurrohim, Siti Yuliyanti, Rahmat Karim, Alkautsar Rahman, Tb. M. Adrie Admira, and Achmad Ridwan, "Buku Ajar Algoritma dan Struktur Data," Published January 11, 2024.  
    Available: https://www.google.co.id/books/edition/Buku_Ajar_Algoritma_dan_Struktur_Data/C4XtEAAAQBAJ?hl=en&gbpv=0   
[2] A. Zein and E. S. Eriana, "Algoritma dan Struktur Data," Universitas Pamulang, Sistem Informasi S-1.  
    Available: https://repository.unpam.ac.id/10199/1/KB1101_ALGORITMA%20%20DAN%20STRUKTUR%20DATA.pdf  
[3] W. Tarigan, "Algoritma Pemrograman dan Struktur Data," Eureka Media Aksara, Nov. 3, 2022.
    Available:https://repository.penerbiteureka.com/id/publications/558553/algoritma-pemrograman-dan-struktur-data  
[4] Nurhasanah, Y. Kurniawan, and Sholihin, "Praktikum Struktur Data," Universitas Pamulang, Teknik Informatika S-1.  
    Available: https://repository.unpam.ac.id/10030/1/TPL0222_PRATIKUM%20STRUKTUR%20DATA.pdf  
[5] H. Soetanto, "Struktur Data Dasar-Dasar Pemrograman," Universitas Budi Luhur.  
    Available: https://dirdosen.budiluhur.ac.id/0314056902/pak/buku/strukturdata%20Perpusr%202022.pdf