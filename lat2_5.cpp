#include <iostream>

using namespace std;

main()
{
    long int beli, disc, total;

    cout << "Jumlah Beli: ";
    cin >> beli;
        if (beli >=60000)
            {
                disc = 0.1*beli;
                total = beli-disc;
            }
        else
            {
                disc = 0.05*beli;
                total = beli-disc;
            }
    
    cout << "jadi pembelian adalah: " << beli;
    cout << "\nJadi Discount adalah: " << disc;
    cout << "\nTotal pembayaran: " << total;
}