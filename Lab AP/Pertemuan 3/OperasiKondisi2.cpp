#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int x;

    cout << "Masukkan nilai: "; cin >> x;

    // if statement
    if (x > 75)
    {
        cout << "Anda Lulus" << endl;
    }

    // if else statement
    if (x > 75)
    {
        cout << "Anda Lulus";
    }
    else 
    {
        cout <<"Anda Tidak Lulus";
    }

    // if else if  statement 
    string lampu;
    cout << "kondisi: "; getline(cin, lampu);

    if (lampu == "hijau") 
    {
        cout << "Silahkan Jalan" << endl;
    }

    else if (lampu == "kuning")
    {
        cout << "Berhati-hati" << endl;
    }

    else if (lampu == "merah")
    {
        cout << "Berhenti" << endl;
    }

    else
    {
        cout << "Kondisi Tidak Valid";
    }
    return 0;

    // nested if statement
    if (x > 75)
    {
        cout << "Anda Lulus" << endl;
        if (x == 100) 
        {
            cout << "Nilai Anda Sempurna";
        }
    }

    else 
    {
        cout << "Anda Tidak Lulus";
    }

    // switch case statement
    switch (x) 
    {
        case 1:
            cout << "senin" << endl;
            break;
        case 2:
            cout << "selasa" << endl;
            break;
        case 3:
            cout << "rabu" << endl;
            break;
        case 4:
            cout << "kamis" << endl;
            break;
        case 5:
            cout << "jumat" << endl;
            break;
        case 6:
            cout << "sabtu" << endl;
            break;
        case 7:
            cout << "minggu" << endl;
            break;
    }

    // switch range
    switch (x) 
    {
        case 85 ... 100: cout << "A"; break;
        case 80 ... 84: cout << "B"; break;
        case 70 ... 79: cout << "C"; break;
        case 20 ... 69: cout << "D"; break;
        case 0 ... 19: cout << "E"; break;
        default : cout << "Nilai Invalid" << endl; break;
    }

    // ternary operator
    string cek = (x % 2 == 0) ? "genap" : "ganjil";
    cout << x << " itu adalah bilangan " << cek;
}