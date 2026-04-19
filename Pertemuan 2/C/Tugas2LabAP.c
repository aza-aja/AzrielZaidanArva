#include <stdio.h>

#define PI 3.14159

int main() {
    system("cls");
    float r, luas, volume;

    printf("jari-jari bola      : ");
    scanf("%f", &r);

    luas = 4 * PI * r * r;
    volume = (4.0/3.0) * PI * r * r * r;

    printf("Luas permukaan bola : %.2f\n", luas);
    printf("Volume bola         : %.2f\n", volume);

    return 0;
}