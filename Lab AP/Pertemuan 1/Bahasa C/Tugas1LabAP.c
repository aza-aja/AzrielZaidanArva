#include <stdio.h>      // untuk printf dan scanf
#include <stdlib.h>     // untuk system("cls")

int main() {
    system("cls");  // bersihkan layar (khusus Windows)

    char nama[100], NIP[50], departemen[100], jabatan[100];  // array karakter
    int umur;                                                // variabel umur
    double gaji;                                             // variabel gaji

    printf("masukkan nama          : "); fgets(nama, sizeof(nama), stdin);              // input nama (bisa spasi)
    printf("masukkan NIP           : "); fgets(NIP, sizeof(NIP), stdin);                // input NIP
    printf("masukkan umur          : "); scanf("%d", &umur);                            // input umur
    getchar();  // buang newline sisa
    printf("masukkan departemen    : "); fgets(departemen, sizeof(departemen), stdin);  // input departemen
    printf("masukkan jabatan       : "); fgets(jabatan, sizeof(jabatan), stdin);        // input jabatan
    printf("masukkan gaji          : "); scanf("%lf", &gaji);                           // input gaji

    printf("\n"); // pindah baris
    printf("DATA MAHASISWA\n");             // nampilkan "DATA MAHASISWA"
    printf("\n"); // pindah baris

    printf("nama       : %s", nama);        // nampilkan nama
    printf("NIP        : %s", NIP);         // nampilkan NIP
    printf("umur       : %d\n", umur);      // nampilkan umur
    printf("departemen : %s", departemen);  // nampilkan departemen
    printf("jabatan    : %s", jabatan);     // nampilkan jabatan
    printf("gaji       : %.2lf\n", gaji);   // namiplkan gaji

    return 0;
}