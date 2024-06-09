Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 12 Graph and Tree </h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori
### Graph

`Graph` adalah kumpulan node (simpul) di dalam bidang dua dimensi yang dihubungkan dengan sekumpulan garis (sisi)[1]. `Graph` dapat digunakan untuk merepresentasikan objek-objek diskret dan hubungan antara objek-objek tersebut[1]. Representasi visual dari `graph` adalah dengan menyatakan objek sebagai node, bulatan, atau titik (vertex), sedangkan hubungan antara objek dinyatakan dengan garis (edge)[1]. Teori `Graph` adalah bidang studi yang luas yang didasarkan pada gagasan sederhana tentang titik-titik individu - yang dikenal sebagai simpul - dihubungkan oleh garis yang dikenal sebagai tepi, yang masing-masing mungkin memiliki nilai numerik terkait yang disebut berat dan mungkin juga arah[2].

`Graph` merupakan suatau cabang ilmu yang memiliki banyak terapan[3]. 

### Jenis-jenis Graph.
1. Graph Tak Berarah (undirected graph atau non-directed graph)[3].
2. Graph Berarah (directed graph)[3].
3. Graph Berbobot (Weighted Graph)[3].    
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/5f1031ef-64a8-4c18-a8e6-88eedabdfd6e)

### Istilah-istilah dalam graf
1. `Vertex` (himpunan node/titik pada sebuah graph)[3].
2. `Edge` (himpunan garis yang menghubungkan tiap node/vertex)[3].
3. `Adjacent` (dua buah titik dikatakan berdekatan (adjacent) jika dua buah titik tersebut terhubung dengan sebuah sisi)[3].
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/4fcb9694-5c1f-4d35-91ef-66172b5ee14b)
4. `Weight` (sebuah graf yang disebut graf berbobot (weight graph))
5. `Path` (adalah walk dengan vertex berbeda)
6. `Cycle` (adalah siklus atau sirkuit lintasan yang berawal dan berakhir pada simpul yang sama)[3].

### Manfaat Graph.   
1. Graph menyediakan cara yang lebih baik untuk berurusan dengan konsep abstrak seperti hubungan dan interaksi. Mereka juga menawarkan cara berpikir visual yang intuitif tentang konsep-konsep ini. Graph juga membentuk dasar alami untuk menganalisis hubungan dalam konteks sosial[2].
2. Database Graph telah menjadi alat komputasi umum dan alternatif untuk database SQL dan NoSQL[2].
3. Graph digunakan untuk memodelkan alur kerja analitik dalam bentuk DAGs (Graph asiklik terarah)[2].
4.Beberapa Neural Network Frameworks juga menggunakan DAGs untuk memodelkan berbagai operasi di lapisan yang berbeda[2].
5. Konsep Teori Graph digunakan untuk mempelajari dan memodelkan Jejaring 
Sosial, pola Penipuan, pola konsumsi daya, Viralitas dan Pengaruh di Media Sosial. Social Network Analysis (SNA) mungkin adalah aplikasi teori graph untuk ilmu data yang paling terkenal[2].
6.  Hal ini digunakan dalam algoritma Clustering - Khususnya K-Means[2].
7. . Dinamika sistem juga menggunakan beberapa konsep Teori Graph – khususnya loop[2].
8. Path Optimization adalah bagian dari masalah Optimasi yang juga menggunakan konsep Graph[2].
9. Dari perspektif Ilmu Komputer – Graph menawarkan efisiensi komputasi. Kompleksitas Big O untuk beberapa algoritma lebih baik untuk data yang diatur dalam bentuk Graph (dibandingkan dengan data tabular)[2].

### Tree

`Tree` dalam pemrograman merupakan struktur data yang tidak linear/non linear yang digunakan terutama untuk mempresentasikan hubungan data yang bersifat hierarkis antara elemen-elemennya[3]. Kumpulan elemen yang salah satu elemennya disebut dengan root (akar) dan sisa elemen yang lain disebut sebagai simpul (node/vertex) yang terpecah menjadi sejumlah himpunan yang tidak saling berhubungan satu sama lain, yang disebut dengan subtree/cabang[3].    
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/2ded8520-6045-49fc-a3db-7ed96f464612)

### Perbedaan Graph dengan Tree sebagai berikut:
1. Pada Tree tidak terdapat Cycle[3].
2. Pada Graf tidak memiliki Root[3].

## Guided 1

```C++
#include <iostream>
#include <iomanip>

using namespace std;

string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0}
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris][kolom] != 0) {
                cout << " " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}

```

### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/0656d781-fd0f-4a3b-adf7-b87cb281e086)

Program ini merupakan implementasi dari representasi graf yang menggunakan adjacency matrix. Graf ini memiliki 7 simpul (node) yang didefinisikan dalam array `simpul` dengan nama-nama kota di Indonesia. Matriks `busur` juga memuat adanya busur (edge) antar simpyl, dimana nilai 0 berarti tidak ada busur dan nilai lainnya berarti ada busur dengan bobot (weight) tertentu. Lalu fungsi `tampilGraph` digunakan untuk menampilkan graf tersebut ke dalam bentuk tabel, dimana setiap baris memuat simpul dan kolom-kolomnya merepresentasikan simpul lain yang terhubung dengan simpul beserta bobotnya.

Hasil output program ini akan menghasilkan sebuah tabel yang menampilkan graf tersebut, contohnya "Ciamis: Bandung(7) Bekasi(8)" yang berarti simpul Ciamis terhubung dengan simpul Bandung dengan bobot 7 dan simpul Bekasi dengan bobot 8.

## Guided 2

```C++
#include<iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node != NULL) {
        cout << node -> data << " ";
        preOrder(node -> left);
        preOrder(node -> right);
    }
}

void inOrder(TNode *node) {
    if (node != NULL) {
        inOrder (node -> left);
        cout << node -> data << " ";
        inOrder(node -> right);
    }
}

void postOrder(TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode *zero = new TNode(0);
    // 0
    // /\
    // NULL NULL

    TNode *one = new TNode(1);
    TNode *five = new TNode(5);
    TNode *seven = new TNode(7);
    TNode *eight = new TNode(8);
    TNode *nine = new TNode(9);

    seven -> left = one;
    // 7
    // /\
    // 1 NULL

    seven -> right = nine;
    // 7
    // /\
    // 1 9

    one -> left = zero;
    // 7
    // /\
    // 1 9
    // /\
    // 0 NULL

    one -> right = five;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5

    nine -> left = eight;
    // 7
    // /\
    // 1 9
    // / \ / \
    // 0 5 8 NULL

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/b8dffa2e-bd68-4c6a-999e-a04409e244de)

Program ini merupakan implementasi dari struktur data binary tree (pohon biner) menggunakan struct `TNode` yang memiliki atribut `data`, `left`, dan `right` untuk menyimpan nilai dan referensi ke node kiri dan kanan. Program ini juga mendefinisikan tiga fungsi untuk melakukan traversal (pengunjungan) pada pohon biner, yaitu `preOrder`, `inOrder`, dan `postOrder`. Fungsi `preOrder` melakukan pengunjungan dengan urutan root-node-left-right, `inOrder` dengan urutan left-root-right, dan `postOrder` dengan urutan left-right-root. Pada `main`, program ini membuat sebuah pohon biner dengan struktur seperti pada komentar, kemudian melakukan traversal menggunakan ketiga fungsi tersebut. 

Hasil output program ini adalah tiga baris yang menampilkan urutan pengunjungan pohon biner, yaitu `preOrder`: `7 1 0 5 9 8`, `inOrder`: `0 1 5 7 8 9`, dan `postOrder`: `0 5 1 8 9 7`. 

## Unguided
### 1.	Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya. Output Program:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/f89cb294-3b04-4807-942a-159be6dae034)

```C++
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Graf {
    string *namaSimpul;
    int **jarak;
    int jumlahSimpul;
};

void tampilkanGraf(Graf g) {
    cout << "  ";
    for (int i = 0; i < g.jumlahSimpul; i++) {
        cout << setw(6) << g.namaSimpul[i];
    }
    cout << endl;
    for (int i = 0; i < g.jumlahSimpul; i++) {
        cout << setw(4) << g.namaSimpul[i];
        for (int j = 0; j < g.jumlahSimpul; j++) {
            cout << setw(6) << g.jarak[i][j];
        }
        cout << endl;
    }
}

int main() {
    Graf g;

    cout << "Silakan masukan jumlah simpul: ";
    cin >> g.jumlahSimpul;
    cin.ignore();

    g.namaSimpul = new string[g.jumlahSimpul];
    g.jarak = new int *[g.jumlahSimpul];
    for (int i = 0; i < g.jumlahSimpul; i++) {
        g.jarak[i] = new int[g.jumlahSimpul]();
    }

    cout << "Silakan masukan nama simpul:" << endl;
    for (int i = 0; i < g.jumlahSimpul; i++) {
        cout << "Simpul " << i + 1 << ": ";
        getline(cin, g.namaSimpul[i]);
    }

    cout << "Silakan masukkan bobot antar simpul:" << endl;
    for (int i = 0; i < g.jumlahSimpul; i++) {
        for (int j = 0; j < g.jumlahSimpul; j++) {
            cout << g.namaSimpul[i] << "--> " << g.namaSimpul[j] << " = ";
            cin >> g.jarak[i][j];
        }
    }

    cout << endl;
    tampilkanGraf(g);

    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/192e56a2-fe4f-4636-afa4-60c9366f04ad)

Program ini merupakan implementasi dari struktur data graf yang merepresentasikan sebuah simpul dan jarak antar simpul. Pada program ini juga meminta onput dari pengguna untuk jumlah simpul, nama simpul dan bobot jarak antar simpul. Kemudian, program akan menampilkan graf tersebut dalam bentuk matriks yang menunjukkan jarak antar simpul. 

Lalu fungsi `tampilkanGraf` digunakan untuk menampilkan graf dalam bentuk matriks, terdapat fungsi `struct Graf` yang mendefinisikan struktur data graf, fungsi `voidtampilkanGraf(Graf g)` yang digunakan untuk menampilkan graf dalam bentuk matriks, dan fungsi `int main()` yang menghandle input dan juga output, serta menampilkan graf menggunakan fungsi `tampilkanGraf`. Output yang dihasilkan adalah matriks yang menunjukkan jarak antar simpul.


### 2.	Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!


```C++
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    string data;
    Node* left;
    Node* right;
};

class Tree {
private:
    Node* root;

    void preOrderTraversal(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void inOrderTraversal(Node* node) {
        if (node == nullptr) return;
        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }

    void postOrderTraversal(Node* node) {
        if (node == nullptr) return;
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->data << " ";
    }

    Node* findNode(Node* node, const string& value) {
        if (node == nullptr) return nullptr;
        if (node->data == value) return node;
        Node* foundNode = findNode(node->left, value);
        if (foundNode == nullptr) {
            foundNode = findNode(node->right, value);
        }
        return foundNode;
    }

    void printChildren(Node* node) {
        if (node->left) {
            cout << "Left child: " << node->left->data << endl;
        } else {
            cout << "Left child: None" << endl;
        }
        if (node->right) {
            cout << "Right child: " << node->right->data << endl;
        } else {
            cout << "Right child: None" << endl;
        }
    }

    void printDescendants(Node* node) {
        if (node == nullptr) return;
        queue<Node*> q;
        q.push(node);
        bool hasDescendants = false;
        cout << "Descendants of " << node->data << ": ";
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            if (current != node) {
                cout << current->data << " ";
                hasDescendants = true;
            }
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        if (!hasDescendants) {
            cout << "None";
        }
        cout << endl;
    }

    void deleteSubtree(Node* node) {
        if (node == nullptr) return;
        deleteSubtree(node->left);
        deleteSubtree(node->right);
        delete node;
    }

public:
    Tree() : root(nullptr) {}

    void insertRoot(const string& value) {
        if (root == nullptr) {
            root = new Node{value, nullptr, nullptr};
            cout << "Root node " << value << " berhasil ditambahkan." << endl;
        } else {
            cout << "Root Tersedia." << endl;
        }
    }

    void insertChild(const string& parent, const string& leftChild, const string& rightChild) {
        Node* parentNode = findNode(root, parent);
        if (parentNode == nullptr) {
            cout << "Parent node tidak tersedia." << endl;
            return;
        }
        if (leftChild != "None") {
            if (parentNode->left == nullptr) {
                parentNode->left = new Node{leftChild, nullptr, nullptr};
            } else {
                cout << "Left child tersedia untuk " << parent << endl;
            }
        }
        if (rightChild != "None") {
            if (parentNode->right == nullptr) {
                parentNode->right = new Node{rightChild, nullptr, nullptr};
            } else {
                cout << "Right child tersedia untuk " << parent << endl;
            }
        }
    }

    void updateNode(const string& oldValue, const string& newValue) {
        Node* node = findNode(root, oldValue);
        if (node != nullptr) {
            node->data = newValue;
            cout << "Node " << oldValue << " ditambahkan ke " << newValue << "." << endl;
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }

    void findAndPrintNode(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            cout << "Node ditemukan: " << node->data << endl;
            printChildren(node);
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void preOrderTraversal() {
        cout << "PreOrder Traversal: ";
        preOrderTraversal(root);
        cout << endl;
    }

    void inOrderTraversal() {
        cout << "InOrder Traversal: ";
        inOrderTraversal(root);
        cout << endl;
    }

    void postOrderTraversal() {
        cout << "PostOrder Traversal: ";
        postOrderTraversal(root);
        cout << endl;
    }

    void printChildren(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printChildren(node);
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }

    void printDescendants(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printDescendants(node);
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }

    void deleteTree() {
        deleteSubtree(root);
        root = nullptr;
        cout << "Tree dihapus." << endl;
    }

    void deleteSubtree(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            deleteSubtree(node);
            cout << "Subtree mulai dari node " << value << " dihapus." << endl;
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }
};

int main() {
    Tree tree;
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Data untuk root node\n";
        cout << "2. Tambah child kanan dan child kiri\n";
        cout << "3. Update node\n";
        cout << "4. Find node\n";
        cout << "5. PreOrder Traversal\n";
        cout << "6. InOrder Traversal\n";
        cout << "7. PostOrder Traversal\n";
        cout << "8. Print Child\n";
        cout << "9. Print Descendants\n";
        cout << "10. Hapus Tree\n";
        cout << "11. Hapus Subtree\n";
        cout << "12. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        string value, leftChild, rightChild;
        switch (pilihan) {
            case 1:
                cout << "Masukkan data untuk root node: ";
                cin >> value;
                tree.insertRoot(value);
                break;
            case 2:
                cout << "Masukkan nama parent node: ";
                cin >> value;
                cout << "Masukkan nama left child: ";
                cin >> leftChild;
                cout << "Masukkan nama right child: ";
                cin >> rightChild;
                tree.insertChild(value, leftChild, rightChild);
                break;
            case 3:
                cout << "Masukkan nama node yang akan diupdate: ";
                cin >> value;
                cout << "Masukkan nama baru untuk node: ";
                cin >> leftChild; // reuse variable for new value
                tree.updateNode(value, leftChild);
                break;
            case 4:
                cout << "Masukkan nama node yang dicari: ";
                cin >> value;
                tree.findAndPrintNode(value);
                break;
            case 5:
                tree.preOrderTraversal();
                break;
            case 6:
                tree.inOrderTraversal();
                break;
            case 7:
                tree.postOrderTraversal();
                break;
            case 8:
                cout << "Masukkan node yang ingin dicetak child-nya: ";
                cin >> value;
                tree.printChildren(value);
                break;
            case 9:
                cout << "Masukkan nama node yang ingin dicetak descendants-nya: ";
                cin >> value;
                tree.printDescendants(value);
                break;
            case 10:
                tree.deleteTree();
                break;
            case 11:
                cout << "Masukkan nama node yang ingin dihapus subtree-nya: ";
                cin >> value;
                tree.deleteSubtree(value);
                break;
            case 12:
                cout << "Keluar" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (pilihan != 12);

    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/19cfe922-f274-479c-86e2-ee0b2854979a)

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/764c116a-5a5a-4537-8b28-587408b8f59d)

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/a407f964-a393-48bb-be17-5e93c63c59df)

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/7643dae4-6663-4e07-a391-5f4fd506ecd2)

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/707f4747-5316-4512-b276-8970802f6f93)

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/82e23ac9-3c48-4633-8df5-042f8aaefa2f)

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/beb8d573-6857-469c-93e3-4b536fbc1832)

Program ini merupakan implementasi dari sebuah Tree yang memungkinkan pengguna untuk melakukan berbagai operasi pada Tree. Program ini memiliki sebuah kelas `Tree` yang memiliki beberapa fungsi seperti `insertRoot` untuk menambahkan node root, lalu pada fungsi `insertChild` untuk menambahkan child node, terdapat fungsi  `updateNode` untuk mengupdate nilai node, fungsi `findAndPrintNode` digunakan untuk mencari dan mencetak node, serta beberapa fungsi untuk melakukan traversal pada tree seperti `preOrderTraversal`, `inOrderTraversal`, dan `postOrderTraversal`. 

Program ini juga memiliki fungsi untuk mencetak child dan descendant dari sebuah node, serta beberapa fungsi yang digunakan untuk menghapus tree dan subtree secara keseluruhan. Pada bagian `main` program ini menampilkan menu kepada user untuk memilih operasi yang ingin dilakukan pada tree, lalu melakukan operasi yang dipilih oleh user.

Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Kesimpulan ini disusun untuk menjadi acuan bagi pembaca dalam memahami konsep dasar Graph dan Tree serta penerapannya dalam pemrograman. Graph adalah struktur data yang terdiri dari simpul (node) dan sisi (edge) yang menghubungkan simpul-simpul tersebut, digunakan untuk merepresentasikan berbagai jaringan seperti komputer dan sosial. Tree, jenis khusus dari graph tanpa siklus, merepresentasikan struktur hierarkis seperti sistem file dan organisasi perusahaan. Memahami jenis-jenis graph dan tree serta algoritma terkait, seperti DFS, BFS, dan algoritma untuk jalur terpendek atau pohon rentang minimum, memungkinkan pengembangan algoritma penelusuran, pencarian, dan optimasi yang efisien. Dengan pemahaman mendalam tentang Graph dan Tree, pembaca dapat mengelola data secara efektif dan efisien, serta memecahkan berbagai masalah komputasi dalam aplikasi nyata, yang menjadikan kedua konsep ini esensial dalam pengembangan perangkat lunak yang handal.

## Referensi
[1] Ade Mulyana, dkk, "Cara Mudah Mempelajari Algoritma dan Struktur Data," DIVA Press, Oktober 2021.  
    Available: https://repository.mercubuana.ac.id/80729/1/Cara%20Mudah%20Mempelajari%20Algoritma%20dan%20Struktur%20Data.pdf    
[2] A. Zein and E. S. Eriana, "Algoritma dan Struktur Data," Unpam Press, 14 Januari 2022.  
    Available: https://repository.unpam.ac.id/10199/1/KB1101_ALGORITMA%20%20DAN%20STRUKTUR%20DATA.pdf  
[3] T. Triase, "Diktat Edisi Revisi Struktur Data," Fakultas Sains dan Teknologi, Universitas Islam Negeri Sumatera Utara Medan, 2020.                  
    Available: http://repository.uinsu.ac.id/9717/2/Diktat%20Struktur%20Data.pdf
