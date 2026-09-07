#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int rupiah;
    float kursDolar;

    cout << "masukkan jumlah rupiah: ";
    cin >> rupiah;
    cout << "kursDolar             : ";
    cin >> kursDolar;

    cout << "==========================" << endl << left;
    cout << setw(15) << "Jumlah Rupiah " << ": Rp " << rupiah << endl;
    cout << setw(15) << "Jumlah Dollar " << ": $ " << fixed << setprecision(2) << float(rupiah/kursDolar)<< endl;
}
