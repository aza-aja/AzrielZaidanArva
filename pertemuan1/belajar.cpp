#include <iostream>
#include <conio.h>
using namespace std;


int main() {
    system ("cls");
    string nama, nim, waktu;
    char kom, jk;
    float ipk;

    cout << "Hello world\n";

    cout <<"Masukkan Nama           : ";
    getline(cin, nama);

    cout <<"Masukkan NIM            : "; cin >> nim;
    cout <<"Masukkan Kom            : "; cin >> kom;
    cout <<"Masukkan IPK            : "; cin >> ipk;
    cout <<"Masukkan Jenis Kelamin  : "; jk = getche ();
    

    
    cout << "\n";

    cout << "Nama               : " << nama << endl;
    cout << "NIM                : " << nim << endl;
    cout << "KOM                : " << kom << endl;
    cout << "IPK                : " << ipk << endl;
    cout << "Jenis Kelamin      : ";
    putchar (jk) ;

    cout << "\n";

    cout << "masukkan waktu     : "; cin >> waktu;
    cout << "Selamat " << waktu << ", " << nama;

    getch ();
    return 0;
}