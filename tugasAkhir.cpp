#include <stdio.h>
#include <iostream>
using namespace std;

main()
{
    int jari;
    float pi=3.14;
    float luas,volume;

    cout << "masukan jari-jari: ";
    scanf("%f, &jari");
    
    luas=4*pi*jari*jari;
    volume=4/3*pi*jari*jari*jari;

    cout << "luas = " << luas;
}