#include <iostream>

using namespace std;

main()
{
    system("cls");
    // deklarasi data
    float a, b, hasil;
    char op;

    // judul program
    cout << "Kalkulator Dua Bilangan" << endl;

    cin >> a;
    cin >> op;
    cin >> b;

    if (op == '+', a + b)
    {
        hasil = a + b;
    }
    else if (op == '-')
    {
        hasil = a - b;
    }
    else if (op == '*')
    {
        hasil = a * b;
    }
    else if (op == '/')
    {
        hasil = a / b;
    }
    else cout << "Error";

    cout << a << op << b << "=" << hasil;

    return 0;
}
 