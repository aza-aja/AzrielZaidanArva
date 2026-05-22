# include <iostream>

using namespace std;

void sapa (string nama) {
    cout << "halo, apa kabar " << nama << " selamat belajar c++" << endl; 
}

int main() {
    system("cls");
    string namapengguna = "aza";
    sapa(namapengguna);
    return 0;
}