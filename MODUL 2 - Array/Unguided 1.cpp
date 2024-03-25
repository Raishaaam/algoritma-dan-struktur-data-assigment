#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Masukkan jumlah array: ";
    cin >> a;
    int arr[a];

    cout << "Masukkan " << a << " angka\n";
    for (int i = 0; i < a; i++)
    {
        cout << "Array ke - " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Data Array : ";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << ", ";
        }
    }
}


