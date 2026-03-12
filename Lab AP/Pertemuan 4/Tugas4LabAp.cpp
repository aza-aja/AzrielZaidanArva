#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string pesan;

    cout << "Masukkan pesan: ";
    cin >> pesan;

    string hasil = "";

    for(int i = 0; i < pesan.length(); i++) {
        hasil += pesan.substr(0, i + 1);
    }

    cout << "Pesan rahasia: " << hasil << endl;

    return 0;
}