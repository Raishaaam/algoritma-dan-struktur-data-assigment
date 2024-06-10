#include <iostream>
using namespace std;

void BubbleSort(angka[n], int n){
    for (int i = 0, i < n-1, i++){
        for (int j = 0, j < n-1, j++){
            if(angka[j] > angka[j+1]){
                swap(angka[j], angka[j+1]);
            }
        }
    }   

int main(){
    int angka[] = {5, 1, 4, 2, 8};
    int length = sizeof(angka)/sizeof(* angka)
    BubbleSort(angka, n)
    cout<<"Urutkan dari yang terkecil :"<<endl;
    for (int i = 0; i < 0, i++) {
        cout<<angka[i]<<" ";
    }
    cout << endl;

    }
}
