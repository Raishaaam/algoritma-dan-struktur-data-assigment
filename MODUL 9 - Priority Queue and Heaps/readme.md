Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 9 Priority Queue and Heaps</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Dasar Teori
### Priority Queue 

`Priority Queue` adalah suatu bentuk struktur data yang berbasiskan struktur Queue pada umumnya[1]. Pada priority queque, terdapat salah satu bentuk implementasi yaitu implementasi menggunakan struktur data heaps[1]. Dalam implementasi ini ada 3 pokok atribut yaitu `heaps`, `comparator`, dan `last`[1]. 

`Priority Queue` adalah jenis antrian yang mengatur elemen berdasarkan nilai prioritasnya[2]. Elemen dengan nilai prioritas lebih tinggi biasanya diambil sebelum nilai prioritas lebih rendah[2]. Antrean prioritas sering digunakan dalam sistem `real-time`, dimana urutan pemrosesan elemen dapat memiliki konsekuensi yang signifikan.

### Metode Dalam Priority Queue    
1. `Push()` Push pada priority queue digunakan untuk memasukkan elemen baru ke dalam antrian dengan memperhatikan prioritasnya[2].
2. `Pop()` Pop pada priority queque digunakan untuk menghapus elemen dengan prioritas tertinggi[2].
3. `Size()` Size pada priority queue digunakan untuk mendapatkan jumlah elemen yang saat ini ada dalam antrian[2].
4. `Empty()` Empty pada priority queue digunakan untuk mengetahui apakah antrian tersebut kosong atau tidak ada[2].
5. `Top()` Top pada priority queue biasanya merujuk pada elemen dengan prioritas tertinggi yang ada dalam priority queue[2].
6. `Swap()` Swap pada priority queue adalah proses menukar dua elemen yang berbeda posisi dalam priority queue[2].
7. `Emplace()` Emplace pada priority queue adalah metode yang digunakan untuk menambahkan elemen baru ke dalam priority queue dengan menggunakan nilai yang diberikan untuk membuat elemen baru pada saat penambahan.

### Jenis Priority Queue
1. `Ascending Order Priority Queue` Seperti namanya, dalam ascending  order priority queue, elemen dengan nilai prioritas lebihrendah diberikan prioritas lebih tinggi dalam daftar prioritas. Misalnya, jika kita memilikielemen berikut dalam priority queue yang disusun dalam urutan menaik seperti 4,6,8,9,10. Disini, 4 adalah angka terkecil, oleh karena itu, ia akan mendapatkan prioritas tertinggi dalamantrean prioritas dan saat kita keluar dari antrean prioritas jenis ini, 4 akan dihapus dariantrean dan dequeue mengembalikan 4[2].
2. `Descending Order Priority Queue` [2].

### Keunggulan Priority Queue
1. Membantu untuk mengakses elemen dengan cara yang lebih cepat. Ini karena elemendalam antrian prioritas diurutkan berdasarkan prioritas, seseorang dapat dengan mudahmengambil elemen dengan prioritas tertinggi tanpa harus mencari di seluruh antrian[2].
2. Pengurutan elemen dalam Priority Queue dilakukan secara dinamis. Elemen-elemendalam antrean prioritas dapat diperbarui nilai prioritasnya, yang memungkinkan antreanuntuk mengurutkan ulang secara dinamis saat prioritas berubah.
3. Algoritma yang efisien dapat diimplementasikan. Antrean prioritas digunakan dalam banyak algoritme untuk meningkatkan efisiensinya, seperti algoritme Dijkstra untukmenemukan jalur terpendek dalam graf dan algoritme pencarian A* untuk pencarian jalur[2].
4. Termasuk dalam sistem real-time. Ini karena antrean prioritas memungkinkan Anda mengambil elemen dengan prioritas tertinggi dengan cepat, antrean tersebut seringdigunakan dalam sistem waktu nyata di mana waktu adalah hal yang sangat penting[2].

### Kekurangan Priority Queue
1. Kompleksitas tinggi. Antrean prioritas lebih kompleks daripada struktur data sederhanaseperti larik dan daftar tertaut, dan mungkin lebih sulit untuk diterapkan dan dipelihara[2].
2. Konsumsi memori yang tinggi. Menyimpan nilai prioritas untuk setiap elemen dalamantrian prioritas dapat menghabiskan memori tambahan, yang mungkin menjadi perhatian dalam sistem dengan sumber daya terbatas[2].
3. Itu tidak selalu merupakan struktur data yang paling efisien. Dalam beberapa kasus,struktur data lain seperti tumpukan atau pohon pencarian biner mungkin lebih efisienuntuk operasi tertentu, seperti menemukan elemen minimum atau maksimum dalamantrean[2].
4. Kadang-kadang kurang dapat diprediksi :. Ini karena urutan elemen dalam antrean prioritas ditentukan oleh nilai prioritasnya, urutan pengambilan elemen mungkinkurang dapat diprediksi dibandingkan dengan struktur data lain seperti tumpukan atauantrean, yang mengikuti first-in, first-out ( FIFO) atau last-in, first-out (LIFO)[2].

### Haeps
Heap adalah sebuah binary tree dengan ketentuan sebagai berikut[3]:  
1. Tree harus complete binary tree[3].  
a. Semua level tree mempunyai simpul maksimum kecuali pada level terakhir[3].    
b. Pada level terakhir, node tersusun dari kiri ke kanan tanpa ada yang dilewati[3].
2. Perbandingan nilai suatu node dengan nilai node child-nya mempunyai ketentuan berdasarkan jenis heap, diantaranya[3]:  
a. `Max Heap` mempunyai ketentuan bahwa nilai suatu node lebih besar atau sama dengan (>=) dari nilai childnya[3].                       
b. `Min Heap` mempunyai ketentuan bahwa nilai suatu node lebih kecil atau sama dengan (<=) dari nilai childnya[3].

### Ada beberapa operasi yang dapat terjadi di sebuah heap, yaitu[3]:
1. `Reorganisasi Heap` (mengatur ulang heap)[3].
2. `Membantuk Heap` (mengatur binary tree agar menjadi heap)[3].
3. `Penyisipan Heap` (menyisipkan node baru)[3].
4. `Penghapusan Heap` (menghapus node root)[3].
5. `Pengurutan Heap`(Heap sort)[3].

### Operasi-operasi pada Struktur Data Heap.
1. `Heapify` Proses untuk mengatur ulang heap untuk mempertahankan properti heap[4].
2. `Find-max (atau Find-min)` Menemukan item maksimum dari max-heap, atau item minimum dari min-heap[4].
3. `Insertion` Menambahkan item baru di heap[4].
4. `Deletion` Menghapus item dari heap[4].
5. `Extract Min-Max` Mengembalikan dan menghapus elemen maksimum atau minimum masing-masing di max-heap dan min-heap[4].

### Kelebihan Struktur Data Heap.
1. Kompleksitas waktu pada struktur data heap cenderung lebih sedikit. Untuk memasukkan atau menghapus elemen di heap, kompleksitas waktunya hanya O(log N)[4].
2. Membantu untuk menemukan jumlah minimum dan jumlah terbesar[4].
3. Untuk operasi peek elemen paling awal, kompleksitas waktunya konstan O(1)[4].
4. Dapat diimplementasikan menggunakan array, tidak memerlukan ruang ekstra untuk pointer[4].
5. Binary heap adalah pohon biner yang seimbang, dan mudah diterapkan[4].
6. Heap dapat dibuat dengan O(N) waktu[4].

### Kekurangan Struktur Data Heap.
1. Kompleksitas waktu untuk mencari elemen di Heap adalah O(N)[4].
2. Untuk menemukan penerus atau pendahulu dari suatu elemen, heap membutuhkan waktu O(N), sedangkan BST hanya membutuhkan waktu O(log N)[4].
3. Untuk mencetak semua elemen heap dalam urutan kompleksitas waktu adalah O(N*log N), sedangkan untuk BST, hanya dibutuhkan waktu O(N)[4].
4. Manajemen memori lebih kompleks dalam tumpukan memori karena digunakan secara global. Memori heap dibagi menjadi dua bagian - generasi lama dan generasi muda dll. pada garbage collection milik java[4].


## Guided 1

```C++
#include <iostream>
 #include <algorithm>

 int H[50];
 int heapSize = -1;

 int parent(int i) {
    return (i - 1) / 2;
 }

 int leftChild(int i) {
    return ((2 * i) + 1);
 }

 int rightChild(int i) {
    return ((2 * i) + 2);
 }

 void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
 }

 void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
 }

 void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
 }

 int extracMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
 }

 void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
 }

 int getMax() {
    return H[0];
 }

 void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extracMax();
 }

 int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);

    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority : " << extracMax() << "\n";

    std::cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    remove(3);
    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    return 0;
 }

```

### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/0656d781-fd0f-4a3b-adf7-b87cb281e086)

Program ini memulai dengan mendefinisikan heap H dengan ukuran 50 dan `heapSize` dengan nilai awal -1. Fungsi-fungsi seperti `parent()`, `leftChild()`, `rightChild()`, `shiftUp()`, `shiftDown()`, `insert()`, `extracMax()`, `changePriority()`, `getMax()`, dan `remove()` yang digunakan untuk mengelola heap. 

Pada `main()`, terdapat beberapa elemen diinsert ke dalam heap, kemudian dicetak hasilnya. Setelah itu, elemen dengan prioritas tertinggi diambil menggunakan `extracMax()` dan dicetak hasilnya. Kemudian, prioritas elemen ke-2 diubah dengan menggunakan `changePriority()` dan dicetak hasilnya. Terakhir, elemen ke-3 dihapus menggunakan `remove()` lalu dicetak hasilnya.

Hasil output pada program akan menampilkan priority queue dengan elemen yang telah dimasukkan, elemen dengan prioritas tertinggi, priority queue setelah mengambil elemen dengan prioritas tertinggi, priority queue setelah mengubah prioritas elemen ke-2, dan priority queue setelah menghapus elemen ke-3.

## Unguided 

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.

```C++
#include <iostream>
#include <algorithm>

using namespace std;

int H[50];
int heapSize = -1;

int parent(int i) {
  return (i - 1) / 2;
}

int leftChild(int i) {
  return ((2 * i) + 1);
}

int rightChild(int i) {
  return ((2 * i) + 2);
}

void shiftUp(int i) {
  while (i > 0 && H[parent(i)] < H[i]) {
    swap(H[parent(i)], H[i]);
    i = parent(i);
  }
}

void shiftDown(int i) {
  int maxIndex = i;
  int l = leftChild(i);
  if (l <= heapSize && H[l] > H[maxIndex]) {
    maxIndex = l;
  }
  int r = rightChild(i);
  if (r <= heapSize && H[r] > H[maxIndex]) {
    maxIndex = r;
  }
  if (i != maxIndex) {
    swap(H[i], H[maxIndex]);
    shiftDown(maxIndex);
  }
}

void insert(int p) {
  heapSize++;
  H[heapSize] = p;
  shiftUp(heapSize);
}

int extractMax() {
  int result = H[0];
  H[0] = H[heapSize];
  heapSize--;
  shiftDown(0);
  return result;
}

void changePriority(int i, int p) {
  int oldp = H[i];
  H[i] = p;
  if (p > oldp) {
    shiftUp(i);
  } else {
    shiftDown(i);
  }
}

int getMax() {
  return H[0];
}

void remove(int i) {
  H[i] = getMax() + 1;
  shiftUp(i);
  extractMax();
}

int main() {
  // Minta pengguna untuk memasukkan jumlah elemen
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  // Minta pengguna untuk memasukkan nilai elemen
  cout << "Enter " << n << " elements ";
  for (int i = 0; i < n; ++i) {
    int element;
    cout << "Enter a number for the element " << i + 1 << ": ";
    cin >> element;
    insert(element);
  }

  // Tampilkan isi heap setelah diisi dengan elemen dari pengguna
  cout << "Priority Queue: ";
  for (int i = 0; i <= heapSize; ++i) {
    cout << H[i] << " ";
  }
  cout << endl;

  // Keluarkan elemen dengan prioritas tertinggi dari heap
  cout << "Node with maximum priority: " << extractMax() << endl;

  // Tampilkan isi heap setelah mengeluarkan elemen dengan prioritas tertinggi
  cout << "Priority queue after extracting maximum: ";
  for (int i = 0; i <= heapSize; ++i) {
    cout << H[i] << " ";
  }
  cout << endl;

  // Ubah prioritas elemen dalam heap
  changePriority(0, 49);
  cout << "Priority queue after priority change: ";
  for (int i = 0; i <= heapSize; ++i) {
    cout << H[i] << " ";
  }
  cout << endl;

  // Hapus elemen dari heap
  remove(3);
  cout << "Priority queue after removing the element: ";
  for (int i = 0; i <= heapSize; ++i) {
    cout << H[i] << " ";
  }
  return 0;
}

```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/b8dffa2e-bd68-4c6a-999e-a04409e244de)

Program ini merupakan heap, struktur data yang berisi elemen-elemen dengan prioritas tertentu. Terdapat beberapa fungsi yang digunakan yaitu, `shiftUp()` yang berfungsi mengangkat elemen ke i dalam tempat yang sesuai di dalam heap.Elemen akan terus diangkat ke atas hingga menemukan tempat yang sesuai atau menjadi root (i=0). Kemudian terdapat `shiftDown(int i)` berfungsi untuk mengurangi prioritas elemen ke `i` dan mencari tempat yang sesuai untuk elemen tersebut di dalam heap. Dalam bagian `main()`, program akan meminta penggunakan untuk memasukkan jumlah elemen dan nilai-nilai elemen tersebut. Kemudian, program akan menciptakan heap dan menambahkan elemen elemen tersebut ke dalam heap menggunakan fungsi `insert()`. Lalu, program akan menunjukkan isi heap sebelum mengeluarkan elemen dengan prioritas tertinggi dan setelah mengeluarkan elemen tersebut. 

Program ini akan menampilkan output berupa isi heap sebelum dan sesudah mengeluarkan elemen dengan prioritas tertinggi, isi heap setelah mengubah prioritas elemen ke i, dan isi heap setelah menghapus elemen ke i.


Github:
(https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment.git)

## Kesimpulan
Laporan ini disusun untuk menjadi acuan bagi pembaca dalam memahami konsep dasar Priority Queue dan Heap serta penerapannya dalam pemrograman. Melalui penjelasan yang komprehensif, pembaca akan dipandu untuk memahami secara mendalam tentang bagaimana Priority Queue bekerja, bagaimana struktur data Heap digunakan untuk mengimplementasikan Priority Queue, serta mengapa kedua konsep ini penting dalam pengembangan program. Dengan memahami konsep dasar ini, pembaca akan dapat mengembangkan pemahaman yang kuat tentang bagaimana menggunakan Priority Queue dan Heap untuk mengelola data dengan efektif dan efisien dalam berbagai aplikasi.

## Referensi
[1] A. Nurcholis, S. Batara, dan M. Octamanullah, "Penerapan Struktur Data Heap Priority Queue pada Algoritma Djikstra untuk Mendapatkan Kompleksitas O((n + m)log n)," Laboratorium Ilmu dan Rekayasa Komputasi, Departemen Teknik Informatika, Institut Teknologi Bandung, 2021.  
    Available: https://informatika.stei.itb.ac.id/~rinaldi.munir/Stmik/Makalah/MakalahStmik38.pdf  
[2] B. B. Pangestu, G. S. H. Barata, E. W. Lay, dan M. Alghifari, "Makalah Priority Queue Revisi," FAKULTAS TEKNIK UNIVERSITAS TANJUNGPURAPONTIANAK, 2023.  
    Available: https://id.scribd.com/document/657230171/Makalah-Priority-Queue-revisi  
[3] A. Heryandi, "Heap dan Operasinya,                   
    Available:https://repository.unikom.ac.id/36115/1/Bab%20XI%20-%20Heap.pdf  
[4] T. Trivusi, "Struktur Data Heap: Pengertian, Karakteristik, dan Operasinya," 2023.  
    Available: https://www.trivusi.web.id/2023/01/struktur-data-heap.html 
