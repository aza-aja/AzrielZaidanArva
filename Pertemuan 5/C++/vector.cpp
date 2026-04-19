#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    system("cls");

    cout << "=== MATERI VECTOR ===" << endl;

    vector<string> nama = {"Alya", "Risky", "Rifki"};

    cout << "\nContoh deklarasi vector:" << endl;
    cout << "vector<string> nama = {\"Alya\", \"Risky\", \"Rifki\"};" << endl;

    cout << "\nIsi vector awal:" << endl;
    for (int i = 0; i < nama.size(); i++) {
        cout << "Index ke-" << i << ": " << nama[i] << endl;
    }

    cout << "\nJumlah elemen vector: " << nama.size() << endl;
    cout << "Elemen pertama: " << nama.front() << endl;
    cout << "Elemen terakhir: " << nama.back() << endl;

    cout << "\nMenambah data dengan push_back():" << endl;
    cout << "contoh code:" << endl;
    cout << "nama.push_back(\"Fatih\");" << endl;
    cout << "nama.push_back(\"Dhafa\");" << endl;
    nama.push_back("Fatih");
    nama.push_back("Dhafa");
    cout << "output     :" << endl;
    for (int i = 0; i < nama.size(); i++) {
        cout << "Index ke-" << i << ": " << nama[i] << endl;
    }

    cout << "\nMengubah data pada index ke-1:" << endl;
    cout << "contoh code:" << endl;
    cout << "nama[1] = \"Audri\";" << endl;
    cout << "output     :" << endl;
    nama[1] = "Audri";
    for (int i = 0; i < nama.size(); i++) {
        cout << "Index ke-" << i << ": " << nama[i] << endl;
    }

    cout << "\nMenghapus data terakhir dengan pop_back():" << endl;
    cout << "contoh code:" << endl;
    cout << "nama.pop_back();" << endl;
    cout << "output     :" << endl;
    nama.pop_back();
    for (int i = 0; i < nama.size(); i++) {
        cout << "Index ke-" << i << ": " << nama[i] << endl;
    }

    int jumlah;
    vector<string> inputNama;

    cout << "\nInput vector dinamis" << endl;
    cout << "Masukkan jumlah nama: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        string data;
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        cin >> data;
        inputNama.push_back(data);
    }

    cout << "\nHasil input vector:" << endl;
    for (int i = 0; i < inputNama.size(); i++) {
        cout << "Index ke-" << i << ": " << inputNama[i] << endl;
    }

    cout << "\nJumlah elemen vector input: " << inputNama.size() << endl;

    return 0;
}
