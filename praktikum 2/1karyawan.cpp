#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string namaKaryawan;
    int jumlahJamkerja;
    int tarifPerJam;
    cout << left; // Meratakan ke kiri
    cout << setw(30) << "Masukkan nama karyawan" << ": ";
    cin >> namaKaryawan;
    cout << setw(30) << "Masukkan jumlah jam kerja" << ": ";
    cin >> jumlahJamkerja;
    cout << setw(30) << "Masukkan tarif per Jam" << ": ";
    cin >> tarifPerJam;

    cout << "=========================================================\n";
    cout << setw(20) << "Nama karyawan" << ": " << namaKaryawan << endl;
    cout << setw(20) << "Jumlah jam kerja" << ": " << jumlahJamkerja << endl;
    cout << setw(20) << "Tarif per jam" << ": " << tarifPerJam << endl;
    cout << setw(20) << "Total gaji" << ": " << jumlahJamkerja * tarifPerJam << endl;
    return 0;
}