#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");
    float a, b, hasil;
    char op;

    cout << "Masukkan angka pertama : ";
    cin >> a;

    cout << "Masukkan operator      : ";
    cin >> op;

    cout << "Masukkan angka kedua   : ";
    cin >> b;

    if (op == '+') {
        hasil = a + b;
    } 
    else if (op == '-') {
        hasil = a - b;
    } 
    else if (op == '*') {
        hasil = a * b;
    } 
    else if (op == '/') {
        if (b != 0)
            hasil = a / b;
        else {
            cout << "Error: tidak bisa dibagi nol\n";
            return 1;
        }
    } 
    else {
        cout << "Operator tidak valid\n";
        return 1;
    }

    cout << "Hasil: " << hasil << endl;

    return 0;
}
