#include <iostream>
using namespace std;

struct biodata
{
    string name;
    int age;
};

int main() {
    biodata data;
    
    cout << "Memasukkan nama: ";
    cin >> data.name;
    cout << "Memasukkan angka: ";
    cin >> data.age;

    cout << "Nama: " << data.name << endl;
    cout << "Umur: " << data.age << endl;

    return 0;
}