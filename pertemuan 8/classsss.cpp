#include <iostream>
using namespace std;

class ContohAkses {
    int n; // private
    private:
    int privateVar;

    protected:
    int protectedVar;

    public:
    int publicVar;

    // Constructor
    // ContohAkses() {
    //     privateVar = 1;
    //     protectedVar = 2;
    //     publicVar = 3;
    // }

    // constructor berparameter
    ContohAkses(int x) {
        privateVar = x;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkansemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }

    class Turunan : public ContohAkses {
        public:
        void AksesProtected() {
            
    }

    }

};

int main() {
    system("cls");
    ContohAkses obj(1);
    obj.tampilkansemua();

    cout << "Akses dari luar kelas : " << endl;
    cout << obj.publicVar << endl;
    // cout << obj.protectedVar << endl;
    // cout << obj.privateVar << endl;


    return 0;
}