#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    string name;
    int age;
};

int main(){
    Mahasiswa mahasiswa1;
    mahasiswa1.name = "Raisha";
    mahasiswa1.age = 18;

    cout << "Name: " << mahasiswa1.name << endl;
    cout << "Age: " << mahasiswa1.age << endl;
    
    return 0;
}     
    
    
 