#include <iostream>
#include <conio.h>
using namespace std;


int main() {
    system ("cls");
    int a;
    int b;

    a = 5;
    b = 7;

    // ASSIGMENT OPERATOR (+ - * / %)

    int tambah = a+b;
    int kurang = a-b;
    int kali = a*b;
    float bagi = a/b;
    float bagi2 = float (a)/float (b);
    int mod = a%b;

    cout << "a = 5\nb = 7" << endl; 
    cout << endl;

    cout << "----" << endl;
    cout << endl;

    cout << "ASSIGMENT OPERATOR" << endl;
    cout << endl;

    cout << "Hasil tambah   (a+b)           : " << tambah << endl;
    cout << "Hasil kurang   (a-b)           : " << kurang << endl;
    cout << "Hasil kali     (a+b)           : " << kali << endl;
    cout << "Hasil bagi     (a/b) bulat     : " << bagi << endl;
    cout << "Hasil bagi     (a/b) pecahan   : " << bagi2 << endl;
    cout << "Hasil modulo   (a%b)           : " << mod << endl;
    cout << endl;

    cout << "----" << endl;
    cout << endl;

    // RELATION OPERATOR

    // membandingkan kedua nilai dengan operator ()==, >, >=, <, <=, !=)
    // jika benar akan memberikan output 1 dan 0 jika salah

    cout << "RELATION OPERATOR" << endl;
    cout << endl;
    cout << "a==b   : " << (a==b) << endl; 
    cout << "a>b    : " <<(a>b) << endl; 
    cout << "a>=b   : " <<(a>=b) << endl; 
    cout << "a<b    : " <<(a<b) << endl; 
    cout << "a<=b   : " <<(a<=b) << endl;
    cout << "a!=b   : " <<(a!=b) << endl;
    cout << endl;

    cout << "----" << endl;
    cout << endl;

    // LOGICAL OPERATOR

    // and (&&)
    cout << "LOGICAL OPERATOR" << endl;
    cout << endl;
    cout << "Logical Operator And (&&)" << endl;
    cout << "true   &&  true    : " << (true && true) << endl;
    cout << "true   &&  false   : " << (true && false) << endl;
    cout << "false  &&  true    : " << (false && true) << endl;
    cout << "false  &&  false   : " << (false && false) << endl;
    cout << endl;

    // or (||)
    cout << "Logical Operator Or (||)" << endl;
    cout << "true   ||  true    : " << (true || true) << endl;
    cout << "true   ||  false   : " << (true || false) << endl;
    cout << "false  ||  true    : " << (false || true) << endl;
    cout << "false  ||  false   : " << (false || false) << endl;
    cout << endl;

    // negasi (!)
    cout << "Logical Operator Negasi (!!)" << endl;
    cout << "!true  : " << (!true) << endl;
    cout << "!true  : " << (!false) << endl;
    cout << endl;

    cout << "----" << endl;
    cout << endl;

    // BITWISE OPERATOR (!, &, |, ~, ^)
    cout << "BITWISE OPERATOR" << endl;
    cout << endl;
    cout << "5&7    : " << (5&7) << endl;
    cout << "5|7    : " << (5|7) << endl;
    cout << "5^7    : " << (5^7) << endl;
    cout << "~1024  : " << (~1024) << endl;
    cout << "7 << 2 : " << (7 << 2) << endl;
    cout << "7 >> 2 : " << (7 >> 2) << endl;
    cout << endl;

    cout << "----" << endl;
    cout << endl;

    // SHORTHAND

    cout << "SHORTHAND" << endl;
    cout << endl;

    a += 2; // a = a + 2
    cout << "a += 2 (a = a + 2) : " << a << endl;

    a -= 2; // a = a - 2
    cout << "a -= 2 (a = a - 2) : " << a << endl;

    a *= 2; // a = a * 2
    cout << "a *= 2 (a = a * 2) : " << a << endl;

    a /= 2; // a = a / 2
    cout << "a /= 2 (a = a / 2) : " << a << endl;
    cout << endl;

    cout << "----" << endl;
    cout << endl;

    // INCREMENT dan DECREMENT
    cout << "INCREMENT & DECREMENT" << endl;
    cout << endl;

    // - pre increment
    cout << "Pre Increment" << endl;
    cout << "a      : " << a << endl;
    cout << "++a    : " << ++a << endl;
    cout << "a      : " << a << endl;
    cout << endl;

    // - pre decrement
    cout << "Pre Decrement" << endl;
    cout << "a      : " << a << endl;
    cout << "--a    : " << --a << endl;
    cout << "a      : " << a << endl;
    cout << endl;

    // - post increment
    cout << "Post Increment" << endl;
    cout << "a      : " << a << endl;
    cout << "a++    : " << a++ << endl;
    cout << "a      : " << a << endl;
    cout << endl;

    // - post decrement
    cout << "Post Decrement" << endl;
    cout << "a      : " << a << endl;
    cout << "a--    : " << a-- << endl;
    cout << "a      : " <<a << endl;
    cout << endl;

    return 0;
}