#include <iostream>

using namespace std;
int tambahbiasa(int par1, int par2) {
    par1 += par2;
    return par1;
}

int tambahpointer(int *par1, int *par2) {
    *par1 += *par2;
    return *par1;
}

int main() {
    system("cls");
    
    // int var = 10;
    // int *ptr;

    // ptr = &var;

    // cout <<"ALAMAT dari VARIABEL \" var \"        : " << &var << endl;
    // cout <<"ALAMAT YANG DITUNJUK oleh pointer   : " << ptr << endl;
    // cout <<"ISI alamat yg DITUNJUK oleh pointer : " << *ptr << endl;
    
    // Case di mana pointer not exactly "menunjuk" sebuah variabel, melainkan menunjuk sebuah nilai (array)
    // char *Ptr;
    // ptr = "Jakarta";

    // cout << ptr << endl;
    // cout << *ptr << endl;

    // Pointer langsung ke char
    // char *ptr;
    // *ptr = 'b';

    // cout << ptr;

    // contoh penggunaan pointer yang salah
    // pointer to undefined behavior
    // int *ptr;
    // *ptr = 10;

    // cout << ptr;
    // cout << *ptr;
    // cout << "hai";

    // Operasi logik pada var pointer
    // int a = 100, b = 200;
    // int *pa, *pb;

    // pa = &a;
    // pb = &b;
    // cout << pa << endl;
    // cout << pb << endl;

    // if (pa > pb) {
    //     cout << "alamat pa > pb" << endl;
    // } else if (pb > pa) {
    //     cout << "alamat pb > pa" << endl;
    // } 

    // pointer to array
    // char arr1[] = "indonesia";
    // char *ptr2;

    // ptr2 = arr1;

    // it will automatically point to the first element in array
    // cout << "Alamat yang ditunjukan pointer         : " << ptr2 << endl;
    // cout << "Alamat yang ditunjukan array indeks 0  : " << &arr1[0] << endl;
    // cout << "Alamat yang ditunjukan array indeks 1  : " << &arr1[1] << endl;
    // cout << "Alamat yang ditunjukan pointer         : " << *ptr2 << endl;
    // cout << "Alamat yang ditunjukan pointer         : " << *(ptr2 + 1) << endl;

    // pointer to pointer
    // string var = "JOKOWI";
    // string *ptr, **ptr_2;

    // ptr = &var;
    // ptr_2 = &ptr;

    // cout << "Nilai var                      : " << var << endl;
    // cout << "Nilai pointer 1 (no bintang)   : " << ptr << endl;
    // cout << "Nilai pointer 1 (1 bintang)    : " << *ptr << endl;
    // cout << "Nilai pointer 1 (0 bintang)    : " << ptr_2 << endl;
    // cout << "Nilai pointer 1 (1 bintang)    : " << *ptr_2 << endl;
    // cout << "Nilai pointer 1 (2 bintang)    : " << **ptr_2 << endl;

    // pointer as parameter
    // int a = 10, b = 5;
    // cout << "Hasil dari fungsi biasa        : " << tambahbiasa(a,b) << endl;
    // cout << "Nilai A setelah penjumlahan    : " << a << endl;
    // cout << "\nHasil dari fungsi pointer      : " << tambahpointer(&a,&b) << endl;
    // cout << "Nilai A setelah penjumlahan    : " << a << endl;

    // dynamic pointer
    int *ptr = new int;
    *ptr = 30;

    cout << "Isi variabel ptr: " << *ptr << "\nalamat variabel ptr: " << &ptr << "\nalamat yang ditunjuk pointer :" << ptr << endl;

    delete ptr; // deallocation
    cout << "Isi variabel ptr: " << *ptr << "\nalamat variabel ptr: " << &ptr << "\nalamat yang ditunjuk pointer :" << ptr << endl;
return 0;   
}