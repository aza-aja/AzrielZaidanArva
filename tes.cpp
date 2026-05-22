#include <iostream>

using namespace std;

int main() {
    system("cls");

    int i = 0, desimal, biner[32];

    cout << "Desimal ke Biner" << endl;

    cout << "Masukan angka desimal: ";
    cin >> desimal;

    while(desimal > 0) {
        biner[i] = desimal % 2;
        desimal = desimal / 2;
        i++;
    }
    cout << "Biner: ";
    for(int j = i - 1; j >= 0; j--) {
        cout << biner[j];
    }
    
}