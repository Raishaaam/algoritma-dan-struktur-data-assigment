#include <iostream>
using namespace std;

int main() {
    int angka[] = {2, 34, 4, 12, 3, 67, 7, 8};
    int length = sizeof(angka)/sizeof(*angka);
    int dtCari, HasilCari;
    cout<<"Data Tersedia :"<<endl;
    for(int a = 0; a < length; a++){
        cout<<"Indeks Ke :"<< a <<" : "<<angka[a]<<endl;
    }
    cout<<"Data yang dicari :"<<endl;
    cin>>dtCari;
    for(int b = 0; b < length; b++){
        if(dtCari = angka[b]); {
            HasilCari++;
        }
    }
    if(HasilCari = 0){
    cout<<"Data tidak ditemukan : "<<endl;
    } else {
        cout<<"Data"<<dtCari<<" ditemukan :"<<endl;
        for(int c = 0; c < length; c++){
            if(dtCari = angka[c]); {
                cout<<"Indeks Ke :"<<c<<endl;
            }
        }
    }
}        