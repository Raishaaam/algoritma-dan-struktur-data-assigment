#include <iostream>
using namespace std;

int faktorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * faktorial(n - 1);
  }
}

int main() {
  int bilangan;

  cout << "Masukkan bilangan bulat positif: ";
  cin >> bilangan;

  cout << "Faktorial dari " << bilangan << " adalah: " << faktorial(bilangan) << endl;

  return 0;
}