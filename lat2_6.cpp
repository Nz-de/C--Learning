#include <iostream>
using namespace std;

main()
{
    int nilai, tugas;

    cout << "Masukan Sebuah Nilai: ";
    cin >> nilai;
    cout << "Masukan nilai tugas: ";
    cin >> tugas;

    if (nilai>70&&tugas>=75)
        cout << "selamat anda lulus";
    else
        cout << "anda tidak lulus";
}