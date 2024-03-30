#include <stdio.h>
using namespace std;

// Fungsi selection sort mengurutkan array float dari besar ke kecil
void selection_sort(float arr[], int n) {
  for (int i = 0; i < n-1; i++) {
    int maxIndex = i;
    for (int j = i+1; j < n; j++) {
      if (arr[j] > arr[maxIndex]) {
        maxIndex = j;
      }
    }
    if (maxIndex != i) {
      float temp = arr[i];
      arr[i] = arr[maxIndex];
      arr[maxIndex] = temp;
    }
  }
}

void cetak_array(float a[], int length) {
  for(int i=0; i<length; i++) {
    printf("%.1f    ", a[i]);
  }
  printf("\n");
}

int main() {
  // Array IPS mahasiswa
  float arr[] = {3.8, 2.9, 3.3, 4.0, 2.4};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("IPS mahasiswa sebelum diurutkan: ");
  cetak_array(arr, n);
  selection_sort(arr, n);
  printf("IPS mahasiswa setelah diurutkan: ");
  cetak_array(arr, n);
  return 0;
}
