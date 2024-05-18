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

