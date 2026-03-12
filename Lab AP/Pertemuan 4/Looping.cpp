#include <iostream>

using namespace std;

int main() {
    system("cls");

    cout << "--goto--" << endl;
    goto A;
    B:
    cout << "adalah ";
    goto C;
    E:
    cout << "Komputer ";
    goto F;
    C:
    cout << "anak ";
    goto D;
    A:
    cout << "Aku ";
    goto B;
    F:
    cout << "USU.";
    goto n;
    goto E;
    D:
    cout << "Ilmu ";
    goto E; 
    n:
    cout << endl;

    cout << "\nMenampilkan angka kelipatan 5" << endl;
    int i = 40;

    lipat:
    if (i%5 == 0) {
        cout << i << " ";
    }
    i--;

    if (i >= 5) {
        goto lipat;
    }
    cout << endl;

    cout << "\n--while statement--" << endl;

    int j = 10;
    cout << "ini while\n";
    while (j >= 1) {
        cout << j << ". pria solo" << endl;
        j--;
    } 

    cout << "\n--Do while statement--" << endl;
    char ulang;
    int k = 100;
    cout << "ini Do while" << endl;
    do {
        cout << k << ". Lorem" << endl;
        k--;
        cout << "mau ulang ga? "; 
        cin >> ulang;
    } while (ulang == 'y'); 
    cout << endl;

    cout << "\n--For loop--" << endl;
    // for (inialisasi, kondisi, increment/decrement)
    for (int l = 1; l <= 5; l++) {
        cout << "hidup jokowi\n";
    }
    cout << endl;

    cout << "--atribut length--" << endl;
    string kata;
    cout << "masukkan kata: ";
    cin >> kata;
    for (int m = 0; m < kata.length(); m++) {
        cout << m+1 << ". " << kata[m] << endl;
    }

    cout << "\n--nested for--"<< endl;
    for (int n = 1; n <= 5; n++) {
        for (int o = 1; o <= n; o++) {
            cout << "* ";
        }
        cout << endl;
    }
}