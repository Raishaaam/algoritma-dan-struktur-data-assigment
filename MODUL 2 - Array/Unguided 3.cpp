#include <iostream>
using namespace std;

int main()
{
    int n, i, maks, min, lokasi_maks, lokasi_min, total = 0;
    float rata_rata;
    int array[100];

    cout << "Masukkan panjang array: ";
    cin >> n;

    cout << "Masukkan " << n << " angka\n";
    for (i = 0; i < n; i++)
    {
        cout << "Array ke-" << i << ": ";
        cin >> array[i];
        total += array[i];
    }

    maks = min = array[0];
    lokasi_maks = lokasi_min = 0;

    for (i = 0; i < n; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi_maks = i;
        }
        else if (array[i] < min)
        {
            min = array[i];
            lokasi_min = i;
        }
    }

    rata_rata = (float)total / n;

    int pilih;
    do
    {
        cout << "\n===== Menu =====\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            cout << "Nilai maksimum " << maks << " berada di Array ke " << lokasi_maks << endl;
            break;
        case 2:
            cout << "Nilai minimum " << min << " berada di Array ke " << lokasi_min << endl;
            break;
        case 3:
            cout << "Nilai rata-rata " << rata_rata << endl;
            break;
        default:
            cout << "Keluar!" << endl;
        }
    } while (pilih != 4);

    return 0;
}