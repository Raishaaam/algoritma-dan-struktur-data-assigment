#include <iostream>

using namespace std;

void functionB(int n);

void functionA(int n) { //direct
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); //mengurangi
    }
}
 
void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); //membagi
    }
} 

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}