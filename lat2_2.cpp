#include <iostream>

using namespace std;

main()
{
    int panjang, lebar, tinggi, luas, volume;

    cout << "==== Menghitung luas dan keliling persergi panjang ==== \n";
    cout << "Masukan panjang: ";
    cin >> panjang;
    cout << "Masukan Lebar: ";
    cin >> lebar;
    cout << "masukan tinggi: ";
    cin >> tinggi;

    luas = (2*panjang*lebar) + (2*panjang*tinggi) + (2*tinggi*lebar);
    volume = panjang*lebar*tinggi;

    cout << "==== Hasilnya adalah ==== \n";
    cout << "Luas = " << luas;
    cout << "\nVolume = " << volume;
}