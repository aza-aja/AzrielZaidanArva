#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan
void pesan() {
    cout << "==== Welcome Genii O'Four ====" << endl;
}

// Fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

int kali(int a, int b) {
    return a * b;
}
// Fungsi overlooad
int kali (float a, float b, float c) {
    return a * b * c;
}

float kali (float a, float b) {
    return a * b;
}

// fungsi rekursif
// 5! = 5 x 4 x 3 x 2 x 1 
long faktorial (int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * faktorial(x - 1);
    }
}

int main() {
    system("cls");
    int x = 7, y = 3, z = 2;

    // Fungsi void
    pesan();

    // Fungsi dengan nilai balikan
    int hasiltambah = tambah(x,y);
    cout << "hasil tambah = " << hasiltambah << endl;
    cout << tambah(x,y) << endl << endl;
    
    // Fungsi overload
    int hasilkali = kali(x, y);
    cout << "hasil kali (int 2) = " << hasilkali << endl;

    int hasilkali3 = kali(x, y, z);
    cout << "hasil kali (int 3) = " << hasilkali3 << endl;

    float hasilkalifloat = kali(2.5f, 3.1f);
    cout << "hasil kali pecahan = " << hasilkalifloat << endl;

    // Fungsi rekursif
    int faktor = faktorial(x);
    cout << "faktorial x = " << faktor << endl;

    return 0;
}