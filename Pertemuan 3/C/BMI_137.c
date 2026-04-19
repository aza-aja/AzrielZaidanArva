#include <stdio.h>

int main() 
{
    system("cls");
    float berat, tinggi_cm, tinggi_m, bmi;

    printf("Masukkan berat badan (kg): ");
    scanf("%f", &berat);

    printf("Masukkan tinggi badan (cm): ");
    scanf("%f", &tinggi_cm);

    tinggi_m = tinggi_cm / 100;
    bmi = berat / (tinggi_m * tinggi_m);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Berat badan kurang");
    else if (bmi >= 18.5 && bmi < 25)
        printf("Berat badan normal");
    else if (bmi >= 25 && bmi < 30)
        printf("Berat badan berlebih");
    else
        printf("Obesitas");

    return 0;
}