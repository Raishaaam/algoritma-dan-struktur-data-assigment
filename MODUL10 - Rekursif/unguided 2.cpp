#include <iostream>
using namespace std;

int functionA(int n, int result = 1) {
  if (n == 0) {
    return result;
  } else {
    return functionA(n - 1, n * result);
  }
}

int functionB(int n) {
  return functionA(n);
}

int main() {
  int bilangan;

  cout << "Masukkan bilangan bulat positif: ";
  cin >> bilangan;

  cout << "Faktorial dari " << bilangan << " adalah: " << functionB(bilangan) << endl;

  return 0;
}