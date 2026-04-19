#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    system("cls");
    double r, luas, volume;

    cout << "jari-jari bola     : ";
    cin >> r;

    luas = 4 * PI * r * r;
    volume = (4.0/3.0) * PI * r * r * r;

    cout << "Luas permukaan bola: " << luas << endl;
    cout << "Volume bola        : " << volume << endl;

    return 0;
}