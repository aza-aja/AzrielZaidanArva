#include <iostream>

using namespace std;

int main() {
    system("cls");

    cout << "--goto--" << endl;
    goto A;             // 1. pergi ke A
    B:                  // B
    cout << "adalah ";  // B : "adalah "
    goto C;             // 3. pergi ke C
    E:                  // E 
    cout << "Komputer ";// E : "Komputer "
    goto F;             // pergi ke F
    C:                  // C
    cout << "anak ";    // C : "anak "
    goto D;             // 4. pergi ke D
    A:                  // A 
    cout << "Aku ";     // A : "Aku "
    goto B;             // 2. pergi ke B
    F:                  // F
    cout << "USU.";     // F : "USU."
    goto n;             // pergi ke n
    D:                  // D
    cout << "Ilmu ";    // D : "Ilmu "
    goto E;             // pergi ke E
    n:                  // n
    cout << endl;       // endl

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

    cout << "\n--while statement--" << endl; //

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