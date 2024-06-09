#include <iostream>
using namespace std;

int faktorial(int n) { //rekursif
    if (n == 0){
        return 1;
    } else {
      return n * faktorial (n-1);
    }
}

int main(){
    int bilangan;

    cout<<"Bilangan bulat positif :"<<endl;
    cin >> bilangan;

    cout<<"Faktorial dari "<<bilangan<<" adalah : "<< faktorial(bilangan)<<endl;
    return 0;
}