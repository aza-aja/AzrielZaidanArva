#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{   
    system("cls");
    float berat, tinggi_cm, tinggi_m, bmi;

    cout << "Masukkan berat badan (kg): "; cin >> berat;

    cout << "Masukkan tinggi badan (cm): "; cin >> tinggi_cm;

    tinggi_m = tinggi_cm / 100;
    bmi = berat / (tinggi_m * tinggi_m);

    cout << "BMI = " << fixed << setprecision(2) << bmi << endl;

    if (bmi < 18.5)
        cout << "Berat badan kurang";
    else if (bmi >= 18.5 && bmi < 25)
        cout << "Berat badan normal";
    else if (bmi >= 25 && bmi < 30)
        cout << "Berat badan berlebih";
    else
        cout << "Obesitas";

    return 0;
}