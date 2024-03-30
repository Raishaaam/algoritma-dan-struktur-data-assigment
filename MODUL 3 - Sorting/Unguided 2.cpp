#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string nama[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(nama[j] > nama[j+1]) {
                swap(nama[j], nama[j+1]);
            }
        }
    }
}

int main() {
    string nama[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(nama)/sizeof(nama[0]);

    bubbleSort(nama, n);

    cout << "Nama warga Pak RT setelah diurutkan: ";
    for(int i = 0; i < n; i++) {
        cout << nama[i] << " ";
    }
    cout << endl;

    return 0;
}