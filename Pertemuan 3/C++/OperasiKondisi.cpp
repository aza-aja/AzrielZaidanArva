#include <iostream>
#include <limits>

using namespace std;

/*
Materi Percabangan C++
1. if              -> menjalankan blok jika kondisi true.
2. if-else         -> memilih satu dari dua blok.
3. if-else if      -> memilih dari beberapa kondisi.
4. nested if       -> if di dalam if.
5. switch-case     -> percabangan untuk nilai tertentu (diskrit).
6. ternary operator-> bentuk singkat if-else.
*/

int main()
{
    system("cls");

    int nilai;
    string lampu;
    int hari;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    // 1) IF
    // Blok ini hanya berjalan jika kondisi (nilai > 75) bernilai true.
    cout << "\n[1] If statement\n";
    if (nilai > 75)
    {
        cout << "If: Anda lulus\n";
    }

    // 2) IF-ELSE
    // Jika kondisi true -> blok if, jika false -> blok else.
    cout << "\n[2] If-Else statement\n";
    if (nilai > 75)
    {
        cout << "If-Else: Anda lulus\n";
    }
    else
    {
        cout << "If-Else: Anda tidak lulus\n";
    }

    // 3) IF - ELSE IF - ELSE
    // Dipakai ketika ada lebih dari dua kemungkinan kondisi.
    // cin.ignore diperlukan karena sebelumnya ada cin >> nilai.
    cout << "\n[3] If-Else If statement\n";
    cout << "Masukkan kondisi lampu (hijau/kuning/merah): ";
    getline(cin, lampu);

    if (lampu == "hijau")
    {
        cout << "Silakan jalan\n";
    }
    else if (lampu == "kuning")
    {
        cout << "Berhati-hati\n";
    }
    else if (lampu == "merah")
    {
        cout << "Berhenti\n";
    }
    else
    {
        cout << "Kondisi tidak valid\n";
    }

    // 4) NESTED IF
    // Kondisi kedua dicek hanya jika kondisi pertama benar.
    cout << "\n[4] Nested If statement\n";
    if (nilai > 75)
    {
        cout << "Nested If: Anda lulus\n";
        if (nilai == 100)
        {
            cout << "Nested If: Nilai Anda sempurna\n";
        }
    }
    else
    {
        cout << "Nested If: Anda tidak lulus\n";
    }

    // 5) SWITCH-CASE
    // Cocok untuk nilai tetap seperti nomor hari.
    // break mencegah eksekusi lanjut ke case berikutnya.
    // default mirip else: dijalankan jika tidak ada case yang cocok.
    cout << "\n[5] Switch-Case statement\n";
    cout << "Masukkan angka hari (1-7): ";
    cin >> hari;

    switch (hari)
    {
    case 1:
        cout << "Senin\n";
        break;
    case 2:
        cout << "Selasa\n";
        break;
    case 3:
        cout << "Rabu\n";
        break;
    case 4:
        cout << "Kamis\n";
        break;
    case 5:
        cout << "Jumat\n";
        break;
    case 6:
        cout << "Sabtu\n";
        break;
    case 7:
        cout << "Minggu\n";
        break;
    default:
        cout << "Hari tidak valid\n";
        break;
    }

    // 6) PENENTUAN GRADE
    // Menggunakan if-else karena switch tidak mendukung rentang nilai standar.
    cout << "\n[6] Penentuan grade\n";
    char grade;
    if (nilai >= 85 && nilai <= 100)
    {
        grade = 'A';
    }
    else if (nilai >= 80)
    {
        grade = 'B';
    }
    else if (nilai >= 70)
    {
        grade = 'C';
    }
    else if (nilai >= 20)
    {
        grade = 'D';
    }
    else if (nilai >= 0)
    {
        grade = 'E';
    }
    else
    {
        grade = '?';
    }
    cout << "Grade: " << grade << '\n';

    // 7) TERNARY OPERATOR
    // Sintaks: (kondisi) ? nilai_jika_true : nilai_jika_false
    cout << "\n[7] Ternary operator\n";
    string cek = (nilai % 2 == 0) ? "genap" : "ganjil";
    cout << nilai << " adalah bilangan " << cek << '\n';

    return 0;
}
