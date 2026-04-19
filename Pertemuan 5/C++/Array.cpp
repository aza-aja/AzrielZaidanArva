#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");

    cout << "=== MATERI ARRAY ===" << endl;

    string nama[5] = {"Alya", "Risky", "Rifki", "Fatih", "Dhafa"};

    cout << "\nContoh deklarasi array:" << endl;
    cout << "string nama[5] = {\"Alya\", \"Risky\", \"Rifki\", \"Fatih\", \"Dhafa\"};" << endl;

    cout << "\nIsi array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nama indeks ke-" << i << ": " << nama[i] << endl;
    }

    cout << "\nAscending (i++):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
    }

    cout << "\nDescending (i--):" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
    }

    string inputNama[5];

    cout << "\nInput array 5 nama:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        cin >> inputNama[i];
    }

    cout << "\nHasil input array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nama indeks ke-" << i << ": " << inputNama[i] << endl;
    }

    cout << "\nContoh array 2 dimensi:" << endl;
    cout << "int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};" << endl;

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nContoh string sebagai array karakter:" << endl;
    string nama1 = "Azriel";
    cout << "Karakter ke-0: " << nama1[0] << endl;
    cout << "Karakter ke-2: " << nama1[2] << endl;
    cout << "Karakter ke-5: " << nama1[5] << endl;

    cout << "Semua karakter:" << endl;
    for (int i = 0; i < nama1.length(); i++) {
        cout << nama1[i] << endl;
    }

    cout << "\nOperasi string:" << endl;
    string s1 = "hello";
    string s2 = "World";
    s1 = s2;
    cout << "s1 = " << s1 << endl;
    cout << "s1 + s2 = " << s1 + s2 << endl;
    cout << "Panjang s1 + s2 = " << (s1 + s2).length() << endl;
    cout << "Substring s1 = " << s1.substr(2, 3) << endl;

    short angka = 90;
    cout << "\nUkuran short: " << sizeof(angka) << " bytes" << endl;

    return 0;
}
