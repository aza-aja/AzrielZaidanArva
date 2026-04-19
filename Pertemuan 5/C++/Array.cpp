#include <iostream>
#include <string>
#include <array>

using namespace std;
int main () {
    system("cls");

    // array declaration
    /* 2 cara membuat array
    1. array kosong */

    // string nama [5];    // dimulai dari 0 sampai 4, 5 tidak dihitungg karna indeks ke 5 karna dihitung dari 0
    // nama[0] = "Alya";   // 1
    // nama[1] = "Risky";  // 2
    // nama[2] = "Rifki";  // 3
    // nama[3] = "fatih";  // 4
    // nama[4] = "Dhafa";  // 5
    // nama[5] = "Udin";   // 6

    // for (int i = 0; i <= 5; i++) {
    //     cout << "Nama dari indeks ke-" << i << ": " << nama[i] << endl;
    // }

    // cout << "Masukkan 5 nama: " << endl;
    // for (int i = 0; i <= 4; i++) {
    //     cout << "Nama ke-" << i + 1 << ": ";
    //     cin >> nama[i];
    // }

    // for (int i = 0; i <= 4; i++) {
    //      cout << "Nama dari indeks ke-" << i + 1 << ": " << nama[i] << endl;
    // }

    // array langsung isi
    // string nama[5] = {"Alya", "Risky", "Rifki","Fatih", "Dhafa"};
    string nama[] = {"Alya", "Risky", "Rifki","Fatih", "Dhafa", "frans", "Mayong"};

    // asending element in array
    cout << "Asending" << endl;
    for (int i = 0 ; i < 7; i++) {
        cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
    }

    // desending element in array
    cout << "desending" << endl;
    for (int i = 6; i >= 0; i--) {
        cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
    }

    // multidimensional array
    int matrix[3][3] = {{1,2,3}, {4,5,6}};
    cout << "Matrix 2x3:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // string (array of char)
    string nama1 = "Azriel";
    cout << nama1[0] << endl;
    cout << nama1[2] << endl;
    cout << nama1[5] << endl;

    for (int i = 0; i < nama1.length(); i++) {
        cout << nama1[i] << endl;
    }

    string s1 = "hello", s2 = "World";
    s1 = s2;
    cout << s1 << endl;
    cout << s1 + s2 << endl;
    cout << (s1+s2).length() << endl;

    cout << s1.substr(2,4) << endl;

    // operator sizeof()
    short angka = 90;
    cout << "Ukuran integer: " << sizeof(angka) << " bytes" << endl;


}