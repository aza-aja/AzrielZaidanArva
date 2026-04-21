#include <iostream>
using namespace std;

int main() {
    system("cls");

    // jm = jam mulai, mm = menit mulai, js = jam selesai, ms = menit selesai.
    int jm, mm, js, ms;

    // judul
    cout << "=========================================" << endl;
    cout << "   SELAMAT DATANG DI WARNET JANGETKNET" << endl;
    cout << "         BILLING SYSTEM UNI ACA" << endl;
    cout << "=========================================" << endl;

    // input waktu
    cout << "Masukkan Jam Mulai     (0-23)  : "; cin >> jm;
    cout << "Masukkan Menit Mulai   (0-59)  : "; cin >> mm;
    cout << "Masukkan Jam Selesai   (0-23)  : "; cin >> js;
    cout << "Masukkan Menit Selesai (0-59)  : "; cin >> ms;

    // validasi input waktu
    if (jm < 0 || jm > 23 || js < 0 || js > 23 || mm < 0 || mm > 59 || ms < 0 || ms > 59) {
        cout << "Error, input tidak valid\n";
        return 0;
    }

    // ubah ke menit
    int mulai = jm * 60 + mm;
    int selesai = js * 60 + ms;

    // ngecek kalau lewat tengah mlm bakal ditambah 24 jam (1440 menit)
    if ((jm > js) || (jm == js && mm > ms)) {
        selesai = selesai + 1440;
    }

    // durasi (menit)
    int durasi = selesai - mulai;

    // durasi dlm satuan jam dan menit
    int JamWaktu = durasi / 60;
    int MenitWaktu = durasi % 60;

    // pembulatan jam
    int jam = durasi / 60;
    if (durasi % 60 != 0) {
        jam = jam + 1;
    }

    // nentuin tarif sesuai durasi
    int biaya, denda, tagihan;
    string kategori;
    
    if (durasi <= 30) {
        biaya = 5000;
        tagihan = biaya;
        kategori = "0 - 30 menit (Rp5000)";
    }
    else if (durasi <= 120) {
        biaya = 7000;
        tagihan = biaya * jam;
        kategori = "31 - 120 menit (Rp7000/jam)";
    }
    else if (durasi <= 300) {
        biaya = 6000 * jam;
        tagihan = biaya * jam;
        kategori = "121 - 300 menit (Rp6000/jam)";
    }
    else {
        biaya = 5000;
        denda = 10000;
        tagihan = biaya * jam + denda;
        kategori = "ANDA MELEBIHI BATAS WAKTU WAJAR! DENDA RP 10.000 DIKENAKAN. (Rp5000/jam + Denda Rp10000)";
    }

    // output struk tagihan
    cout << "\n--- STRUK TAGIHAN ---\n";
    cout << "Waktu Mulai    : " << jm << ":" << mm << endl;
    cout << "Waktu Selesai  : " << js << ":" << ms << endl;
    cout << "Durasi         : " << JamWaktu << " Jam " << MenitWaktu << " Menit " << "(" << durasi << " Menit)" << endl; 
    cout << "Kategori       : " << kategori << endl;

    if (denda == 0) {
    cout << "Perhitungan    : " << jam << " Jam x Rp " << biaya << " = Rp " << tagihan << endl;
    }
    else {
    cout << "Perhitungan    : " << jam << " Jam x Rp " << biaya << " + " << denda << " = Rp " << tagihan << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << "TOTAL TAGIHAN  : Rp " << tagihan << endl;
    cout << "=========================================";

return 0;
}