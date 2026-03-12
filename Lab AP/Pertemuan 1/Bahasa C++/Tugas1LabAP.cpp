#include <iostream>     // untuk I/o                           
#include <cstdlib>      // untuk clearscreen
#include <iomanip>      // untuk fixed sama setprecision 

using namespace std;    // biar ga ngetik std:: 

int main() {
    system("cls");                          // buat bersihin layar  
    string nama, NIP, departemen, jabatan;  // variabel teks
    int umur;                               // variabel umur
    double gaji;                            // variabel gaji

    cout << "masukkan nama          : "; getline(cin, nama);        // input nama
    cout << "masukkan NIP           : "; cin >> NIP;                // input NIP
    cout << "masukkan umur          : "; cin >> umur;               // input umur
    cin.ignore();                                                   // buang enter sisa biar getline aman
    cout << "masukkan departemen    : "; getline(cin, departemen);  // input departemen
    cout << "masukkan jabatan       : "; getline(cin, jabatan);     // input jabatan
    cout << "masukkan gaji          : "; cin >> gaji;               // input gaji

    cout <<"\n";    // buat pindahin baris

    cout << "DATA MAHASISWA\n"; // nampilkan "DATA MAHASISWA"
    
    cout <<"\n";    // buat pindahin baris

    cout << "nama       : " << nama << endl;        // nampilkan nama 
    cout << "NIP        : " << NIP << endl;         // nampilkan NIP
    cout << "umur       : " << umur << endl;        // nampilkan umur
    cout << "departemen : " << departemen << endl;  // nampilkan departemen
    cout << "jabatan    : " << jabatan << endl;     // nampilkan jabatan
    cout << "gaji       : " << fixed << setprecision(2) << gaji << endl;    // nampilkan gaji
    // fixed sama setprecision untuk tampilan gaji lebih rapi

    return 0;
}