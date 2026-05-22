#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int acakAngka(int min, int max) {
    return rand() % (max - min + 1) + min;
}

char acakOp() {
    char op[] = {'+', '-', '*', '%'};
    return op[rand() % 4];
}

int hitung(int a, int b, char op) {
    if (op == '+') return a + b;
    else if (op == '-') return a - b;
    else if (op == '*') return a * b;
    else return a % b;
}

void mulaiKuis(vector<int>& history) {
    int n;
    cout << "\nJumlah soal (1-10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Input tidak valid!\n";
        return;
    }

    int skor = 0;

    for (int i = 0; i < n; i++) {
        int a = acakAngka(1, 20);
        int b = acakAngka(1, 20);
        char op = acakOp();

        int benar = hitung(a, b, op);
        int jawaban;

        cout << i + 1 << ". " << a << " " << op << " " << b << " = ";
        cin >> jawaban;

        if (jawaban == benar) {
            cout << "Benar\n";
            skor++;
        } else {
            cout << "Salah, jawaban: " << benar << endl;
        }
    }
    
    cout << "\nSkor kamu: " << skor << "/" << n << endl;
    history.push_back(skor);
}

void tampilHistory(const vector<int>& history) {
    if (history.empty()) {
        cout << "belum ada history :v\n";
        return;
    }

    for (int i = 0; i < history.size(); i++) {
        cout << "Sesi " << i + 1 << ": " 
             << history[i] << "/10\n";
    }
}

int main() {
    system("cls");
    vector<int> history;
    int pilihan;

    srand(time(0));

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Mulai Kuis\n";
        cout << "2. History\n";
        cout << "3. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) mulaiKuis(history);
        else if (pilihan == 2) tampilHistory(history);
        else if (pilihan == 3) cout << "Keluar...\n";
        else cout << "Pilihan tidak ada\n";

    } while (pilihan != 3);

    return 0;
}