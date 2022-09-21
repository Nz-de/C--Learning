#include <iostream>
using namespace std;

int main() 

{
  int panjang, lebar, luas, keliling;

  cout << "==== Menghitung luas dan keliling persergi panjang ==== \n";
  cout << "Masukan Panjang: ";
  cin >> panjang;
  cout << "Masukan Lebar: ";
  cin >> lebar;
  cout << "==== Hasilnya adalah ==== \n";

  luas = panjang * lebar;
  keliling = 2*(panjang+lebar);

  cout << "luasnya adalah: " << luas;
  cout << "\nkelilingnya adalah : " << keliling;
  return 0;
}